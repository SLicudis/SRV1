module core(
    input clk, clk_en, sync_rst,
    
    // * From instruction memory
    input [31:0] inst_in, //Format: Little endian

    // * From data memory
    input [31:0] data_in, //Format: Little endian

    // * To instruction memory
    output [29:0] inst_address,
    output inst_req,

    // * To data memory
    output bus_lock,
    output memory_mode,
    output [29:0] data_address,
    output [3:0] data_mask,
    output [31:0] data_out //Format: Little endian
);

    // ! The core isn't made to support instruction cache/memory coherency
    // ! Verilator's "Signal unoptimizable: Circular combinational logic: 'inst_address'" error is a false alarm

    // * --- Wires ---

    // * Fetch

    wire [29:0] pc_to_decode;
    assign inst_req = clk_en && !pipeline_stall;

    // * Decode

    wire [31:0] adjusted_inst_in = {inst_in[7:0], inst_in[15:8], inst_in[23:16], inst_in[31:24]};

    wire [31:0] dec_inst_out;
    wire [12:0] dec_ctr_word_out;
    wire [31:0] regfile_rs1;
    wire [31:0] regfile_rs2;
    wire [29:0] dec_pc_out;

    // * Execute

    wire [29:0] pc_target_address;
    wire pc_jmp;

    wire [31:0] exe_inst_out;
    wire [4:0] exe_ctr_word_out;
    wire [31:0] exe_alu_out;
    wire [29:0] exe_inc_pc_out;
    wire [31:0] exe_regfile_rs2_out;
    wire [4:0] exe_regfile_rs1_address;
    wire [4:0] exe_regfile_rs2_address;
    wire exe_uses_rs1;
    wire exe_uses_rs2;
    wire exe_branch_result;

    // * Memory

    wire pipeline_stall;

    wire [19:0] mem_inst_u_imm_out;
    wire [2:0] mem_inst_fn3_out;
    wire [4:0] mem_rd_addr_out;
    wire [2:0] mem_ctr_out;
    wire [31:0] mem_alu_out;
    wire [29:0] mem_inc_pc_out;

    // * Writeback
    
    wire [31:0] regfile_data_in;
    wire [4:0] regfile_destination;
    wire regfile_we;


    //                                                                                                  //

    // * --- Fetch ---

    fetch_stage fetch_stage(
        .clk(clk),
        .clk_en(clk_en && !pipeline_stall),
        .sync_rst(sync_rst),
        .jmp(pc_jmp),
        .data_in(pc_target_address),
        .to_pipe(pc_to_decode),
        .to_address(inst_address)
    );

    //                                                                                                  //
    // * --- Decode ---

    decode_stage decode_stage(
        .clk(clk),
        .clk_en(clk_en && !pipeline_stall),
        .sync_rst(sync_rst),

        // * From fetch stage
        .pc_in(pc_to_decode),
        .inst_in(adjusted_inst_in),

        // * From execute stage
        .invalidate(pc_jmp),

        // * To execute stage
        .inst_out(dec_inst_out),
        .ctr_word_out(dec_ctr_word_out),
        .regfile_rs1_out(regfile_rs1),
        .regfile_rs2_out(regfile_rs2),
        .pc_out(dec_pc_out),

        // * From writeback stage
        .regfile_data_in(regfile_data_in),
        .regfile_destination(regfile_destination),
        .regfile_we(regfile_we)
    );

    //                                                                                                  //

    // * --- Execute ---

    execute_stage execute_stage(
        .clk(clk),
        .clk_en(clk_en && !pipeline_stall),
        .sync_rst(sync_rst),

        // * From decode stage
        .inst_in(dec_inst_out),
        .ctr_word_in(dec_ctr_word_out),
        .regfile_rs1(regfile_rs1),
        .regfile_rs2(regfile_rs2),
        .pc_in(dec_pc_out),

        // * From memory stage
        .invalidate(pc_jmp),

        // * To memory stage
        .ctr_out(exe_ctr_word_out),
        .inst_out(exe_inst_out),
        .alu_out(exe_alu_out),
        .inc_pc_out(exe_inc_pc_out),
        .regfile_rs2_out(exe_regfile_rs2_out),
        .exe_rs1_address(exe_regfile_rs1_address),
        .exe_rs2_address(exe_regfile_rs2_address),
        .exe_uses_rs1(exe_uses_rs1),
        .exe_uses_rs2(exe_uses_rs2),
        .branch_result_out(exe_branch_result)
    );

    //                                                                                                  //

    // * --- Memory ---

    memory_stage memory_stage(
        .clk(clk),
        .clk_en(clk_en),
        .sync_rst(sync_rst),

        // * From execute stage
        .inst_in(exe_inst_out),
        .ctr_word_in(exe_ctr_word_out),
        .alu_in(exe_alu_out),
        .inc_pc_in(exe_inc_pc_out),
        .regfile_rs2(exe_regfile_rs2_out),
        .exe_regfile_rs1_address(exe_regfile_rs1_address),
        .exe_regfile_rs2_address(exe_regfile_rs2_address),
        .exe_uses_rs1(exe_uses_rs1),
        .exe_uses_rs2(exe_uses_rs2),
        .branch_result_in(exe_branch_result),

        // * To previous stages
        .stall(pipeline_stall),

        // * To decode stage
        .pc_target_address(pc_target_address),
        .pc_jmp(pc_jmp),

        // * To data memory
        .data_out(data_out),
        .address_out(data_address),
        .mask(data_mask),
        .bus_lock(bus_lock),
        .memory_mode(memory_mode),

        // * To writeback stage
        .inst_u_imm_out(mem_inst_u_imm_out),
        .inst_fn3_out(mem_inst_fn3_out),
        .rd_addr_out(mem_rd_addr_out),
        .ctr_out(mem_ctr_out),
        .alu_out(mem_alu_out),
        .inc_pc_out(mem_inc_pc_out)
    );

    //                                                                                                  //

    // * --- Writeback ---

    writeback_stage writeback_stage(
        .ctr_word_in(mem_ctr_out),
        .fn3_in(mem_inst_fn3_out),
        .memory_data_in(data_in),
        .alu_in(mem_alu_out),
        .inc_pc_in(mem_inc_pc_out),
        .u_type_imm_in(mem_inst_u_imm_out),
        .rd_addr_in(mem_rd_addr_out),
        .regfile_we(regfile_we),
        .data_out(regfile_data_in),
        .write_address(regfile_destination)
    );

endmodule : core
