module fetch_stage(
    input clk, clk_en, sync_rst, jmp,
    input [29:0] data_in, //Jump/branch target address
    output [29:0] to_pipe, //Will go to the decode stage
    output [29:0] to_address //Will go to the synchronous instruction memory
);
    reg [29:0] pc;
    wire [29:0] next_pc = jmp ? data_in : (pc + 1);

    always_ff @(posedge clk) begin
        if(sync_rst) pc <= 30'h3fffffff; //0x3fffffff + 1 = 0
        else if(clk_en) pc <= next_pc;
    end

    assign to_pipe = pc;
    assign to_address = next_pc;

    // ! Always sync reset on boot
    // ! Assumes that the instruction memory is synchronous

endmodule : fetch_stage

