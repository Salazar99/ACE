module tb_sqrt_newton;

    reg clk, rst, start;
    reg signed [31:0] x;
    wire [31:0] y;
    wire done, error;

    sqrt_newton uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .x(x),
        .y(y),
        .done(done),
        .error(error)
    );

    always #5 clk = ~clk; // Generate clock signal

    initial begin
        clk = 0;
        rst = 1;
        start = 0;

        // Test positive input
        #10 rst = 0;
        #10 x = 25; start = 1; #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", x, y, error);

        // Test zero input
        #10 x = 0; start = 1; #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", x, y, error);

        // Test negative input (should trigger error)
        #10 x = -9; start = 1; #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", x, y, error);

        $stop;
    end

endmodule
