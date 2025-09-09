module sqrt_calculator(sqrt_intf intf);

    reg [32:0] num;
    reg [32:0] guess;
    reg [32:0] iter;

    always @(negedge intf.clk or posedge intf.rst) begin
        if (intf.rst) begin
            intf.out <= 0;
            intf.error <= 0;
            intf.done <= 0;
            num <= 0;
            guess <= 0;
            iter <= 0;
        end else if (intf.start) begin
            if (intf.in[31] == 1) begin // Check if input is negative: Assuming 2's complement for input
                intf.in <= 0;
                intf.error <= 1;
                intf.done <= 1;
                intf.out <= 0;
            end else begin
                num <= intf.in;
                intf.in <= 0;
                guess <= 8'd1; // Initial guess
                iter <= 0;
                intf.error <= 0;
                intf.done <= 0;
            end
        end else if (!intf.done) begin
            if (iter < 10) begin
                guess <= (guess + (num / guess)) >> 1; // Newton-Raphson method
                iter <= iter + 1;
            end else begin
                intf.out <= guess;
                intf.done <= 1;
            end
        end
    end

endmodule
