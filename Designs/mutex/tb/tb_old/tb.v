module mutex_tb;
    reg clk;
    reg [15:0] in;
    wire positive_flag;
    wire negative_flag;

    mutex uut (
        .clk(clk),
        .in(in),
        .positive_flag(positive_flag),
        .negative_flag(negative_flag)
    );

    always #5  clk = ~clk; // Clock with 10 time unit period

    initial begin
        $dumpfile("golden.vcd");
        $dumpvars(0, mutex_tb);
        
        //Initial 
        clk = 0; 
        in = 0;
        #10 
        // Test case 1: Positive number
        in = 16'd10;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 2: Negative number
        in = -16'd5;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 3: Zero
        in = 16'd0;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 4: Random positive number
        in = 16'd12345;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 5: Random negative number
        in = -16'd12345;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 6: Another random positive number
        in = 16'd32767;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);
        
        // Test case 7: Another random negative number
        in = -16'd32768;
        #10 ;
        $display("Input: %d, Positive: %b, Negative: %b", in, positive_flag, negative_flag);

        #20 $finish;
    end
endmodule
