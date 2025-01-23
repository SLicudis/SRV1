module decode_stage #(
    parameter RV32E = 0 //0 = RV32I, 1 = RV32E
)(
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
    output [13:0] ctr_word_out,
    output [31:0] regfile_rs1_out,
    output [31:0] regfile_rs2_out,
    output [29:0] pc_out
);

    ///
    // * --- Execute stage buffers ---

    reg [31:0] inst_out_buffer;
    reg [13:0] ctr_word_out_buffer;
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

    ///
    // * --- Instruction decoder ---

    wire [13:0] decoder_ctr_word; //Illegal instructions are NOPs

    inst_dec_rom instruction_decoder (
        .opcode(inst_in[6:0]), .ctr_word(decoder_ctr_word)
    );

    ///
    // * --- Register file ----

    //Has automatic forwarding and is compatible with the M9K block RAM
    regfile #(
        .RV32E(RV32E)
    ) regfile(
        .clk(clk), .clk_en(clk_en), .we(regfile_we),
        .data_in(regfile_data_in), .rs1_addr(inst_in[19:15]), .rs2_addr(inst_in[24:20]), .rd_addr(regfile_destination),
        .rs1(regfile_rs1_out), .rs2(regfile_rs2_out)
    );

    ///
endmodule : decode_stage