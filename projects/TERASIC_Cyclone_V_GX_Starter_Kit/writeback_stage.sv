module writeback_stage(
    // * From the execute stage
    input [2:0] ctr_word_in,
    input [2:0] fn3_in,
    input [4:0] rd_addr_in,
    input [31:0] memory_data_in,
    input [31:0] alu_in,
    input [29:0] inc_pc_in,
    input [19:0] u_type_imm_in,

    // * To the decode stage
    output regfile_we,
    output logic [31:0] data_out,
    output [4:0] write_address
);
    assign regfile_we = ctr_word_in[0];
    assign write_address = rd_addr_in;
    
    wire [31:0] adjusted_memory_data;

    input_adj input_adj(
        .data_in(memory_data_in), .fn3(fn3_in), .addr_low(alu_in[1:0]),
        .data_out(adjusted_memory_data)
    );

    always_comb begin : WriteDataMux
        case(ctr_word_in[2:1])
        2'h0: data_out = alu_in;
        2'h1: data_out = adjusted_memory_data;
        2'h2: data_out = {inc_pc_in, 2'b0};
        2'h3: data_out = {u_type_imm_in, 12'h0};
        endcase
    end

endmodule : writeback_stage

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
        2'h0: begin adj_byte = data_in[31:24]; adj_word = {data_in[23:16], data_in[31:24]}; end
        2'h1: begin adj_byte = data_in[23:16]; adj_word = {data_in[23:16], data_in[31:24]}; end
        2'h2: begin adj_byte = data_in[15:8]; adj_word = {data_in[7:0], data_in[15:8]}; end
        2'h3: begin adj_byte = data_in[7:0]; adj_word = {data_in[7:0], data_in[15:8]}; end
        endcase
    end

    always_comb begin : Input_Format_Sel
        case(size)
        2'h0: data_out = {{24{adj_byte[7] & ~fn3[2]}}, adj_byte};
        2'h1: data_out = {{16{adj_word[15] & ~fn3[2]}}, adj_word};
        2'h2: data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]};
        2'h3: data_out = {data_in[7:0], data_in[15:8], data_in[23:16], data_in[31:24]};
        endcase
    end

endmodule : input_adj
