module sqrt_calculator (
    input wire clk,
    input wire rst,
    input wire start,
    input wire [15:0] in,
    output reg [7:0] out,
    output reg error,
    output reg done
);

    reg [15:0] num;
    reg [7:0] guess;
    reg [3:0] iter;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out <= 0;
            error <= 0;
            done <= 0;
            num <= 0;
            guess <= 0;
            iter <= 0;
        end else if (start) begin
            if (in[15] == 1) begin // Check if input is negative: Assuming 2's complement for input
                error <= 1;
                done <= 1;
            end else begin
                num <= in;
                guess <= 8'd1; // Initial guess
                iter <= 0;
                error <= 0;
                done <= 0;
            end
        end else if (!done) begin
            if (iter < 10) begin
                guess <= (guess + (num / guess)) >> 1; // Newton-Raphson method
                iter <= iter + 1;
            end else begin
                out <= guess;
                done <= 1;
            end
        end
    end

endmodule
