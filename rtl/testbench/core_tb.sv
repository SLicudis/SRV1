module core_tb(
    input clk, clk_en, sync_rst
);
    reg [31:0] instruction_memory [255:0];
    reg [31:0] inst_mem_buffer;

    initial begin
        $readmemh("/mnt/e/programacion/systemverilog/risc-v/srv1/rtl/testbench/rom.hex", instruction_memory);
    end

    always_ff @(posedge clk) begin
        if(inst_req) inst_mem_buffer <= instruction_memory[inst_address[7:0]];
    end

    wire [29:0] inst_address;
    wire inst_req;

    wire [29:0] core_data_address;
    wire [3:0] core_data_mask;
    wire [31:0] core_data_out;
    wire core_bus_lock;
    wire core_mem_mode;

    core core(
        .clk(clk),
        .clk_en(clk_en),
        .sync_rst(sync_rst),
        .inst_address(inst_address),
        .inst_req(inst_req),
        .inst_in(inst_mem_buffer),
        .data_in(32'h20010000),
        .data_out(core_data_out),
        .bus_lock(core_bus_lock),
        .memory_mode(core_mem_mode),
        .data_address(core_data_address),
        .data_mask(core_data_mask)
    );

endmodule : core_tb
