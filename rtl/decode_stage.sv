module decode_stage(
    input clk, clk_en, sync_rst,
    input [31:0] inst_in,

    // * From the fetch stage
    input [29:0] next_pc,
    input [29:0] pc_in,

    // * From the execute stage
    input [29:0] pc_target_address_in,
    input branch_feedback_enable,
    input branch_actual_result, //1 = TAKEN
    input branch_prediction_incorrect,

    // * From the writeback stage
    input [31:0] regfile_data_in,
    input [4:0] regfile_destination,
    input regfile_we,

    // * To the fetch stage
    output pc_jmp,
    output [29:0] pc_target_address,

    // * To the execute stage
    output [31:0] inst_out,
    output [12:0] ctr_word_out,
    output [31:0] regfile_rs1_out,
    output [31:0] regfile_rs2_out,
    output [29:0] pc_out,
    output branch_prediction_taken
);
    reg [31:0] inst_out_buffer;
    reg [12:0] ctr_word_out_buffer;
    reg [29:0] pc_buffer;
    assign pc_out = pc_buffer;

    always_ff @(posedge clk) begin : Buffer
        if(sync_rst || branch_prediction_incorrect) begin
            ctr_word_out_buffer <= 0;
        end else if(clk_en) begin
            pc_buffer <= pc_in;
            inst_out_buffer <= inst_in;
            ctr_word_out_buffer <= decoder_ctr_word;
            branch_prediction_buffer <= branch_prediction;
        end
    end

    assign inst_out = inst_out_buffer;
    assign ctr_word_out = ctr_word_out_buffer;

    wire [12:0] decoder_ctr_word;

    inst_dec_rom instruction_decoder (
        .opcode(inst_in[6:0]), .ctr_word(decoder_ctr_word)
    );

    regfile regfile(
        .clk(clk), .clk_en(clk_en), .we(regfile_we),
        .data_in(regfile_data_in), .rs1_addr(inst_in[19:15]), .rs2_addr(inst_in[24:20]), .rd_addr(regfile_destination),
        .rs1(regfile_rs1_out), .rs2(regfile_rs2_out)
    );

    wire branch_prediction;
    reg branch_prediction_buffer;
    assign branch_prediction_taken = (((branch_prediction && decoder_ctr_word[7]) || decoder_ctr_word[6]) && !btb_miss);

    branch_pred #(
        .GHRWIDTH(6)
    ) branch_pred (
        .clk(clk), .clk_en(clk_en), .sync_rst(sync_rst),
        .actual_result(branch_actual_result), .feedback_enable(branch_feedback_enable),
        .prediction(branch_prediction)
    );

    wire [29:0] btb_out;
    wire btb_miss;

    branch_target_buffer #(
        .PC_BITWIDTH(30), .LOW_PC_BITWIDTH(6)
    ) branch_target_buffer(
        .clk(clk), .clk_en(clk_en), .sync_rst(sync_rst), .we(branch_feedback_enable),
        .data_in(pc_target_address_in), .r_address(next_pc), .w_address(pc_buffer),
        .data_out(btb_out), .miss(btb_miss)
    );

    assign pc_jmp = branch_prediction_incorrect || branch_prediction_taken;
    assign pc_target_address = branch_prediction_incorrect ? pc_target_address_in : btb_out;

endmodule : decode_stage

module inst_dec_rom(
    input [6:0] opcode,
    output logic [12:0] ctr_word
);
    always_comb begin : DecodeOpcode
        case(opcode)
        7'b0110011: ctr_word = 13'b00_1_0_0_0_0_000_0_0_0; //ARITH TYPE
        7'b0010011: ctr_word = 13'b00_1_0_0_0_0_000_0_1_0; //ARITH-I TYPE
        7'b0000011: ctr_word = 13'b01_1_0_1_0_0_000_1_1_0; //LOAD TYPE 
        7'b0100011: ctr_word = 13'b00_0_1_1_0_0_001_1_1_0; //STORE TYPE
        7'b1100011: ctr_word = 13'b00_0_0_0_1_0_010_1_1_1; //BRANCH TYPE
        7'b1101111: ctr_word = 13'b10_1_0_0_0_1_011_1_1_1; //JAL
        7'b1100111: ctr_word = 13'b10_1_0_0_0_1_000_1_1_0; //JALR
        7'b0110111: ctr_word = 13'b11_1_0_0_0_0_000_0_0_0; //LUI
        7'b0010111: ctr_word = 13'b00_1_0_0_0_0_100_1_1_1; //AUIPC
        default: ctr_word = 13'b00_0_0_0_0_0_000_0_0_0; //Default: NOP
        endcase
    end

