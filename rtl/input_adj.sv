module input_adj(
    input [31:0] data_in,
    input [2:0] fn3,
    input [1:0] addr_low,
    output logic [31:0] data_out
);
    //Adjusts outputs from big to little endian
    //Adjusts inputs from little to big endian

    logic [7:0] adj_byte;
    logic [15:0] adj_word;
    wire [1:0] size = fn3[1:0];

    always_comb begin : Word_And_Byte_Adj
        case(addr_low)
        2'h0: begin
            adj_byte = data_in[31:24];
            adj_word = {data_in[23:16], data_in[31:24]};
            end
        2'h1: begin
            adj_byte = data_in[23:16];
            adj_word = {data_in[23:16], data_in[31:24]};
            end
        2'h2: begin
            adj_byte = data_in[15:8];
            adj_word = {data_in[7:0], data_in[15:8]};
            end
        2'h3: begin
            adj_byte = data_in[7:0];
            adj_word = {data_in[7:0], data_in[15:8]};
            end
        default: begin
            adj_byte = 0;
            adj_word = 0;
            end
        endcase
    end

    always_comb begin : Input_Format_Sel
        case(size)
        2'h0: data_out = {{24{adj_byte[7] & ~fn3[2]}}, adj_byte};
        2'h1: data_out = {{16{adj_word[15] & ~fn3[2]}}, adj_word};
        2'h2: data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]};
        2'h3: data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]};
        default: data_out = 0;
        endcase
    end

endmodule : input_adj
