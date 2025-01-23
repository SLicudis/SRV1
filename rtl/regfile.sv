module regfile #(
    parameter RV32E = 0 //0 = RV32I, 1 = RV32E
)(
    input clk, we, clk_en,
    input [31:0] data_in,
    input [4:0] rs1_addr, rs2_addr, rd_addr,
    output [31:0] rs1, rs2
);
    localparam REGISTERS = RV32E ? 16 : 32;
    localparam ADDRSIZE = RV32E ? 4 : 5;

    reg [31:0] memory [REGISTERS-1:0];
    reg [31:0] rs1_buffer;
    reg [31:0] rs2_buffer;

    reg [31:0] write_buffer;
    reg [ADDRSIZE-1:0] write_address_buffer;
    reg written_flag;

    reg [ADDRSIZE-1:0] rs1_address_buffer;
    reg [ADDRSIZE-1:0] rs2_address_buffer;

    always_ff @(posedge clk) begin
        if(clk_en) begin
            if(we) begin
                memory[rd_addr[ADDRSIZE-1:0]] <= data_in;
                write_buffer <= data_in;
                write_address_buffer <= rd_addr[ADDRSIZE-1:0];
            end
            written_flag <= we;
            rs1_buffer <= memory[rs1_addr[ADDRSIZE-1:0]];
            rs2_buffer <= memory[rs2_addr[ADDRSIZE-1:0]];
            rs1_address_buffer <= rs1_addr[ADDRSIZE-1:0];
            rs2_address_buffer <= rs2_addr[ADDRSIZE-1:0];
        end
    end

    // * Level 0 forwarding: Data stored 1 cycle before
    wire level0_rs1_forward = (write_address_buffer == rs1_address_buffer) && written_flag;
    wire level0_rs2_forward = (write_address_buffer == rs2_address_buffer) && written_flag;

    wire [31:0] l0_forward_rs1_data = level0_rs1_forward ? write_buffer : rs1_buffer;
    wire [31:0] l0_forward_rs2_data = level0_rs2_forward ? write_buffer : rs2_buffer;

    // * Level 1 forwarding: Data being stored right now
    wire level1_rs1_forward = (we && (rd_addr[ADDRSIZE-1:0] == rs1_address_buffer));
    wire level1_rs2_forward = (we && (rd_addr[ADDRSIZE-1:0] == rs2_address_buffer));

    wire [31:0] l1_forward_rs1_data = level1_rs1_forward ? data_in : l0_forward_rs1_data;
    wire [31:0] l1_forward_rs2_data = level1_rs2_forward ? data_in : l0_forward_rs2_data;

    // * Zero register detection
    assign rs1 = (rs1_address_buffer != 0) ? l1_forward_rs1_data : 32'h0;
    assign rs2 = (rs2_address_buffer != 0) ? l1_forward_rs2_data : 32'h0;

    // ! Duplicates the amount of BRAM on a Cyclone IV

endmodule : regfile
