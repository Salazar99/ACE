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

    $dumpfile("sqrt_calculator_in_lt_0.vcd");

    $dumpvars(0, test);

    clk = 0;

    start = 0;

    in = 0;

    #10;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = -8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    #50;

    $finish;
  end
endmodule
