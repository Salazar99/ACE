module mutex(
    input wire clk,
    input wire [15:0] in,
    output reg positive_flag,
    output reg negative_flag
);

    always @(posedge clk) begin
        if (in[15] == 1) begin // Check if MSB is 1 (negative number in 2's complement)
            positive_flag = 0;
            negative_flag = 1;
        end else if (in == 16'd0) begin // Check if input is zero
            positive_flag = 0;
            negative_flag = 0;
        end else begin
            positive_flag = 1;
            negative_flag = 0;
        end
    end

endmodule
