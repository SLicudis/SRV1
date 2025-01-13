module decode_stage(
    input clk, clk_en, sync_rst,
    input [31:0] inst_in,

    // * From the fetch stage
    input [29:0] pc_in,

    // * From the execute stage
    input invalidate,

    // * From the writeback stage
    input [31:0] regfile_data_in,
    input [4:0] regfile_destination,
    input regfile_we,

    // * To the execute stage
    output [31:0] inst_out,
    output [12:0] ctr_word_out,
    output [31:0] regfile_rs1_out,
    output [31:0] regfile_rs2_out,
    output [29:0] pc_out
);
    //                                                                                                  //
    
    // * Execute stage buffers

    reg [31:0] inst_out_buffer;
    reg [12:0] ctr_word_out_buffer;
    reg [29:0] pc_buffer;
    assign pc_out = pc_buffer;

    always_ff @(posedge clk) begin : Buffer
        if(sync_rst || invalidate) begin
            ctr_word_out_buffer <= 0;
        end else if(clk_en) begin
            pc_buffer <= pc_in;
            inst_out_buffer <= inst_in;
            ctr_word_out_buffer <= decoder_ctr_word;
        end
    end

    assign inst_out = inst_out_buffer;
    assign ctr_word_out = ctr_word_out_buffer;

    //                                                                                                  //

    // * Instruction decoding

    wire [12:0] decoder_ctr_word;

    inst_dec_rom instruction_decoder (
        .opcode(inst_in[6:0]), .ctr_word(decoder_ctr_word)
    );

    //                                                                                                  //

    // * Register file

    regfile regfile(
        .clk(clk), .clk_en(clk_en), .we(regfile_we),
        .data_in(regfile_data_in), .rs1_addr(inst_in[19:15]), .rs2_addr(inst_in[24:20]), .rd_addr(regfile_destination),
        .rs1(regfile_rs1_out), .rs2(regfile_rs2_out)
    );

    //                                                                                                  //

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
