module memory_stage #(
    parameter [29:0] ECALL_ADDRESS = 0
)(
    input clk, clk_en, sync_rst,

    // * From execute stage
    input [31:0] inst_in,
    input [5:0] ctr_word_in,
    input [31:0] alu_in,
    input [29:0] inc_pc_in,
    input [31:0] regfile_rs2,
    input [4:0] exe_regfile_rs1_address, //Current RS1 in the execute stage (Not buffered data)
    input [4:0] exe_regfile_rs2_address, //Current RS2 in the execute stage (Not buffered data)
    input exe_uses_rs1,
    input exe_uses_rs2,
    input branch_result_in,

    // * To previous stages
    output stall,

    // * To fetch stage
    output pc_jmp,
    output [29:0] pc_target_address,

    // * To data memory
    output [31:0] data_out,
    output [29:0] address_out,
    output [3:0] mask,
    output bus_lock,
    output memory_mode,

    // * To writeback stage
    output [19:0] inst_u_imm_out,
    output [2:0] inst_fn3_out,
    output [4:0] rd_addr_out,
    output [2:0] ctr_out,
    output [31:0] alu_out,
    output [29:0] inc_pc_out
);

    ///
    // * --- Instruction splitting ---

    wire [4:0] inst_rd_addr = inst_in[11:7];

    ///

    // * Writeback buffers

    reg [19:0] inst_u_imm_buffer;
    assign inst_u_imm_out = inst_u_imm_buffer;

    reg [2:0] inst_fn3_buffer;
    assign inst_fn3_out = inst_fn3_buffer;

    reg [4:0] rd_addr_buffer;
    assign rd_addr_out = rd_addr_buffer;

    reg [2:0] ctr_buffer;
    assign ctr_out = ctr_buffer;

    reg [31:0] alu_buffer;
    assign alu_out = alu_buffer;

    reg [29:0] inc_pc_buffer;
    assign inc_pc_out = inc_pc_buffer;

    always_ff @(posedge clk) begin
        if(sync_rst) ctr_buffer <= 0;
        else if(clk_en) begin
            inst_u_imm_buffer <= inst_in[31:12];
            inst_fn3_buffer <= inst_in[14:12];
            rd_addr_buffer <= inst_rd_addr;
            ctr_buffer <= ctr_word_in[5:3];
            alu_buffer <= alu_in;
            inc_pc_buffer <= inc_pc_in;
        end
    end

    ///
    // * --- Hazard detection & Pipeline stalls ---

    wire rs1_hazard = (inst_rd_addr == exe_regfile_rs1_address) && exe_uses_rs1; //Check for dependencies with RS1
    wire rs2_hazard = (inst_rd_addr == exe_regfile_rs2_address) && exe_uses_rs2; //Check for dependencies with RS2

    assign stall = ctr_word_in[2] && (rs1_hazard || rs2_hazard) && (|inst_rd_addr);
    
    ///

    // * --- Memory access ---

    assign bus_lock = ctr_word_in[1];
    assign memory_mode = ctr_word_in[2];
    assign address_out = alu_in[31:2];

    output_adj output_adj(
        .data_in(regfile_rs2), .fn3(inst_in[14:12]), .addr_low(alu_in[1:0]),
        .data_out(data_out), .mask(mask)
    );

    /*
    EXAMPLE: sh t0, 0(t1)
    T0 = 0xFF50
    T1 = 0x2
    DATA_OUT = 0x50FF
    MASK = 0011
    */

    ///
    // * --- Branching/jumping ---

    assign pc_jmp = branch_result_in;
    assign pc_target_address = ctr_word_in ? ECALL_ADDRESS : alu_in[31:2];

    ///

endmodule : memory_stage
