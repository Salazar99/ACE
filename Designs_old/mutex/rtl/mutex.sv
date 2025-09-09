module sign_checker(mutex_intf intf);

    always_ff @(posedge intf.clk) begin
        if (intf.in[15] == 1) begin // Check if MSB is 1 (negative number in 2's complement)
            intf.positive_flag = 0;
            intf.negative_flag = 1;
        end else if (intf.in == 16'd0) begin // Check if input is zero
            intf.positive_flag = 0;
            intf.negative_flag = 0;
        end else begin
            intf.positive_flag = 1;
            intf.negative_flag = 0;
        end
    end

endmodule
//input: clk, in 
//output: positive_flag, negative_flag
//positive_flag: 1 if in > 0, else 0
//negative_flag: 1 if in < 0, else 0