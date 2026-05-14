`timescale 1ns / 1ps

module testbench;

  reg clk = 0;
  reg [2:0] A;          // Input A (3 bits)
  reg [2:0] B;          // Input B (3 bits)
  wire A_greater;       
  wire A_equal;         
  wire A_less;          
  integer i;            
  integer error = 0;

  initial begin
    forever #5  clk=~clk;
  end

  comparator_3bit uut (
    .clk(clk),
    .A(A),
    .B(B),
    .A_greater(A_greater),
    .A_equal(A_equal),
    .A_less(A_less)
  );


  initial begin
    $dumpfile("comparator_3bit.vcd");
    $dumpvars(0, testbench);
    for (i = 0; i < 10000; i = i + 1) begin
      // Generate random 3-bit inputs
      A = $random % 8;
      B = $random % 8;

      // Wait for the operation to complete
      #10;

      // Calculate expected results
      if ((A > B && !A_greater) || (A == B && !A_equal) || (A < B && !A_less)) begin
        error = error + 1;
        $display("Test failed: A = %b, B = %b, A_greater = %b, A_equal = %b, A_less = %b",
                  A, B, A_greater, A_equal, A_less);
      end
    end

    // Final test result summary
    if (error == 0) begin
      $display("=========== Your Design Passed ===========");
    end
    else begin
      $display("=========== Test completed with %d /100 failures ===========", error);
    end

    $finish;
  end

endmodule