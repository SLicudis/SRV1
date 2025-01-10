module execute_stage(
    input clk, clk_en, sync_rst,
    
    // * From decode stage
    input [31:0] inst_in,
    input [12:0] ctr_word_in,
    input [31:0] regfile_rs1,
    input [31:0] regfile_rs2,
    input [29:0] pc_in,
    input branch_prediction_taken,

    // * To decode stage
    output [29:0] pc_target_address,
    output branch_feedback_enable,
    output branch_actual_result,
    output branch_prediction_incorrect,

    // * To writeback stage
    output [19:0] inst_u_imm_out,
    output [2:0] inst_fn3_out,
    output [4:0] rd_addr_out,
    output [2:0] ctr_out,
    output [31:0] alu_out,
    output [29:0] inc_pc_out,

    // * To memory pins
    output logic [31:0] data_out,
    output [29:0] address_out,
    output [3:0] mask,
    output bus_lock,
    output memory_mode //Write = 1
);
    //                                                                                                  //
    // * Control lines
    wire ctr_alu_asel = ctr_word_in[0];
    wire ctr_alu_bsel = ctr_word_in[1];
    wire ctr_alu_modsel = ctr_word_in[2];
    wire [2:0] ctr_imm_sel = ctr_word_in[5:3];
    wire ctr_jump = ctr_word_in[6];
    wire ctr_branch = ctr_word_in[7];
    wire ctr_bus_lock = ctr_word_in[8];
    wire ctr_memory_mode = ctr_word_in[9];

    // * Instruction parts
    wire [6:0] inst_fn7 = inst_in[31:25];
    wire [2:0] inst_fn3 = inst_in[14:12];

    wire [31:0] inst_i_imm = {{20{inst_in[31]}}, inst_in[31:20]};
    wire [31:0] inst_s_imm = {{20{inst_in[31]}}, inst_in[31:25], inst_in[11:7]};
    wire [31:0] inst_b_imm = {{20{inst_in[31]}}, inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0};
    wire [31:0] inst_u_imm = {inst_in[31:12], 12'h0};
    wire [31:0] inst_j_imm = {{12{inst_in[31]}}, inst_in[20], inst_in[19:12], inst_in[30:21], 1'b0};

    //                                                                                                  //

    // * Writeback stage buffers

    reg [2:0] ctr_buffer;
    assign ctr_out = ctr_buffer;

    reg [19:0] inst_u_imm_buffer;
    assign inst_u_imm_out = inst_u_imm_buffer;

    reg [2:0] inst_fn3_buffer;
    assign inst_fn3_out = inst_fn3_buffer;

    reg [4:0] rd_addr_buffer;
    assign rd_addr_out = rd_addr_buffer;

    reg [31:0] alu_buffer;
    assign alu_out = alu_buffer;

    reg [29:0] inc_pc_buffer;
    assign inc_pc_out = inc_pc_buffer;

    always_ff @(posedge clk) begin : Buffer
        if(sync_rst) begin
            ctr_buffer <= 0;
        end else if(clk_en) begin
            ctr_buffer <= ctr_word_in[12:10];
            inst_u_imm_buffer <= inst_u_imm[19:0];
            inst_fn3_buffer <= inst_fn3;
            rd_addr_buffer <= inst_in[11:7];
            alu_buffer <= alu_result;
            inc_pc_buffer <= pc_in + 1;
        end
    end

    //                                                                                                  //

    // * ALU connections
    logic [31:0] alu_imm;

    always_comb begin : ImmediateMultiplexer
        case(ctr_imm_sel)
        3'h0: alu_imm = inst_i_imm;
        3'h1: alu_imm = inst_s_imm;
        3'h2: alu_imm = inst_b_imm;
        3'h3: alu_imm = inst_j_imm;
        3'h4: alu_imm = inst_u_imm;
        default: alu_imm = 0;
        endcase
    end

    wire [31:0] alu_a = ctr_alu_asel ? {pc_in, 2'h0} : regfile_rs1;
    wire [31:0] alu_b = ctr_alu_bsel ? alu_imm : regfile_rs2;
    wire [2:0] alu_mod = ctr_alu_modsel ? 3'h0 : inst_fn3;

    wire [31:0] alu_result;
    wire alu_fn7_bit5 = inst_fn7[5] && (|alu_mod ? 1 : !(ctr_alu_bsel)); //No "SUBI" instruction

    alu alu(
        .a(alu_a), .b(alu_b), .fn3(alu_mod), .fn7_bit5(alu_fn7_bit5), .result(alu_result)
    );

    //                                                                                                  //

    // * Memory connections
    assign address_out = alu_result[31:2];
    assign bus_lock = ctr_bus_lock;
    assign memory_mode = ctr_memory_mode;

    output_adj output_adj( //Adjust the data
        .data_in(regfile_rs2), .fn3(inst_fn3), .addr_low(alu_result[1:0]),
        .data_out(data_out), .mask(mask)
    );

    /*
    EXAMPLE: sh t0, 0(t1)
    T0 = 0xFF50
    T1 = 0x2
    DATA_OUT = 0x50FF
    MASK = 0011
    */

    //                                                                                                  //

    // * Branch handling
    assign branch_feedback_enable = ctr_jump || ctr_branch;

    logic int_branch_result;
    wire branch_result = int_branch_result ^^ inst_fn3[0]; //For negative cases (BNE, BGE, BGEU)

    always_comb begin
        case(inst_fn3[2:1])
        2'h0: int_branch_result = (regfile_rs1 == regfile_rs2); // BEQ
        2'h2: int_branch_result = $signed(regfile_rs1) < $signed(regfile_rs2); // BLT
        2'h3: int_branch_result = ($signed(regfile_rs1) < $signed(regfile_rs2)); // BLTU
        default: int_branch_result = inst_fn3[0];
        endcase
    end

    assign branch_actual_result = branch_result;
    assign pc_target_address = branch_actual_result ? alu_result[31:2] : pc_in;
    assign branch_prediction_incorrect = (ctr_jump || ctr_branch) && (branch_actual_result ^^ branch_prediction_taken);

    //                                                                                                  //


endmodule : execute_stage

module output_adj(
    input [31:0] data_in,
    input [2:0] fn3,
    input [1:0] addr_low,
    output logic [31:0] data_out,
    output logic [3:0] mask
);
    //Adjusts inputs from big to little endian

    always_comb begin : OutputAdj_and_Mask
        case(fn3)
        3'h0: case(addr_low)
            2'h0: begin data_out = {data_in[7:0], 24'h0}; mask = 4'b1000; end
            2'h1: begin data_out = {8'h0, data_in[7:0], 16'h0}; mask = 4'b0100; end
            2'h2: begin data_out = {16'h0, data_in[7:0], 8'h0}; mask = 4'b0010; end
            2'h3: begin data_out = {24'h0, data_in[7:0]}; mask = 4'b0001; end
            endcase
        3'h1: case(addr_low)
            2'h0, 2'h1: begin data_out = {data_in[7:0], data_in[15:8], 16'h0}; mask = 4'b1100; end
            2'h2, 2'h3: begin data_out = {16'h0, data_in[7:0], data_in[15:8]}; mask = 4'b0011; end
            endcase
        3'h2: begin data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]}; mask = 4'b1111; end
        default: begin data_out = 0; mask = 0; end
        endcase
    end

endmodule : output_adj