/*
[0] ALU_ASEL: RS1, PC
[1] ALU_BSEL: RS2, IMM
[2] ALU_MODSEL: FN3, ADD
[5:3] IMM_SEL: I, S, B, J, U
[6] JUMP
[7] BRANCH
[8] BUS_LOCK
[9] MEMORY_MODE: READ, WRITE
[10] REG_WE
[12:11]: REG_IN: ALU, MEMORY, PC+4, U-TYPE-IMM
*/

endmodule : inst_dec_rom

module branch_pred #(
    parameter GHRWIDTH = 6 //Bitwidth of the global history register
)(
    input clk, clk_en, sync_rst, actual_result, feedback_enable,
    output prediction
);
    reg [1:0] ctr [(2**GHRWIDTH)-1:0]; //2**GHRWIDTH 2-bit saturating counters
    reg [GHRWIDTH-1:0] global_history; //Shift register that tracks the history of branches (1 = taken, 0 = not taken)

    reg [1:0] output_ctr;

    logic [1:0] ctr_updt; //Input to the selected saturating counter
    always_comb begin : SaturationLogic //If Actual_result = 1, increment. Else, decrement
        case(output_ctr)
        2'h0: ctr_updt = actual_result ? 1 : 0;
        2'h1: ctr_updt = actual_result ? 2 : 0;
        2'h2: ctr_updt = actual_result ? 3 : 1;
        2'h3: ctr_updt = actual_result ? 3 : 2;
        endcase
    end

    always_ff @(posedge clk) begin : RefreshAndFF
        if(sync_rst) begin //Reset procedure
                global_history <= 0;
            end else if(clk_en) begin
            output_ctr <= ctr[(feedback_enable) ? {global_history[GHRWIDTH-2:0], actual_result} : global_history];
            if(feedback_enable) begin
                global_history <= {global_history[GHRWIDTH-2:0], actual_result}; //Push the most recent result
                ctr[global_history] <= ctr_updt; //Update saturating counter
            end
        end
    end

    assign prediction = output_ctr[1];

endmodule : branch_pred

module branch_target_buffer #(
    parameter PC_BITWIDTH = 30,
    parameter LOW_PC_BITWIDTH = 6
)(
    input clk, clk_en, sync_rst, we,
    input [PC_BITWIDTH-1:0] data_in, r_address, w_address,
    output [PC_BITWIDTH-1:0] data_out,
    output miss
);
    localparam CACHESIZE = 2**LOW_PC_BITWIDTH;
    localparam TAGSIZE = PC_BITWIDTH-LOW_PC_BITWIDTH;

    reg [PC_BITWIDTH-1:0] cache [CACHESIZE-1:0];
    reg [TAGSIZE-1:0] tag [CACHESIZE-1:0];
    reg [PC_BITWIDTH-1:0] cache_buffer;
    reg [TAGSIZE-1:0] tag_buffer;
    reg [CACHESIZE-1:0] tag_valid;

    always_ff @(posedge clk) begin
        if(sync_rst) tag_valid <= 0;
        else if(clk_en) begin
            cache_buffer <= cache[r_address[LOW_PC_BITWIDTH-1:0]];
            tag_buffer <= tag[r_address[LOW_PC_BITWIDTH-1:0]];
            if(we) begin
                cache[w_address[LOW_PC_BITWIDTH-1:0]] <= data_in;
                tag[w_address[LOW_PC_BITWIDTH-1:0]] <= w_address[PC_BITWIDTH-1:LOW_PC_BITWIDTH];
                tag_valid <= tag_valid | ((CACHESIZE)'(1) << w_address[LOW_PC_BITWIDTH-1:0]);
            end
        end
    end

    assign miss = ({tag_valid[r_address[LOW_PC_BITWIDTH-1:0]], tag_buffer} != {1'B1, r_address[PC_BITWIDTH-1:LOW_PC_BITWIDTH]});
    assign data_out = cache_buffer;

endmodule : branch_target_buffer
