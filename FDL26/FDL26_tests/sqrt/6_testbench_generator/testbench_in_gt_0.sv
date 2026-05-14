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

    $dumpfile("sqrt_calculator_in_gt_0.vcd");

    $dumpvars(0, test);

    clk = 0;

    start = 0;

    in = 0;

    #10;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 17;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 84;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 81;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 58;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 47;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 85;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 77;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 91;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 5;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 40;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 96;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 29;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 31;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 23;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 50;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 34;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 51;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 74;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 37;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 39;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 19;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 9;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 66;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 56;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 92;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 38;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 16;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 63;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 12;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 64;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 7;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 90;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 80;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 24;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 15;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 45;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 44;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 52;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 20;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 4;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 27;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 99;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 13;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 60;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 3;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 11;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 8;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 72;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 10;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 82;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 65;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 43;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 55;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 41;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 46;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 59;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 75;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 54;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 21;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 1;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 71;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 49;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 89;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 78;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 100;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 22;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 97;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 93;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 18;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 86;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 25;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 33;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 73;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 57;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 26;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 53;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 67;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 35;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 98;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 14;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 36;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 32;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 42;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 48;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 68;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 83;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 95;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 94;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 88;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 61;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 62;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 69;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 28;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 79;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 76;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 6;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 30;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 70;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 2;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    in = 87;

    start = 1;

    #10 start = 0;

    #0 in = 0;

    #110;

    #50;

    $finish;
  end
endmodule
