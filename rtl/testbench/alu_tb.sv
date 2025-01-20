module alu_tb(
    input clk, clk_en, sync_rst
);

    reg [3:0] timer = 0;
    reg [31:0] alu_a, alu_b;
    reg [2:0] alu_fn3;
    reg alu_fn7_bit5;

    wire [31:0] alu_res;

    alu alu(
        .a(alu_a), .b(alu_b), .fn3(alu_fn3), .fn7_bit5(alu_fn7_bit5),
        .result(alu_res)
    );

    always_ff @(posedge clk) begin
        timer <= timer+1;
        case(timer)
        4'h0: begin //ADD
            alu_a <= 10;
            alu_b <= 2;
            alu_fn3 <= 0;
            alu_fn7_bit5 <= 0;
            end
        4'h1: alu_fn7_bit5 <= 1; //SUB
        4'h2: begin //SHIFT LEFT
            alu_a <= 1;
            alu_b <= 10;
            alu_fn3 <= 1;
            alu_fn7_bit5 <= 0;
            end
        4'h3: begin //SLT
            alu_a <= 2;
            alu_b <= -2;
            alu_fn3 <= 2;
            end
        4'h4: begin //SLTU
            alu_a <= 2;
            alu_b <= -2;
            alu_fn3 <= 3;
            end
        4'h5: begin //XOR
            alu_a <= 32'hf0ff00ff;
            alu_b <= 32'hffffffff;
            alu_fn3 <= 4;
            end
        4'h6: begin //RIGHT SHIFT LOGICAL
            alu_a <= 1 << 31;
            alu_b <= 31;
            alu_fn3 <= 5;
            end
        4'h7: alu_fn7_bit5 <= 1; //RIGHT SHIFT ARITH.
        4'h8: begin //OR
            alu_a <= 32'hf00f00f0;
            alu_b <= 32'h0ff00000;
            alu_fn3 <= 6;
            end
        4'h9: begin //XOR
            alu_a <= 32'hf00000f0;
            alu_b <= 32'hff0000f0;
            alu_fn3 <= 7;
        end
        4'ha: begin //AND
            alu_a <= 32'hf00ff0f0;
            alu_b <= 32'hff0f00f0;
            alu_fn3 <= 8;
        end
        default: /*nothing*/;
        endcase
    end

endmodule : alu_tb
