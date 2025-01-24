module toplevel #(
    parameter string PROGRAM_LOCATION = "programs/<file>.<format>" //Must be in hex format
)(
    input clk,
    input async_rst, //Async reset button
    input [9:0] switches, //10 switches (Switch[9] = clk_en)
    input [3:0] push_buttons, //4 push buttons
    output [17:0] leds //18 LEDs
);

    //                                                                          //

    // * --- Reset system ---

    reg rst_ff0;
    reg rst_ff1;
    reg boot_rst; //This Flip Flop will reset the whole system on boot

    always_ff @(posedge clk) begin
        rst_ff0 <= async_rst;
        rst_ff1 <= rst_ff1;
        boot_rst <= 1;
    end

    wire sync_rst = ((rst_ff0 && rst_ff1) || !boot_rst);

    //                                                                          //

    // * --- Clock enable ---

    wire clk_en = switches[9];

    //                                                                          //

    // * -- Memory management --

    wire [29:0] data_address;
    wire [31:0] core_data_out;
    wire [3:0] core_data_mask;
    wire data_bus_lock;
    wire data_bus_mode;

    logic [31:0] core_data_in;

    always_comb begin : MemoryMap
        if(!(|data_address[29:12])) core_data_in = ram_data_out;
        else if(data_address == 30'h1000) core_data_in = {switches[7:0], switches[8], 23'h0};
        else if(data_address == 30'h1001) core_data_in = {4'h0, push_buttons[3:0], 24'h0};
        else core_data_in = 32'h0;
    end

    // * Data RAM

    reg [7:0] data_ram0 [4095:0];
    reg [7:0] data_ram1 [4095:0];
    reg [7:0] data_ram2 [4095:0];
    reg [7:0] data_ram3 [4095:0];

    reg [7:0] ram_buffer0;
    reg [7:0] ram_buffer1;
    reg [7:0] ram_buffer2;
    reg [7:0] ram_buffer3;

    wire [31:0] ram_data_out = {ram_buffer3, ram_buffer2, ram_buffer1, ram_buffer0};

    always_ff @(posedge clk) begin : MemoryFFblock
        if(clk_en) begin
            if(data_bus_lock && (data_address < 'h1000)) begin
                if(data_bus_mode) begin
                    if(core_data_mask[0]) data_ram0[data_address[11:0]] <= core_data_out[7:0];
                    if(core_data_mask[1]) data_ram1[data_address[11:0]] <= core_data_out[15:8];
                    if(core_data_mask[2]) data_ram2[data_address[11:0]] <= core_data_out[23:16];
                    if(core_data_mask[3]) data_ram3[data_address[11:0]] <= core_data_out[31:24];
                end 
                ram_buffer0 <= data_ram0[data_address[11:0]];
                ram_buffer1 <= data_ram1[data_address[11:0]];
                ram_buffer2 <= data_ram2[data_address[11:0]];
                ram_buffer3 <= data_ram3[data_address[11:0]];
            end
        end
    end

    // * LEDs
    
    reg [17:0] led_reg;
    assign leds = led_reg;

    wire [31:0] readjusted_data = {core_data_out[7:0], core_data_out[15:8], core_data_out[23:16], core_data_out[31:24]};

    always_ff @(posedge clk) begin : LEDffBlock
        if(sync_rst) led_reg <= 0;
        else if(clk_en) begin
            if((data_address == 30'h1000) && data_bus_lock && data_bus_mode) begin
                led_reg <= readjusted_data[17:0];
            end
        end
    end

    //                                                                          //

    // * --- Instruction memory ---

    wire [29:0] inst_address;
    wire inst_req;

    reg [31:0] inst_rom [4095:0];
    reg [31:0] inst_rom_buffer;

    initial begin
        $readmemh(PROGRAM_LOCATION, inst_rom);
    end

    always_ff @(posedge clk) begin
        if(clk_en) begin
            if(inst_req) inst_rom_buffer <= inst_rom[inst_address[11:0]];
        end
    end

    //                                                                          //

    // * --- Core ---

    core core(
        .clk(clk),
        .clk_en(clk_en),
        .sync_rst(sync_rst),
        .inst_in(inst_rom_buffer),
        .inst_address(inst_address),
        .inst_req(inst_req),
        .bus_lock(data_bus_lock),
        .memory_mode(data_bus_mode),
        .data_address(data_address),
        .data_mask(core_data_mask),
        .data_out(core_data_out),
        .data_in(core_data_in)
    );

    //                                                                          //

    /*
    Memory mapping:
    0x0000 - 0x3FFF: BRAM (16 KiB)
    0x4000: Switches[8:0] (Read mode, zero extends) / LEDs[17:0] (Write mode)
    0x4004: Push buttons (Read-only, zero extends)
    */

endmodule : toplevel
