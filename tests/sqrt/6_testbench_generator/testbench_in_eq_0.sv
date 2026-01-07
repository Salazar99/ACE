`timescale 1ns/1ns

module test;

  logic clk;

  logic rst;

  logic start;

  logic [15:0] in;

  logic [7:0] out;

  logic error;

  logic done;


  // Device Under Test (DUT)

  sqrt_calculator dut(
    .clk(clk),
    .rst(rst),
    .start(start),
    .in(in),
    .out(out),
    .error(error),
    .done(done)
  );


  always #5 clk = ~clk;


  initial begin

    $dumpfile("sqrt_calculator_in_eq_0.vcd");

    $dumpvars(0, test);

    clk = 0;

    start = 0;

    in = 0;

    #10;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 0;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    #50;

    $finish;
  end
endmodule
