module execute_stage(
    input clk, clk_en, sync_rst,
    
    // * From decode stage
    input [31:0] inst_in,
    input [12:0] ctr_word_in,
    input [31:0] regfile_rs1,
    input [31:0] regfile_rs2,
    input [29:0] pc_in,

    // * To fetch stage
    output [29:0] pc_target_address,
    output pc_jmp,

    // * To memory stage
    output [4:0] ctr_out,
    output [31:0] inst_out,
    output [31:0] alu_out,
    output [29:0] inc_pc_out,
    output [31:0] regfile_rs2_out,
    output [4:0] exe_rs1_address, //Current RS1 address
    output [4:0] exe_rs2_address, //Current RS2 address
    output exe_uses_rs1, //Currently using RS1?
    output exe_uses_rs2 //Currently using RS12
);
    //                                                                                                  //
    // * Control lines
    wire ctr_alu_asel = ctr_word_in[0];
    wire ctr_alu_bsel = ctr_word_in[1];
    wire ctr_alu_modsel = ctr_word_in[2];
    wire [2:0] ctr_imm_sel = ctr_word_in[5:3];
    wire ctr_jump = ctr_word_in[6];
    wire ctr_branch = ctr_word_in[7];

    // * Instruction parts
    wire [6:0] inst_fn7 = inst_in[31:25];
    wire [2:0] inst_fn3 = inst_in[14:12];

    wire [31:0] inst_i_imm = {{20{inst_in[31]}}, inst_in[31:20]};
    wire [31:0] inst_s_imm = {{20{inst_in[31]}}, inst_in[31:25], inst_in[11:7]};
    wire [31:0] inst_b_imm = {{20{inst_in[31]}}, inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0};
    wire [31:0] inst_u_imm = {inst_in[31:12], 12'h0};
    wire [31:0] inst_j_imm = {{12{inst_in[31]}}, inst_in[20], inst_in[19:12], inst_in[30:21], 1'b0};

    //                                                                                                  //

    // * --- Memory stage buffers & outputs ---

    reg [4:0] ctr_buffer;
    assign ctr_out = ctr_buffer;

    reg [31:0] inst_buffer;
    assign inst_out = inst_buffer;

    reg [31:0] alu_buffer;
    assign alu_out = alu_buffer;

    reg [29:0] inc_pc_buffer;
    assign inc_pc_out = inc_pc_buffer;

    reg [31:0] regfile_rs2_buffer;
    assign regfile_rs2_out = regfile_rs2_buffer;

    always_ff @(posedge clk) begin : Buffer
        if(sync_rst) begin
            ctr_buffer <= 0;
        end else if(clk_en) begin
            ctr_buffer <= ctr_word_in[12:8];
            inst_buffer <= inst_in;
            alu_buffer <= alu_result;
            inc_pc_buffer <= pc_in + 1;
            regfile_rs2_buffer <= regfile_rs2;
        end
    end

    assign exe_rs1_address = inst_in[19:15];
    assign exe_rs2_address = inst_in[24:20];
    assign exe_uses_rs1 = !ctr_alu_asel || ctr_branch;
    assign exe_uses_rs2 = !ctr_alu_bsel || ctr_branch;

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

    // * Branch handling

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

    assign pc_jmp = ctr_jump || (ctr_branch && branch_result);
    assign pc_target_address = alu_result[31:2];

    //                                                                                                  //


endmodule : execute_stage
