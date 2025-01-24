module cyclonev_top_tb(
    input clk, clk_en, sync_rst
);
    wire [9:0] switches = {clk_en, 9'h0};
    wire [3:0] push_buttons = 0;
    wire [17:0] leds;

    toplevel #(
        .PROGRAM_LOCATION("/mnt/e/programacion/systemverilog/risc-v/srv1/rtl/testbench/rom.hex")
    ) toplevel(
        .clk(clk),
        .switches(switches),
        .async_rst(sync_rst),
        .push_buttons(push_buttons),
        .leds(leds)
    );


endmodule : cyclonev_top_tb