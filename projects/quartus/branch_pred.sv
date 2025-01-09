module branch_pred #(
    parameter GHRWIDTH = 6 //Bitwidth of the global history register
)(
    input clk, clk_en, sync_rst, actual_result, feedback_enable,
    output prediction
);
    reg [1:0] ctr [(2**GHRWIDTH)-1:0]; //2**GHRWIDTH 2-bit saturating counters
    reg [GHRWIDTH-1:0] global_history; //Shift register that tracks the history of branches (1 = taken, 0 = not taken)

    reg [1:0] output_ctr;

    logic [1:0] ctr_updt; //Input to the selected saturating counter
    always_comb begin : SaturationLogic //If Actual_result = 1, increment. Else, decrement
        case(output_ctr)
        2'h0: ctr_updt = actual_result ? 1 : 0;
        2'h1: ctr_updt = actual_result ? 2 : 0;
        2'h2: ctr_updt = actual_result ? 3 : 1;
        2'h3: ctr_updt = actual_result ? 3 : 2;
        endcase
    end

    always_ff @(posedge clk) begin : RefreshAndFF
        if(sync_rst) begin //Reset procedure
                global_history <= 0;
            end else if(clk_en) begin
            output_ctr <= ctr[(feedback_enable) ? {global_history[GHRWIDTH-2:0], actual_result} : global_history];
            if(feedback_enable) begin
                global_history <= {global_history[GHRWIDTH-2:0], actual_result}; //Push the most recent result
                ctr[global_history] <= ctr_updt; //Update saturating counter
            end
        end
    end

    assign prediction = output_ctr[1];

endmodule : branch_pred
