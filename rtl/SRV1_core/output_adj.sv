module output_adj(
    input [31:0] data_in,
    input [2:0] fn3,
    input [1:0] addr_low,
    output logic [31:0] data_out,
    output logic [3:0] mask
);
    //Adjusts inputs from big to little endian

    always_comb begin : OutputAdj_and_Mask
        case(fn3)
        3'h0: case(addr_low)
            2'h0: begin 
                data_out = {data_in[7:0], 24'h0};
                mask = 4'b1000;
                end
            2'h1: begin
                data_out = {8'h0, data_in[7:0], 16'h0};
                mask = 4'b0100;
                end
            2'h2: begin
                data_out = {16'h0, data_in[7:0], 8'h0};
                mask = 4'b0010;
                end
            2'h3: begin
                data_out = {24'h0, data_in[7:0]};
                mask = 4'b0001;
                end
            default: begin
                data_out = 0;
                mask = 0;
                end
            endcase
        3'h1: case(addr_low[1])
            1'b0: begin
                data_out = {data_in[7:0], data_in[15:8], 16'h0};
                mask = 4'b1100;
                end
            1'b1: begin
                data_out = {16'h0, data_in[7:0], data_in[15:8]};
                mask = 4'b0011;
                end
            default: begin
                data_out = 0;
                mask = 0; 
                end
            endcase
        3'h2: begin
            data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]};
            mask = 4'b1111;
            end
        default: begin
            data_out = 0;
            mask = 0;
            end
        endcase
    end

endmodule : output_adj
