module alu(
    // * Input numbers
    input [31:0] a,
    input [31:0] b,

    // * Configuration
    input [2:0] fn3,
    input fn7_bit5,

    // * Output
    output logic [31:0] result
);
    //                                                                                                  //

    // * --- Adder-subtractor ---

    wire force_sub = ~fn3[2] & fn3[1]; //fn4 = 2 or 3? | (unsigned) less than op
    wire sub_mode = force_sub || fn7_bit5;

    wire [32:0] int_add_sub = {1'b0, a} + {1'b0, (b ^ {32{sub_mode}})} + {32'b0, sub_mode};

    wire overflow = ~(a[31] ^ b[31]) & (int_add_sub[31] ^ a[31]);

    //                                                                                                  //

    // * --- Barrel shifter ---

    // * Reverse bits
    wire [31:0] reversed_a;
    wire [31:0] left_shift;
    genvar i;

    generate
        for(i = 0; i < 32; i++) begin : Reverse
            assign reversed_a[i] = a[31-i];
            assign left_shift[i] = barrel_shifter_result[31-i];
        end
    endgenerate

    // * Barrel shifter component
    wire [31:0] barrel_shifter_a = fn3[2] ? a : reversed_a;
    wire [63:0] barrel_shifter_result = {{32{fn7_bit5}}, barrel_shifter_a} >> b;

    //                                                                                                  //

    // * --- Body of the ALU ---

    typedef enum bit[2:0] {ADD_SUB=3'd0, SLL=3'd1, SLT=3'd2, SLTU=3'd3, XOR=3'd4, SHIFT_RIGHT=3'd5, OR=3'd6, AND=3'd7} OPERATIONS;

    always_comb begin : ResultMux
        case(fn3)
            ADD_SUB: result = int_add_sub[31:0];
            SLL: result = left_shift;
            SLT: result = {31'b0, (overflow ^ int_add_sub[31])}; //Extract the overflow bit from the subtraction between A and B
            SLTU: result = {31'b0, int_add_sub[32]}; //Extract the borrow bit from the subtraction between A and B
            XOR: result = a ^ b;
            SHIFT_RIGHT: result = barrel_shifter_result[31:0];
            OR: result = a | b;
            AND: result = a & b;
        endcase
    end

    //                                                                                                  //

endmodule : alu
