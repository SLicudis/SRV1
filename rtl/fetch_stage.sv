module fetch_stage(
    input clk, clk_en, sync_rst, jmp,
    input [29:0] data_in,
    output [29:0] to_pipe, to_address
);
    reg [29:0] pc;
    wire [29:0] next_pc = jmp ? data_in : (pc + 1);

    always_ff @(posedge clk) begin
        if(sync_rst) pc <= 30'h3fffffff;
        else if(clk_en) pc <= next_pc;
    end

    assign to_pipe = pc;
    assign to_address = next_pc;

    // ! Always sync reset on boot
    // ! Assumes that the instruction memory is synchronous

endmodule : fetch_stage