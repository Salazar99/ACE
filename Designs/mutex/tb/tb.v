module mutex_tb;
    reg [15:0] in;
    wire positive_flag;
    wire negative_flag;

    mutex uut (
        .in(in),
        .positive_flag(positive_flag),
        .negative_flag(negative_flag)
    );

    initial begin
        $dumpfile("mutex_tb.vcd");
        $dumpvars(0, mutex_tb);
        
        // Test case 1: Positive number
        in = 16'd10;
        #5;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 2: Negative number
        in = -16'd5;
        #5;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 3: Zero
        in = 16'd0;
        #5;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        #20 $finish;
    end
endmodule
