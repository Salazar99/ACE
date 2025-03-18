module sqrt_calculator_tb;
    reg clk;
    reg rst;
    reg start;
    reg [15:0] in;
    wire [7:0] out;
    wire error;
    wire done;

    sqrt_calculator uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .in(in),
        .out(out),
        .error(error),
        .done(done)
    );

    always #5 clk = ~clk; // Clock with 10 time unit period

    initial begin
        $dumpfile("sqrt_calculator_tb.vcd");
        $dumpvars(0, sqrt_calculator_tb);
        
        clk = 0;
        rst = 1;
        start = 0;
        in = 0;
        
        #10 rst = 0;

        // Test case 1: Valid input (16), expected output 4
        #10 in = 16; start = 1;
        #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", in, out, error);
        
        // Test case 2: Valid input (25), expected output 5
        #10 in = 25; start = 1;
        #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", in, out, error);
        
        // Test case 3: Negative input (-1), expected error flag
        #10 in = -1; start = 1;
        #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", in, out, error);

        // Test case 4: Zero input, expected output 0
        #10 in = 0; start = 1;
        #10 start = 0;
        wait(done);
        $display("Input: %d, Output: %d, Error: %b", in, out, error);
        
        #20 $finish;
    end
endmodule