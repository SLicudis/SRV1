module branch_target_buffer #(
    parameter PC_BITWIDTH = 30,
    parameter LOW_PC_BITWIDTH = 6
)(
    input clk, clk_en, sync_rst, we,
    input [PC_BITWIDTH-1:0] data_in, r_address, w_address,
    output [PC_BITWIDTH-1:0] data_out,
    output miss
);
    localparam CACHESIZE = 2**LOW_PC_BITWIDTH;
    localparam TAGSIZE = PC_BITWIDTH-LOW_PC_BITWIDTH;

    reg [PC_BITWIDTH-1:0] cache [CACHESIZE-1:0];
    reg [TAGSIZE-1:0] tag [CACHESIZE-1:0];
    reg [PC_BITWIDTH-1:0] cache_buffer;
    reg [TAGSIZE-1:0] tag_buffer;
    reg [CACHESIZE-1:0] tag_valid;

    always_ff @(posedge clk) begin
        if(sync_rst) tag_valid <= 0;
        else if(clk_en) begin
            cache_buffer <= cache[r_address[LOW_PC_BITWIDTH-1:0]];
            tag_buffer <= tag[r_address[LOW_PC_BITWIDTH-1:0]];
            if(we) begin
                cache[w_address[LOW_PC_BITWIDTH-1:0]] <= data_in;
                tag[w_address[LOW_PC_BITWIDTH-1:0]] <= w_address[PC_BITWIDTH-1:LOW_PC_BITWIDTH];
                tag_valid <= tag_valid | ((CACHESIZE)'(1) << w_address[LOW_PC_BITWIDTH-1:0]);
            end
        end
    end

    assign miss = ({tag_valid[r_address[LOW_PC_BITWIDTH-1:0]], tag_buffer} != {1'B1, r_address[PC_BITWIDTH-1:LOW_PC_BITWIDTH]});
    assign data_out = cache_buffer;

endmodule : branch_target_buffer
