`timescale 1ns / 1ps

module testbench;
  
  reg clk = 0;
  reg [7:0] a;
  reg [7:0] b;
  reg cin;
  wire [7:0] sum;
  wire cout;
  
  integer i; // Declare the loop variable here
  integer fail_count;
  integer error = 0;

  initial begin
    forever #5  clk=~clk;
  end
  
  // Instantiate the module
  verified_adder_8bit uut (
    .clk(clk),
    .a(a), 
    .b(b), 
    .cin(cin), 
    .sum(sum), 
    .cout(cout)
  );
  
  // Randomize inputs and check output
  initial begin
    $dumpfile("adder_8bit_fault.vcd");
    $dumpvars(0, testbench);
    for (i = 0; i < 10000; i = i + 1) begin
        a = $random & 8'hff;
        b = $random & 8'hff;
        cin = $random & 1'b1;
        #10;
        error = (sum !== a + b + cin) ? error+1 : error; 
    end
    if (error == 0) begin
      $display("===========Your Design Passed===========");
    end
    else begin
      $display("===========Test completed with %d /100 failures===========", error);
    end

    $finish;
  end

endmodule