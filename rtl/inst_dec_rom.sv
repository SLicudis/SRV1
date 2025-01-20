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
