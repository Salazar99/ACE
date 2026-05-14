`timescale 1ns/1ns

module test;

  logic clk;

  logic [7:0] a;

  logic [7:0] b;

  logic cin;

  logic [7:0] sum;

  logic cout;


  // Device Under Test (DUT)

  verified_adder_8bit dut(
    .clk(clk),
    .a(a),
    .b(b),
    .cin(cin),
    .sum(sum),
    .cout(cout)
  );


  always #5 clk = ~clk;


  initial begin

    $dumpfile("verified_adder_8bit_eq_0.vcd");

    $dumpvars(0, test);

    clk = 0;

    a = 0;

    b = 0;

    cin = 0;

    #10;

    #50;

    $finish;
  end
endmodule
