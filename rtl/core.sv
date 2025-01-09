//todo: Test and debug this shit

module core(
    input clk, clk_en, sync_rst,
    
    // * From instruction memory
    input [31:0] inst_in,

    // * From data memory
    input [31:0] data_in,

    // * To instruction memory
    output [29:0] inst_address,

    // * To data memory
    output bus_lock,
    output memory_mode,
    output [29:0] data_address,
    output [3:0] data_mask,
    output [31:0] data_out
);

    // ! The core isn't made to support instruction cache/memory coherency
    // ! Verilator's "Signal unoptimizable: Circular combinational logic: 'inst_address'" error is a false alarm

    wire [29:0] pc_target_address;
    wire [29:0] pc_to_decode;
    wire pc_jmp;

    fetch_stage fetch_stage(
        .clk(clk), .clk_en(clk_en), .sync_rst(sync_rst), .jmp(pc_jmp),
        .data_in(pc_target_address), .to_pipe(pc_to_decode), .to_address(inst_address)
    );

    wire [29:0] exe_stage_pc_target;
    wire exe_branch_feedback_enable;
    wire exe_branch_actual_result;
    wire exe_branch_prediction_incorrect;

    wire [31:0] dec_inst_out;
    wire [12:0] dec_ctr_word_out;
    wire [31:0] regfile_rs1;
    wire [31:0] regfile_rs2;
    wire [29:0] dec_pc_out;
    wire dec_branch_prediction_taken;

    wire [31:0] regfile_data_in;
    wire [4:0] regfile_destination;
    wire regfile_we;

    decode_stage decode_stage(
        .clk(clk), .clk_en(clk_en), .sync_rst(sync_rst),

        // * From fetch stage
        .next_pc(inst_address), .pc_in(pc_to_decode), .inst_in(inst_in),
        // * To fetch stage
        .pc_jmp(pc_jmp), .pc_target_address(pc_target_address),

        // * From execute stage
        .pc_target_address_in(exe_stage_pc_target), .branch_feedback_enable(exe_branch_feedback_enable),
        .branch_actual_result(exe_branch_feedback_enable), .branch_prediction_incorrect(exe_branch_prediction_incorrect),
        // * To execute stage
        .inst_out(dec_inst_out), .ctr_word_out(dec_ctr_word_out), .regfile_rs1_out(regfile_rs1), .regfile_rs2_out(regfile_rs2),
        .pc_out(dec_pc_out), .branch_prediction_taken(dec_branch_prediction_taken),

        // * From writeback stage
        .regfile_data_in(regfile_data_in), .regfile_destination(regfile_destination), .regfile_we(regfile_we)
    );

    wire [19:0] exe_u_imm_out;
    wire [2:0] exe_fn3_out;
    wire [2:0] exe_ctr_word_out;
    wire [31:0] exe_alu_out;
    wire [29:0] exe_inc_pc_out;
    wire [4:0] exe_rd_addr_out;

    execute_stage execute_stage(
        .clk(clk), .clk_en(clk_en), .sync_rst(sync_rst),

        // * From decode stage
        .inst_in(dec_inst_out), .ctr_word_in(dec_ctr_word_out), .regfile_rs1(regfile_rs1), .regfile_rs2(regfile_rs2),
        .pc_in(dec_pc_out), .branch_prediction_taken(dec_branch_prediction_taken),
        // * To decode stage
        .pc_target_address(exe_stage_pc_target), .branch_feedback_enable(exe_branch_feedback_enable),
        .branch_actual_result(exe_branch_actual_result), .branch_prediction_incorrect(exe_branch_prediction_incorrect),

        // * To data memory
        .data_out(data_out), .address_out(data_address), .mask(data_mask), .bus_lock(bus_lock), .memory_mode(memory_mode),

        // * To writeback stage
        .inst_u_imm_out(exe_u_imm_out), .inst_fn3_out(exe_fn3_out), .ctr_out(exe_ctr_word_out),
        .alu_out(exe_alu_out), .inc_pc_out(exe_inc_pc_out), .rd_addr_out(exe_rd_addr_out)
    );

    writeback_stage writeback_stage(
        .ctr_word_in(exe_ctr_word_out), .fn3_in(exe_fn3_out), .memory_data_in(data_in),
        .alu_in(exe_alu_out), .inc_pc_in(exe_inc_pc_out), .u_type_imm_in(exe_u_imm_out), .rd_addr_in(exe_rd_addr_out),
        .regfile_we(regfile_we), .data_out(regfile_data_in), .write_address(regfile_destination)
    );

endmodule : core
