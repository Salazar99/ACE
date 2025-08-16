`timescale 1ns/1ns

module test;

  logic clk;

  logic rst_n;

  logic [7:0] data_in;

  logic valid_in;

  logic valid_out;

  logic [9:0] data_out;


  // Device Under Test (DUT)

  verified_accu dut(
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .valid_in(valid_in),
    .valid_out(valid_out),
    .data_out(data_out)
  );


  always #5 clk = ~clk;


  initial begin

    $dumpfile("verified_accu.vcd");

    $dumpvars(0, test);

    clk = 0;

    data_in = 0;

    #0 valid_in = 0;

    #0 rst_n = 0;

    #0 data_in = 0;

    #20 valid_in = 1;

    #0 rst_n = 1;

    #10;

    data_in = 21;

    #10;

    data_in = 24;

    #10;

    data_in = 64;

    #10;

    data_in = 57;

    #10;

    data_in = 111;

    #10;

    data_in = 98;

    #10;

    data_in = 98;

    #10;

    data_in = 60;

    #10;

    data_in = 121;

    #10;

    data_in = 88;

    #10;

    data_in = 52;

    #10;

    data_in = 3;

    #10;

    data_in = 80;

    #10;

    data_in = 24;

    #10;

    data_in = 83;

    #10;

    data_in = 0;

    #10;

    data_in = 101;

    #10;

    data_in = 24;

    #10;

    data_in = 26;

    #10;

    data_in = 87;

    #10;

    data_in = 41;

    #10;

    data_in = 68;

    #10;

    data_in = 86;

    #10;

    data_in = 123;

    #10;

    data_in = 1;

    #10;

    data_in = 88;

    #10;

    data_in = 60;

    #10;

    data_in = 121;

    #10;

    data_in = 62;

    #10;

    data_in = 111;

    #10;

    data_in = 69;

    #10;

    data_in = 53;

    #10;

    data_in = 55;

    #10;

    data_in = 46;

    #10;

    data_in = 6;

    #10;

    data_in = 89;

    #10;

    data_in = 36;

    #10;

    data_in = 97;

    #10;

    data_in = 49;

    #10;

    data_in = 66;

    #10;

    data_in = 121;

    #10;

    data_in = 89;

    #10;

    data_in = 87;

    #10;

    data_in = 101;

    #10;

    data_in = 92;

    #10;

    data_in = 55;

    #10;

    data_in = 103;

    #10;

    data_in = 28;

    #10;

    data_in = 72;

    #10;

    data_in = 45;

    #10;

    data_in = 100;

    #10;

    data_in = 16;

    #10;

    data_in = 22;

    #10;

    data_in = 73;

    #10;

    data_in = 115;

    #10;

    data_in = 84;

    #10;

    data_in = 86;

    #10;

    data_in = 34;

    #10;

    data_in = 85;

    #10;

    data_in = 84;

    #10;

    data_in = 25;

    #10;

    data_in = 103;

    #10;

    data_in = 116;

    #10;

    data_in = 32;

    #10;

    data_in = 10;

    #10;

    data_in = 36;

    #10;

    data_in = 125;

    #10;

    data_in = 119;

    #10;

    data_in = 71;

    #10;

    data_in = 126;

    #10;

    data_in = 30;

    #10;

    data_in = 116;

    #10;

    data_in = 114;

    #10;

    data_in = 126;

    #10;

    data_in = 25;

    #10;

    data_in = 31;

    #10;

    data_in = 4;

    #10;

    data_in = 42;

    #10;

    data_in = 57;

    #10;

    data_in = 89;

    #10;

    data_in = 125;

    #10;

    data_in = 127;

    #10;

    data_in = 99;

    #10;

    data_in = 38;

    #10;

    data_in = 11;

    #10;

    data_in = 75;

    #10;

    data_in = 36;

    #10;

    data_in = 84;

    #10;

    data_in = 32;

    #10;

    data_in = 90;

    #10;

    data_in = 118;

    #10;

    data_in = 4;

    #10;

    data_in = 68;

    #10;

    data_in = 73;

    #10;

    data_in = 31;

    #10;

    data_in = 73;

    #10;

    data_in = 75;

    #10;

    data_in = 84;

    #10;

    data_in = 64;

    #10;

    data_in = 62;

    #10;

    data_in = 70;

    #10;

    data_in = 13;

    #10;

    data_in = 125;

    #10;

    data_in = 123;

    #10;

    data_in = 62;

    #10;

    data_in = 30;

    #10;

    data_in = 54;

    #10;

    data_in = 2;

    #10;

    data_in = 52;

    #10;

    data_in = 95;

    #10;

    data_in = 110;

    #10;

    data_in = 102;

    #10;

    data_in = 33;

    #10;

    data_in = 8;

    #10;

    data_in = 53;

    #10;

    data_in = 75;

    #10;

    data_in = 75;

    #10;

    data_in = 54;

    #10;

    data_in = 27;

    #10;

    data_in = 51;

    #10;

    data_in = 108;

    #10;

    data_in = 49;

    #10;

    data_in = 28;

    #10;

    data_in = 21;

    #10;

    data_in = 76;

    #10;

    data_in = 83;

    #10;

    data_in = 22;

    #10;

    data_in = 97;

    #10;

    data_in = 20;

    #10;

    data_in = 26;

    #10;

    data_in = 74;

    #10;

    data_in = 85;

    #10;

    data_in = 30;

    #10;

    data_in = 58;

    #10;

    data_in = 119;

    #10;

    data_in = 76;

    #10;

    data_in = 24;

    #10;

    data_in = 67;

    #10;

    data_in = 40;

    #10;

    data_in = 78;

    #10;

    data_in = 110;

    #10;

    data_in = 81;

    #10;

    data_in = 52;

    #10;

    data_in = 9;

    #10;

    data_in = 37;

    #10;

    data_in = 18;

    #10;

    data_in = 22;

    #10;

    data_in = 34;

    #10;

    data_in = 17;

    #10;

    data_in = 76;

    #10;

    data_in = 36;

    #10;

    data_in = 18;

    #10;

    data_in = 6;

    #10;

    data_in = 15;

    #10;

    data_in = 21;

    #10;

    data_in = 102;

    #10;

    data_in = 94;

    #10;

    data_in = 55;

    #10;

    data_in = 32;

    #10;

    data_in = 91;

    #10;

    data_in = 56;

    #10;

    data_in = 33;

    #10;

    data_in = 5;

    #10;

    data_in = 56;

    #10;

    data_in = 98;

    #10;

    data_in = 23;

    #10;

    data_in = 46;

    #10;

    data_in = 4;

    #10;

    data_in = 81;

    #10;

    data_in = 118;

    #10;

    data_in = 110;

    #10;

    data_in = 66;

    #10;

    data_in = 63;

    #10;

    data_in = 21;

    #10;

    data_in = 112;

    #10;

    data_in = 39;

    #10;

    data_in = 36;

    #10;

    data_in = 73;

    #10;

    data_in = 57;

    #10;

    data_in = 46;

    #10;

    data_in = 78;

    #10;

    data_in = 35;

    #10;

    data_in = 71;

    #10;

    data_in = 69;

    #10;

    data_in = 79;

    #10;

    data_in = 52;

    #10;

    data_in = 23;

    #10;

    data_in = 29;

    #10;

    data_in = 101;

    #10;

    data_in = 27;

    #10;

    data_in = 58;

    #10;

    data_in = 63;

    #10;

    data_in = 107;

    #10;

    data_in = 34;

    #10;

    data_in = 94;

    #10;

    data_in = 60;

    #10;

    data_in = 14;

    #10;

    data_in = 85;

    #10;

    data_in = 49;

    #10;

    data_in = 17;

    #10;

    data_in = 111;

    #10;

    data_in = 28;

    #10;

    data_in = 27;

    #10;

    data_in = 44;

    #10;

    data_in = 64;

    #10;

    data_in = 3;

    #10;

    data_in = 80;

    #10;

    data_in = 123;

    #10;

    data_in = 31;

    #10;

    data_in = 3;

    #10;

    data_in = 73;

    #10;

    data_in = 52;

    #10;

    data_in = 127;

    #10;

    data_in = 9;

    #10;

    data_in = 15;

    #10;

    data_in = 122;

    #10;

    data_in = 86;

    #10;

    data_in = 80;

    #10;

    data_in = 16;

    #10;

    data_in = 48;

    #10;

    data_in = 82;

    #10;

    data_in = 28;

    #10;

    data_in = 76;

    #10;

    data_in = 51;

    #10;

    data_in = 72;

    #10;

    data_in = 121;

    #10;

    data_in = 69;

    #10;

    data_in = 126;

    #10;

    data_in = 51;

    #10;

    data_in = 33;

    #10;

    data_in = 42;

    #10;

    data_in = 112;

    #10;

    data_in = 75;

    #10;

    data_in = 1;

    #10;

    data_in = 85;

    #10;

    data_in = 76;

    #10;

    data_in = 51;

    #10;

    data_in = 65;

    #10;

    data_in = 75;

    #10;

    data_in = 28;

    #10;

    data_in = 65;

    #10;

    data_in = 58;

    #10;

    data_in = 37;

    #10;

    data_in = 92;

    #10;

    data_in = 30;

    #10;

    data_in = 109;

    #10;

    data_in = 5;

    #10;

    data_in = 81;

    #10;

    data_in = 103;

    #10;

    data_in = 75;

    #10;

    data_in = 70;

    #10;

    data_in = 111;

    #10;

    data_in = 28;

    #10;

    data_in = 106;

    #10;

    data_in = 31;

    #10;

    data_in = 18;

    #10;

    data_in = 52;

    #10;

    data_in = 81;

    #10;

    data_in = 79;

    #10;

    data_in = 98;

    #10;

    data_in = 123;

    #10;

    data_in = 51;

    #10;

    data_in = 66;

    #10;

    data_in = 108;

    #10;

    data_in = 96;

    #10;

    data_in = 64;

    #10;

    data_in = 23;

    #10;

    data_in = 70;

    #10;

    data_in = 69;

    #10;

    data_in = 17;

    #10;

    data_in = 102;

    #10;

    data_in = 97;

    #10;

    data_in = 17;

    #10;

    data_in = 55;

    #10;

    data_in = 16;

    #10;

    data_in = 72;

    #10;

    data_in = 40;

    #10;

    data_in = 8;

    #10;

    data_in = 117;

    #10;

    data_in = 44;

    #10;

    data_in = 57;

    #10;

    data_in = 98;

    #10;

    data_in = 87;

    #10;

    data_in = 7;

    #10;

    data_in = 92;

    #10;

    data_in = 19;

    #10;

    data_in = 71;

    #10;

    data_in = 37;

    #10;

    data_in = 37;

    #10;

    data_in = 53;

    #10;

    data_in = 88;

    #10;

    data_in = 119;

    #10;

    data_in = 78;

    #10;

    data_in = 69;

    #10;

    data_in = 30;

    #10;

    data_in = 4;

    #10;

    data_in = 24;

    #10;

    data_in = 51;

    #10;

    data_in = 48;

    #10;

    data_in = 55;

    #10;

    data_in = 2;

    #10;

    data_in = 62;

    #10;

    data_in = 94;

    #10;

    data_in = 67;

    #10;

    data_in = 63;

    #10;

    data_in = 14;

    #10;

    data_in = 10;

    #10;

    data_in = 26;

    #10;

    data_in = 25;

    #10;

    data_in = 118;

    #10;

    data_in = 93;

    #10;

    data_in = 81;

    #10;

    data_in = 99;

    #10;

    data_in = 114;

    #10;

    data_in = 119;

    #10;

    data_in = 117;

    #10;

    data_in = 4;

    #10;

    data_in = 62;

    #10;

    data_in = 61;

    #10;

    data_in = 109;

    #10;

    data_in = 74;

    #10;

    data_in = 8;

    #10;

    data_in = 57;

    #10;

    data_in = 78;

    #10;

    data_in = 44;

    #10;

    data_in = 95;

    #10;

    data_in = 97;

    #10;

    data_in = 61;

    #10;

    data_in = 127;

    #10;

    data_in = 23;

    #10;

    data_in = 87;

    #10;

    data_in = 60;

    #10;

    data_in = 57;

    #10;

    data_in = 34;

    #10;

    data_in = 95;

    #10;

    data_in = 16;

    #10;

    data_in = 83;

    #10;

    data_in = 3;

    #10;

    data_in = 49;

    #10;

    data_in = 11;

    #10;

    data_in = 3;

    #10;

    data_in = 57;

    #10;

    data_in = 76;

    #10;

    data_in = 45;

    #10;

    data_in = 36;

    #10;

    data_in = 37;

    #10;

    data_in = 113;

    #10;

    data_in = 34;

    #10;

    data_in = 4;

    #10;

    data_in = 10;

    #10;

    data_in = 97;

    #10;

    data_in = 15;

    #10;

    data_in = 109;

    #10;

    data_in = 26;

    #10;

    data_in = 9;

    #10;

    data_in = 86;

    #10;

    data_in = 4;

    #10;

    data_in = 112;

    #10;

    data_in = 110;

    #10;

    data_in = 57;

    #10;

    data_in = 9;

    #10;

    data_in = 97;

    #10;

    data_in = 45;

    #10;

    data_in = 59;

    #10;

    data_in = 101;

    #10;

    data_in = 63;

    #10;

    data_in = 15;

    #10;

    data_in = 30;

    #10;

    data_in = 117;

    #10;

    data_in = 49;

    #10;

    data_in = 102;

    #10;

    data_in = 123;

    #10;

    data_in = 71;

    #10;

    data_in = 85;

    #10;

    data_in = 104;

    #10;

    data_in = 100;

    #10;

    data_in = 116;

    #10;

    data_in = 10;

    #10;

    data_in = 52;

    #10;

    data_in = 110;

    #10;

    data_in = 47;

    #10;

    data_in = 23;

    #10;

    data_in = 0;

    #10;

    data_in = 2;

    #10;

    data_in = 47;

    #10;

    data_in = 95;

    #10;

    data_in = 109;

    #10;

    data_in = 35;

    #10;

    data_in = 30;

    #10;

    data_in = 81;

    #10;

    data_in = 98;

    #10;

    data_in = 45;

    #10;

    data_in = 57;

    #10;

    data_in = 46;

    #10;

    data_in = 22;

    #10;

    data_in = 51;

    #10;

    data_in = 13;

    #10;

    data_in = 109;

    #10;

    data_in = 107;

    #10;

    data_in = 71;

    #10;

    data_in = 84;

    #10;

    data_in = 27;

    #10;

    data_in = 77;

    #10;

    data_in = 113;

    #10;

    data_in = 73;

    #10;

    data_in = 41;

    #10;

    data_in = 50;

    #10;

    data_in = 53;

    #10;

    data_in = 14;

    #10;

    data_in = 40;

    #10;

    data_in = 63;

    #10;

    data_in = 65;

    #10;

    data_in = 6;

    #10;

    data_in = 115;

    #10;

    data_in = 66;

    #10;

    data_in = 70;

    #10;

    data_in = 95;

    #10;

    data_in = 125;

    #10;

    data_in = 23;

    #10;

    data_in = 44;

    #10;

    data_in = 125;

    #10;

    data_in = 19;

    #10;

    data_in = 34;

    #10;

    data_in = 61;

    #10;

    data_in = 88;

    #10;

    data_in = 13;

    #10;

    data_in = 14;

    #10;

    data_in = 84;

    #10;

    data_in = 78;

    #10;

    data_in = 71;

    #10;

    data_in = 98;

    #10;

    data_in = 32;

    #10;

    data_in = 83;

    #10;

    data_in = 23;

    #10;

    data_in = 76;

    #10;

    data_in = 37;

    #10;

    data_in = 2;

    #10;

    data_in = 109;

    #10;

    data_in = 96;

    #10;

    data_in = 15;

    #10;

    data_in = 49;

    #10;

    data_in = 23;

    #10;

    data_in = 106;

    #10;

    data_in = 99;

    #10;

    data_in = 104;

    #10;

    data_in = 111;

    #10;

    data_in = 7;

    #10;

    data_in = 95;

    #10;

    data_in = 120;

    #10;

    data_in = 16;

    #10;

    data_in = 87;

    #10;

    data_in = 79;

    #10;

    data_in = 86;

    #10;

    data_in = 54;

    #10;

    data_in = 52;

    #10;

    data_in = 111;

    #10;

    data_in = 42;

    #10;

    data_in = 125;

    #10;

    data_in = 30;

    #10;

    data_in = 14;

    #10;

    data_in = 63;

    #10;

    data_in = 121;

    #10;

    data_in = 51;

    #10;

    data_in = 25;

    #10;

    data_in = 33;

    #10;

    data_in = 91;

    #10;

    data_in = 19;

    #10;

    data_in = 106;

    #10;

    data_in = 2;

    #10;

    data_in = 32;

    #10;

    data_in = 62;

    #10;

    data_in = 125;

    #10;

    data_in = 31;

    #10;

    data_in = 76;

    #10;

    data_in = 32;

    #10;

    data_in = 30;

    #10;

    data_in = 118;

    #10;

    data_in = 13;

    #10;

    data_in = 108;

    #10;

    data_in = 7;

    #10;

    data_in = 19;

    #10;

    data_in = 69;

    #10;

    data_in = 69;

    #10;

    data_in = 49;

    #10;

    data_in = 126;

    #10;

    data_in = 119;

    #10;

    data_in = 88;

    #10;

    data_in = 9;

    #10;

    data_in = 66;

    #10;

    data_in = 0;

    #10;

    data_in = 21;

    #10;

    data_in = 124;

    #10;

    data_in = 5;

    #10;

    data_in = 3;

    #10;

    data_in = 20;

    #10;

    data_in = 34;

    #10;

    data_in = 19;

    #10;

    data_in = 44;

    #10;

    data_in = 32;

    #10;

    data_in = 66;

    #10;

    data_in = 53;

    #10;

    data_in = 6;

    #10;

    data_in = 67;

    #10;

    data_in = 38;

    #10;

    data_in = 42;

    #10;

    data_in = 112;

    #10;

    data_in = 83;

    #10;

    data_in = 112;

    #10;

    data_in = 48;

    #10;

    data_in = 42;

    #10;

    data_in = 77;

    #10;

    data_in = 17;

    #10;

    data_in = 71;

    #10;

    data_in = 58;

    #10;

    data_in = 25;

    #10;

    data_in = 58;

    #10;

    data_in = 63;

    #10;

    data_in = 100;

    #10;

    data_in = 93;

    #10;

    data_in = 41;

    #10;

    data_in = 127;

    #10;

    data_in = 23;

    #10;

    data_in = 80;

    #10;

    data_in = 48;

    #10;

    data_in = 98;

    #10;

    data_in = 77;

    #10;

    data_in = 2;

    #10;

    data_in = 18;

    #10;

    data_in = 126;

    #10;

    data_in = 96;

    #10;

    data_in = 20;

    #10;

    data_in = 52;

    #10;

    data_in = 94;

    #10;

    data_in = 108;

    #10;

    data_in = 19;

    #10;

    data_in = 72;

    #10;

    data_in = 110;

    #10;

    data_in = 115;

    #10;

    data_in = 101;

    #10;

    data_in = 32;

    #10;

    data_in = 102;

    #10;

    data_in = 68;

    #10;

    data_in = 34;

    #10;

    data_in = 22;

    #10;

    data_in = 38;

    #10;

    data_in = 43;

    #10;

    data_in = 103;

    #10;

    data_in = 75;

    #10;

    data_in = 6;

    #10;

    data_in = 105;

    #10;

    data_in = 81;

    #10;

    data_in = 111;

    #10;

    data_in = 2;

    #10;

    data_in = 29;

    #10;

    data_in = 69;

    #10;

    data_in = 65;

    #10;

    data_in = 60;

    #10;

    data_in = 49;

    #10;

    data_in = 92;

    #10;

    data_in = 12;

    #10;

    data_in = 6;

    #10;

    data_in = 104;

    #10;

    data_in = 106;

    #10;

    data_in = 17;

    #10;

    data_in = 70;

    #10;

    data_in = 122;

    #10;

    data_in = 43;

    #10;

    data_in = 45;

    #10;

    data_in = 41;

    #10;

    data_in = 16;

    #10;

    data_in = 14;

    #10;

    data_in = 53;

    #10;

    data_in = 119;

    #10;

    data_in = 98;

    #10;

    data_in = 93;

    #10;

    data_in = 68;

    #10;

    data_in = 105;

    #10;

    data_in = 68;

    #10;

    data_in = 24;

    #10;

    data_in = 121;

    #10;

    data_in = 95;

    #10;

    data_in = 124;

    #10;

    data_in = 4;

    #10;

    data_in = 65;

    #10;

    data_in = 67;

    #10;

    data_in = 52;

    #10;

    data_in = 56;

    #10;

    data_in = 109;

    #10;

    data_in = 63;

    #10;

    data_in = 67;

    #10;

    data_in = 13;

    #10;

    data_in = 86;

    #10;

    data_in = 55;

    #10;

    data_in = 54;

    #10;

    data_in = 116;

    #10;

    data_in = 63;

    #10;

    data_in = 82;

    #10;

    data_in = 5;

    #10;

    data_in = 49;

    #10;

    data_in = 75;

    #10;

    data_in = 40;

    #10;

    data_in = 96;

    #10;

    data_in = 8;

    #10;

    data_in = 70;

    #10;

    data_in = 26;

    #10;

    data_in = 103;

    #10;

    data_in = 27;

    #10;

    data_in = 98;

    #10;

    data_in = 70;

    #10;

    data_in = 12;

    #10;

    data_in = 43;

    #10;

    data_in = 76;

    #10;

    data_in = 86;

    #10;

    data_in = 15;

    #10;

    data_in = 113;

    #10;

    data_in = 121;

    #10;

    data_in = 80;

    #10;

    data_in = 3;

    #10;

    data_in = 20;

    #10;

    data_in = 97;

    #10;

    data_in = 127;

    #10;

    data_in = 25;

    #10;

    data_in = 46;

    #10;

    data_in = 120;

    #10;

    data_in = 114;

    #10;

    data_in = 10;

    #10;

    data_in = 102;

    #10;

    data_in = 50;

    #10;

    data_in = 78;

    #10;

    data_in = 7;

    #10;

    data_in = 21;

    #10;

    data_in = 46;

    #10;

    data_in = 52;

    #10;

    data_in = 87;

    #10;

    data_in = 125;

    #10;

    data_in = 21;

    #10;

    data_in = 48;

    #10;

    data_in = 112;

    #10;

    data_in = 50;

    #10;

    data_in = 100;

    #10;

    data_in = 70;

    #10;

    data_in = 65;

    #10;

    data_in = 28;

    #10;

    data_in = 33;

    #10;

    data_in = 48;

    #10;

    data_in = 111;

    #10;

    data_in = 85;

    #10;

    data_in = 34;

    #10;

    data_in = 27;

    #10;

    data_in = 119;

    #10;

    data_in = 107;

    #10;

    data_in = 24;

    #10;

    data_in = 80;

    #10;

    data_in = 9;

    #10;

    data_in = 16;

    #10;

    data_in = 95;

    #10;

    data_in = 54;

    #10;

    data_in = 60;

    #10;

    data_in = 70;

    #10;

    data_in = 76;

    #10;

    data_in = 114;

    #10;

    data_in = 97;

    #10;

    data_in = 44;

    #10;

    data_in = 60;

    #10;

    data_in = 107;

    #10;

    data_in = 83;

    #10;

    data_in = 47;

    #10;

    data_in = 127;

    #10;

    data_in = 119;

    #10;

    data_in = 82;

    #10;

    data_in = 0;

    #10;

    data_in = 77;

    #10;

    data_in = 127;

    #10;

    data_in = 2;

    #10;

    data_in = 42;

    #10;

    data_in = 96;

    #10;

    data_in = 17;

    #10;

    data_in = 105;

    #10;

    data_in = 54;

    #10;

    data_in = 118;

    #10;

    data_in = 15;

    #10;

    data_in = 121;

    #10;

    data_in = 108;

    #10;

    data_in = 56;

    #10;

    data_in = 114;

    #10;

    data_in = 110;

    #10;

    data_in = 120;

    #10;

    data_in = 54;

    #10;

    data_in = 46;

    #10;

    data_in = 12;

    #10;

    data_in = 12;

    #10;

    data_in = 79;

    #10;

    data_in = 41;

    #10;

    data_in = 87;

    #10;

    data_in = 61;

    #10;

    data_in = 98;

    #10;

    data_in = 116;

    #10;

    data_in = 64;

    #10;

    data_in = 27;

    #10;

    data_in = 60;

    #10;

    data_in = 102;

    #10;

    data_in = 90;

    #10;

    data_in = 101;

    #10;

    data_in = 98;

    #10;

    data_in = 37;

    #10;

    data_in = 117;

    #10;

    data_in = 82;

    #10;

    data_in = 110;

    #10;

    data_in = 25;

    #10;

    data_in = 33;

    #10;

    data_in = 85;

    #10;

    data_in = 9;

    #10;

    data_in = 81;

    #10;

    data_in = 0;

    #10;

    data_in = 70;

    #10;

    data_in = 127;

    #10;

    data_in = 30;

    #10;

    data_in = 1;

    #10;

    data_in = 97;

    #10;

    data_in = 82;

    #10;

    data_in = 83;

    #10;

    data_in = 13;

    #10;

    data_in = 65;

    #10;

    data_in = 71;

    #10;

    data_in = 26;

    #10;

    data_in = 124;

    #10;

    data_in = 33;

    #10;

    data_in = 104;

    #10;

    data_in = 76;

    #10;

    data_in = 114;

    #10;

    data_in = 44;

    #10;

    data_in = 82;

    #10;

    data_in = 30;

    #10;

    data_in = 36;

    #10;

    data_in = 28;

    #10;

    data_in = 42;

    #10;

    data_in = 111;

    #10;

    data_in = 71;

    #10;

    data_in = 114;

    #10;

    data_in = 23;

    #10;

    data_in = 37;

    #10;

    data_in = 21;

    #10;

    data_in = 105;

    #10;

    data_in = 105;

    #10;

    data_in = 17;

    #10;

    data_in = 48;

    #10;

    data_in = 6;

    #10;

    data_in = 94;

    #10;

    data_in = 66;

    #10;

    data_in = 77;

    #10;

    data_in = 105;

    #10;

    data_in = 16;

    #10;

    data_in = 119;

    #10;

    data_in = 70;

    #10;

    data_in = 16;

    #10;

    data_in = 9;

    #10;

    data_in = 49;

    #10;

    data_in = 8;

    #10;

    data_in = 37;

    #10;

    data_in = 84;

    #10;

    data_in = 86;

    #10;

    data_in = 60;

    #10;

    data_in = 10;

    #10;

    data_in = 96;

    #10;

    data_in = 116;

    #10;

    data_in = 74;

    #10;

    data_in = 20;

    #10;

    data_in = 50;

    #10;

    data_in = 83;

    #10;

    data_in = 86;

    #10;

    data_in = 104;

    #10;

    data_in = 92;

    #10;

    data_in = 22;

    #10;

    data_in = 60;

    #10;

    data_in = 69;

    #10;

    data_in = 94;

    #10;

    data_in = 114;

    #10;

    data_in = 31;

    #10;

    data_in = 75;

    #10;

    data_in = 21;

    #10;

    data_in = 116;

    #10;

    data_in = 45;

    #10;

    data_in = 111;

    #10;

    data_in = 19;

    #10;

    data_in = 48;

    #10;

    data_in = 67;

    #10;

    data_in = 111;

    #10;

    data_in = 4;

    #10;

    data_in = 58;

    #10;

    data_in = 122;

    #10;

    data_in = 24;

    #10;

    data_in = 45;

    #10;

    data_in = 93;

    #10;

    data_in = 2;

    #10;

    data_in = 106;

    #10;

    data_in = 124;

    #10;

    data_in = 86;

    #10;

    data_in = 10;

    #10;

    data_in = 52;

    #10;

    data_in = 116;

    #10;

    data_in = 70;

    #10;

    data_in = 92;

    #10;

    data_in = 112;

    #10;

    data_in = 76;

    #10;

    data_in = 80;

    #10;

    data_in = 30;

    #10;

    data_in = 112;

    #10;

    data_in = 42;

    #10;

    data_in = 42;

    #10;

    data_in = 72;

    #10;

    data_in = 27;

    #10;

    data_in = 66;

    #10;

    data_in = 88;

    #10;

    data_in = 123;

    #10;

    data_in = 1;

    #10;

    data_in = 47;

    #10;

    data_in = 88;

    #10;

    data_in = 77;

    #10;

    data_in = 31;

    #10;

    data_in = 69;

    #10;

    data_in = 1;

    #10;

    data_in = 26;

    #10;

    data_in = 87;

    #10;

    data_in = 79;

    #10;

    data_in = 75;

    #10;

    data_in = 111;

    #10;

    data_in = 121;

    #10;

    data_in = 27;

    #10;

    data_in = 9;

    #10;

    data_in = 8;

    #10;

    data_in = 81;

    #10;

    data_in = 64;

    #10;

    data_in = 35;

    #10;

    data_in = 115;

    #10;

    data_in = 65;

    #10;

    data_in = 93;

    #10;

    data_in = 9;

    #10;

    data_in = 115;

    #10;

    data_in = 57;

    #10;

    data_in = 7;

    #10;

    data_in = 113;

    #10;

    data_in = 96;

    #10;

    data_in = 29;

    #10;

    data_in = 115;

    #10;

    data_in = 7;

    #10;

    data_in = 62;

    #10;

    data_in = 68;

    #10;

    data_in = 63;

    #10;

    data_in = 117;

    #10;

    data_in = 56;

    #10;

    data_in = 4;

    #10;

    data_in = 22;

    #10;

    data_in = 127;

    #10;

    data_in = 83;

    #10;

    data_in = 30;

    #10;

    data_in = 79;

    #10;

    data_in = 15;

    #10;

    data_in = 33;

    #10;

    data_in = 92;

    #10;

    data_in = 27;

    #10;

    data_in = 34;

    #10;

    data_in = 118;

    #10;

    data_in = 100;

    #10;

    data_in = 63;

    #10;

    data_in = 16;

    #10;

    data_in = 69;

    #10;

    data_in = 21;

    #10;

    data_in = 65;

    #10;

    data_in = 73;

    #10;

    data_in = 47;

    #10;

    data_in = 110;

    #10;

    data_in = 107;

    #10;

    data_in = 35;

    #10;

    data_in = 58;

    #10;

    data_in = 24;

    #10;

    data_in = 73;

    #10;

    data_in = 118;

    #10;

    data_in = 16;

    #10;

    data_in = 80;

    #10;

    data_in = 103;

    #10;

    data_in = 29;

    #10;

    data_in = 73;

    #10;

    data_in = 22;

    #10;

    data_in = 114;

    #10;

    data_in = 74;

    #10;

    data_in = 11;

    #10;

    data_in = 2;

    #10;

    data_in = 68;

    #10;

    data_in = 75;

    #10;

    data_in = 71;

    #10;

    data_in = 21;

    #10;

    data_in = 45;

    #10;

    data_in = 99;

    #10;

    data_in = 107;

    #10;

    data_in = 20;

    #10;

    data_in = 89;

    #10;

    data_in = 42;

    #10;

    data_in = 76;

    #10;

    data_in = 49;

    #10;

    data_in = 77;

    #10;

    data_in = 3;

    #10;

    data_in = 101;

    #10;

    data_in = 48;

    #10;

    data_in = 84;

    #10;

    data_in = 69;

    #10;

    data_in = 10;

    #10;

    data_in = 21;

    #10;

    data_in = 33;

    #10;

    data_in = 91;

    #10;

    data_in = 22;

    #10;

    data_in = 38;

    #10;

    data_in = 114;

    #10;

    data_in = 44;

    #10;

    data_in = 115;

    #10;

    data_in = 119;

    #10;

    data_in = 94;

    #10;

    data_in = 53;

    #10;

    data_in = 73;

    #10;

    data_in = 100;

    #10;

    data_in = 3;

    #10;

    data_in = 81;

    #10;

    data_in = 3;

    #10;

    data_in = 44;

    #10;

    data_in = 38;

    #10;

    data_in = 107;

    #10;

    data_in = 80;

    #10;

    data_in = 100;

    #10;

    data_in = 43;

    #10;

    data_in = 83;

    #10;

    data_in = 20;

    #10;

    data_in = 72;

    #10;

    data_in = 0;

    #10;

    data_in = 32;

    #10;

    data_in = 115;

    #10;

    data_in = 38;

    #10;

    data_in = 11;

    #10;

    data_in = 4;

    #10;

    data_in = 46;

    #10;

    data_in = 10;

    #10;

    data_in = 115;

    #10;

    data_in = 52;

    #10;

    data_in = 125;

    #10;

    data_in = 123;

    #10;

    data_in = 43;

    #10;

    data_in = 80;

    #10;

    data_in = 12;

    #10;

    data_in = 127;

    #10;

    data_in = 96;

    #10;

    data_in = 32;

    #10;

    data_in = 5;

    #10;

    data_in = 56;

    #10;

    data_in = 32;

    #10;

    data_in = 41;

    #10;

    data_in = 101;

    #10;

    data_in = 94;

    #10;

    data_in = 86;

    #10;

    data_in = 6;

    #10;

    data_in = 5;

    #10;

    data_in = 62;

    #10;

    data_in = 124;

    #10;

    data_in = 68;

    #10;

    data_in = 95;

    #10;

    data_in = 104;

    #10;

    data_in = 8;

    #10;

    data_in = 78;

    #10;

    data_in = 124;

    #10;

    data_in = 36;

    #10;

    data_in = 23;

    #10;

    data_in = 6;

    #10;

    data_in = 41;

    #10;

    data_in = 74;

    #10;

    data_in = 19;

    #10;

    data_in = 65;

    #10;

    data_in = 0;

    #10;

    data_in = 114;

    #10;

    data_in = 87;

    #10;

    data_in = 79;

    #10;

    data_in = 68;

    #10;

    data_in = 25;

    #10;

    data_in = 14;

    #10;

    data_in = 55;

    #10;

    data_in = 58;

    #10;

    data_in = 12;

    #10;

    data_in = 93;

    #10;

    data_in = 47;

    #10;

    data_in = 120;

    #10;

    data_in = 48;

    #10;

    data_in = 55;

    #10;

    data_in = 53;

    #10;

    data_in = 70;

    #10;

    data_in = 53;

    #10;

    data_in = 83;

    #10;

    data_in = 78;

    #10;

    data_in = 72;

    #10;

    data_in = 12;

    #10;

    data_in = 123;

    #10;

    data_in = 48;

    #10;

    data_in = 112;

    #10;

    data_in = 17;

    #10;

    data_in = 44;

    #10;

    data_in = 98;

    #10;

    data_in = 17;

    #10;

    data_in = 86;

    #10;

    data_in = 97;

    #10;

    data_in = 22;

    #10;

    data_in = 100;

    #10;

    data_in = 112;

    #10;

    data_in = 16;

    #10;

    data_in = 28;

    #10;

    data_in = 35;

    #10;

    data_in = 122;

    #10;

    data_in = 126;

    #10;

    data_in = 30;

    #10;

    data_in = 10;

    #10;

    data_in = 113;

    #10;

    data_in = 46;

    #10;

    data_in = 11;

    #10;

    data_in = 0;

    #10;

    data_in = 33;

    #10;

    data_in = 46;

    #10;

    data_in = 71;

    #10;

    data_in = 50;

    #10;

    data_in = 108;

    #10;

    data_in = 48;

    #10;

    data_in = 7;

    #10;

    data_in = 38;

    #10;

    data_in = 58;

    #10;

    data_in = 126;

    #10;

    data_in = 101;

    #10;

    data_in = 121;

    #10;

    data_in = 124;

    #10;

    data_in = 108;

    #10;

    data_in = 98;

    #10;

    data_in = 13;

    #10;

    data_in = 103;

    #10;

    data_in = 72;

    #10;

    data_in = 84;

    #10;

    data_in = 67;

    #10;

    data_in = 87;

    #10;

    data_in = 105;

    #10;

    data_in = 47;

    #10;

    data_in = 33;

    #10;

    data_in = 33;

    #10;

    data_in = 116;

    #10;

    data_in = 59;

    #10;

    data_in = 22;

    #10;

    data_in = 43;

    #10;

    data_in = 6;

    #10;

    data_in = 98;

    #10;

    data_in = 35;

    #10;

    data_in = 33;

    #10;

    data_in = 76;

    #10;

    data_in = 45;

    #10;

    data_in = 86;

    #10;

    data_in = 58;

    #10;

    data_in = 41;

    #10;

    data_in = 61;

    #10;

    data_in = 12;

    #10;

    data_in = 1;

    #10;

    data_in = 2;

    #10;

    data_in = 60;

    #10;

    data_in = 33;

    #10;

    data_in = 63;

    #10;

    data_in = 82;

    #10;

    data_in = 74;

    #10;

    data_in = 86;

    #10;

    data_in = 107;

    #10;

    data_in = 76;

    #10;

    data_in = 38;

    #10;

    data_in = 61;

    #10;

    data_in = 10;

    #10;

    data_in = 27;

    #10;

    data_in = 62;

    #10;

    data_in = 23;

    #10;

    data_in = 74;

    #10;

    data_in = 0;

    #10;

    data_in = 106;

    #10;

    data_in = 127;

    #10;

    data_in = 23;

    #10;

    data_in = 14;

    #10;

    data_in = 96;

    #10;

    data_in = 39;

    #10;

    data_in = 83;

    #10;

    data_in = 123;

    #10;

    data_in = 99;

    #10;

    data_in = 53;

    #10;

    data_in = 23;

    #10;

    data_in = 78;

    #10;

    data_in = 108;

    #10;

    data_in = 40;

    #10;

    data_in = 33;

    #10;

    data_in = 107;

    #10;

    data_in = 5;

    #10;

    data_in = 67;

    #10;

    data_in = 88;

    #10;

    data_in = 22;

    #10;

    data_in = 66;

    #10;

    data_in = 4;

    #10;

    data_in = 84;

    #10;

    data_in = 26;

    #10;

    data_in = 10;

    #10;

    data_in = 83;

    #10;

    data_in = 23;

    #10;

    data_in = 64;

    #10;

    data_in = 103;

    #10;

    data_in = 23;

    #10;

    data_in = 93;

    #10;

    data_in = 38;

    #10;

    data_in = 101;

    #10;

    data_in = 13;

    #10;

    data_in = 40;

    #10;

    data_in = 113;

    #10;

    data_in = 67;

    #10;

    data_in = 52;

    #10;

    data_in = 79;

    #10;

    data_in = 75;

    #10;

    data_in = 10;

    #10;

    data_in = 68;

    #10;

    data_in = 63;

    #10;

    data_in = 112;

    #10;

    data_in = 19;

    #10;

    data_in = 61;

    #10;

    data_in = 69;

    #10;

    data_in = 126;

    #10;

    data_in = 108;

    #10;

    data_in = 27;

    #10;

    data_in = 3;

    #10;

    data_in = 77;

    #10;

    data_in = 114;

    #10;

    data_in = 94;

    #10;

    data_in = 54;

    #10;

    data_in = 6;

    #10;

    data_in = 98;

    #10;

    data_in = 23;

    #10;

    data_in = 37;

    #10;

    data_in = 126;

    #10;

    data_in = 23;

    #10;

    data_in = 127;

    #10;

    data_in = 52;

    #10;

    data_in = 70;

    #10;

    data_in = 1;

    #10;

    data_in = 14;

    #10;

    data_in = 46;

    #10;

    data_in = 29;

    #10;

    data_in = 15;

    #10;

    data_in = 23;

    #10;

    data_in = 71;

    #10;

    data_in = 46;

    #10;

    data_in = 17;

    #10;

    data_in = 123;

    #10;

    data_in = 17;

    #10;

    data_in = 82;

    #10;

    data_in = 27;

    #10;

    data_in = 38;

    #10;

    data_in = 82;

    #10;

    data_in = 41;

    #10;

    data_in = 6;

    #10;

    data_in = 39;

    #10;

    data_in = 54;

    #10;

    data_in = 35;

    #10;

    data_in = 51;

    #10;

    data_in = 43;

    #10;

    data_in = 53;

    #10;

    data_in = 31;

    #10;

    data_in = 113;

    #10;

    data_in = 118;

    #10;

    data_in = 15;

    #10;

    data_in = 79;

    #10;

    data_in = 109;

    #10;

    data_in = 27;

    #10;

    data_in = 11;

    #10;

    data_in = 73;

    #10;

    data_in = 52;

    #10;

    data_in = 22;

    #10;

    data_in = 109;

    #10;

    data_in = 75;

    #10;

    data_in = 32;

    #10;

    data_in = 105;

    #10;

    data_in = 114;

    #10;

    data_in = 101;

    #10;

    data_in = 59;

    #10;

    data_in = 23;

    #10;

    data_in = 49;

    #10;

    data_in = 82;

    #10;

    data_in = 93;

    #10;

    data_in = 5;

    #10;

    data_in = 54;

    #10;

    data_in = 23;

    #10;

    data_in = 112;

    #10;

    data_in = 13;

    #10;

    data_in = 71;

    #10;

    data_in = 103;

    #10;

    data_in = 62;

    #10;

    data_in = 112;

    #10;

    data_in = 33;

    #10;

    data_in = 124;

    #10;

    data_in = 39;

    #10;

    data_in = 19;

    #10;

    data_in = 120;

    #10;

    data_in = 56;

    #10;

    data_in = 111;

    #10;

    data_in = 35;

    #10;

    data_in = 42;

    #10;

    data_in = 41;

    #10;

    data_in = 39;

    #10;

    data_in = 21;

    #10;

    data_in = 67;

    #10;

    data_in = 18;

    #10;

    data_in = 6;

    #10;

    data_in = 24;

    #10;

    data_in = 79;

    #10;

    data_in = 114;

    #10;

    data_in = 26;

    #10;

    data_in = 87;

    #10;

    data_in = 125;

    #10;

    data_in = 17;

    #10;

    data_in = 15;

    #10;

    data_in = 33;

    #10;

    data_in = 126;

    #10;

    data_in = 7;

    #10;

    data_in = 35;

    #10;

    data_in = 60;

    #10;

    data_in = 52;

    #10;

    data_in = 122;

    #10;

    data_in = 13;

    #10;

    data_in = 105;

    #10;

    data_in = 109;

    #10;

    data_in = 55;

    #10;

    data_in = 0;

    #10;

    data_in = 126;

    #10;

    data_in = 6;

    #10;

    data_in = 10;

    #10;

    data_in = 115;

    #10;

    data_in = 5;

    #10;

    data_in = 104;

    #10;

    data_in = 127;

    #10;

    data_in = 93;

    #10;

    data_in = 87;

    #10;

    data_in = 25;

    #10;

    data_in = 14;

    #10;

    data_in = 80;

    #10;

    data_in = 50;

    #10;

    data_in = 125;

    #10;

    data_in = 114;

    #10;

    data_in = 20;

    #10;

    data_in = 98;

    #10;

    data_in = 47;

    #10;

    data_in = 101;

    #10;

    data_in = 54;

    #10;

    data_in = 68;

    #10;

    data_in = 12;

    #10;

    data_in = 68;

    #10;

    data_in = 88;

    #10;

    data_in = 48;

    #10;

    data_in = 75;

    #10;

    data_in = 7;

    #10;

    data_in = 52;

    #10;

    data_in = 2;

    #10;

    data_in = 79;

    #10;

    data_in = 123;

    #10;

    data_in = 99;

    #10;

    data_in = 84;

    #10;

    data_in = 104;

    #10;

    data_in = 120;

    #10;

    data_in = 24;

    #10;

    data_in = 60;

    #10;

    data_in = 122;

    #10;

    data_in = 43;

    #10;

    data_in = 73;

    #10;

    data_in = 101;

    #10;

    data_in = 55;

    #10;

    data_in = 27;

    #10;

    data_in = 57;

    #10;

    data_in = 61;

    #10;

    data_in = 17;

    #10;

    data_in = 18;

    #10;

    data_in = 124;

    #10;

    data_in = 119;

    #10;

    data_in = 66;

    #10;

    data_in = 56;

    #10;

    data_in = 36;

    #10;

    data_in = 46;

    #10;

    data_in = 26;

    #10;

    data_in = 95;

    #10;

    data_in = 96;

    #10;

    data_in = 102;

    #10;

    data_in = 16;

    #10;

    data_in = 62;

    #10;

    data_in = 89;

    #10;

    data_in = 1;

    #10;

    data_in = 13;

    #10;

    data_in = 104;

    #10;

    data_in = 0;

    #10;

    data_in = 15;

    #10;

    data_in = 9;

    #10;

    data_in = 7;

    #10;

    data_in = 20;

    #10;

    data_in = 9;

    #10;

    data_in = 4;

    #10;

    data_in = 40;

    #10;

    data_in = 3;

    #10;

    data_in = 50;

    #10;

    data_in = 33;

    #10;

    data_in = 6;

    #10;

    data_in = 95;

    #10;

    data_in = 99;

    #10;

    data_in = 3;

    #10;

    data_in = 27;

    #10;

    data_in = 88;

    #10;

    data_in = 74;

    #10;

    data_in = 19;

    #10;

    data_in = 92;

    #10;

    data_in = 38;

    #10;

    data_in = 29;

    #10;

    data_in = 102;

    #10;

    data_in = 94;

    #10;

    data_in = 8;

    #10;

    data_in = 115;

    #10;

    data_in = 120;

    #10;

    data_in = 61;

    #10;

    data_in = 103;

    #10;

    data_in = 59;

    #10;

    data_in = 3;

    #10;

    data_in = 105;

    #10;

    data_in = 56;

    #10;

    data_in = 58;

    #10;

    data_in = 49;

    #10;

    data_in = 37;

    #10;

    data_in = 113;

    #10;

    data_in = 40;

    #10;

    data_in = 53;

    #10;

    data_in = 30;

    #10;

    data_in = 2;

    #10;

    data_in = 47;

    #10;

    data_in = 26;

    #10;

    data_in = 126;

    #10;

    data_in = 20;

    #10;

    data_in = 69;

    #10;

    data_in = 15;

    #10;

    data_in = 84;

    #10;

    data_in = 47;

    #10;

    data_in = 35;

    #10;

    data_in = 96;

    #10;

    data_in = 46;

    #10;

    data_in = 46;

    #10;

    data_in = 126;

    #10;

    data_in = 41;

    #10;

    data_in = 68;

    #10;

    data_in = 6;

    #10;

    data_in = 117;

    #10;

    data_in = 2;

    #10;

    data_in = 34;

    #10;

    data_in = 3;

    #10;

    data_in = 13;

    #10;

    data_in = 29;

    #10;

    data_in = 48;

    #10;

    data_in = 52;

    #10;

    data_in = 84;

    #10;

    data_in = 75;

    #10;

    data_in = 37;

    #10;

    data_in = 76;

    #10;

    data_in = 90;

    #10;

    data_in = 30;

    #10;

    data_in = 82;

    #10;

    data_in = 37;

    #10;

    data_in = 32;

    #10;

    data_in = 102;

    #10;

    data_in = 105;

    #10;

    data_in = 54;

    #10;

    data_in = 9;

    #10;

    data_in = 88;

    #10;

    data_in = 52;

    #10;

    data_in = 78;

    #10;

    data_in = 62;

    #10;

    data_in = 89;

    #10;

    data_in = 109;

    #10;

    data_in = 86;

    #10;

    data_in = 109;

    #10;

    data_in = 26;

    #10;

    data_in = 70;

    #10;

    data_in = 107;

    #10;

    data_in = 111;

    #10;

    data_in = 0;

    #10;

    data_in = 1;

    #10;

    data_in = 21;

    #10;

    data_in = 97;

    #10;

    data_in = 58;

    #10;

    data_in = 72;

    #10;

    data_in = 76;

    #10;

    data_in = 56;

    #10;

    data_in = 103;

    #10;

    data_in = 80;

    #10;

    data_in = 0;

    #10;

    data_in = 42;

    #10;

    data_in = 57;

    #10;

    data_in = 44;

    #10;

    data_in = 31;

    #10;

    data_in = 126;

    #10;

    data_in = 3;

    #10;

    data_in = 47;

    #10;

    data_in = 40;

    #10;

    data_in = 68;

    #10;

    data_in = 87;

    #10;

    data_in = 62;

    #10;

    data_in = 0;

    #10;

    data_in = 69;

    #10;

    data_in = 47;

    #10;

    data_in = 56;

    #10;

    data_in = 91;

    #10;

    data_in = 108;

    #10;

    data_in = 25;

    #10;

    data_in = 125;

    #10;

    data_in = 77;

    #10;

    data_in = 0;

    #10;

    data_in = 70;

    #10;

    data_in = 100;

    #10;

    data_in = 21;

    #10;

    data_in = 119;

    #10;

    data_in = 12;

    #10;

    data_in = 77;

    #10;

    data_in = 56;

    #10;

    data_in = 38;

    #10;

    data_in = 44;

    #10;

    data_in = 28;

    #10;

    data_in = 2;

    #10;

    data_in = 108;

    #10;

    data_in = 113;

    #10;

    data_in = 21;

    #10;

    data_in = 99;

    #10;

    data_in = 69;

    #10;

    data_in = 25;

    #10;

    data_in = 30;

    #10;

    data_in = 47;

    #10;

    data_in = 99;

    #10;

    data_in = 120;

    #10;

    data_in = 39;

    #10;

    data_in = 120;

    #10;

    data_in = 114;

    #10;

    data_in = 89;

    #10;

    data_in = 60;

    #10;

    data_in = 38;

    #10;

    data_in = 105;

    #10;

    data_in = 68;

    #10;

    data_in = 124;

    #10;

    data_in = 84;

    #10;

    data_in = 97;

    #10;

    data_in = 123;

    #10;

    data_in = 25;

    #10;

    data_in = 0;

    #10;

    data_in = 106;

    #10;

    data_in = 64;

    #10;

    data_in = 2;

    #10;

    data_in = 124;

    #10;

    data_in = 96;

    #10;

    data_in = 65;

    #10;

    data_in = 10;

    #10;

    data_in = 81;

    #10;

    data_in = 74;

    #10;

    data_in = 127;

    #10;

    data_in = 63;

    #10;

    data_in = 77;

    #10;

    data_in = 92;

    #10;

    data_in = 61;

    #10;

    data_in = 72;

    #10;

    data_in = 121;

    #10;

    data_in = 71;

    #10;

    data_in = 104;

    #10;

    data_in = 50;

    #10;

    data_in = 76;

    #10;

    data_in = 30;

    #10;

    data_in = 23;

    #10;

    data_in = 39;

    #10;

    data_in = 24;

    #10;

    data_in = 82;

    #10;

    data_in = 121;

    #10;

    data_in = 78;

    #10;

    data_in = 12;

    #10;

    data_in = 23;

    #10;

    data_in = 118;

    #10;

    data_in = 34;

    #10;

    data_in = 30;

    #10;

    data_in = 58;

    #10;

    data_in = 88;

    #10;

    data_in = 38;

    #10;

    data_in = 25;

    #10;

    data_in = 24;

    #10;

    data_in = 23;

    #10;

    data_in = 124;

    #10;

    data_in = 10;

    #10;

    data_in = 44;

    #10;

    data_in = 115;

    #10;

    data_in = 23;

    #10;

    data_in = 97;

    #10;

    data_in = 51;

    #10;

    data_in = 90;

    #10;

    data_in = 114;

    #10;

    data_in = 3;

    #10;

    data_in = 50;

    #10;

    data_in = 102;

    #10;

    data_in = 10;

    #10;

    data_in = 61;

    #10;

    data_in = 44;

    #10;

    data_in = 39;

    #10;

    data_in = 21;

    #10;

    data_in = 107;

    #10;

    data_in = 37;

    #10;

    data_in = 68;

    #10;

    data_in = 104;

    #10;

    data_in = 15;

    #10;

    data_in = 21;

    #10;

    data_in = 75;

    #10;

    data_in = 3;

    #10;

    data_in = 123;

    #10;

    data_in = 124;

    #10;

    data_in = 91;

    #10;

    data_in = 84;

    #10;

    data_in = 78;

    #10;

    data_in = 76;

    #10;

    data_in = 108;

    #10;

    data_in = 127;

    #10;

    data_in = 110;

    #10;

    data_in = 57;

    #10;

    data_in = 5;

    #10;

    data_in = 55;

    #10;

    data_in = 107;

    #10;

    data_in = 45;

    #10;

    data_in = 61;

    #10;

    data_in = 9;

    #10;

    data_in = 15;

    #10;

    data_in = 24;

    #10;

    data_in = 80;

    #10;

    data_in = 21;

    #10;

    data_in = 42;

    #10;

    data_in = 4;

    #10;

    data_in = 9;

    #10;

    data_in = 87;

    #10;

    data_in = 59;

    #10;

    data_in = 120;

    #10;

    data_in = 55;

    #10;

    data_in = 24;

    #10;

    data_in = 42;

    #10;

    data_in = 25;

    #10;

    data_in = 111;

    #10;

    data_in = 23;

    #10;

    data_in = 19;

    #10;

    data_in = 79;

    #10;

    data_in = 6;

    #10;

    data_in = 42;

    #10;

    data_in = 2;

    #10;

    data_in = 90;

    #10;

    data_in = 20;

    #10;

    data_in = 49;

    #10;

    data_in = 90;

    #10;

    data_in = 69;

    #10;

    data_in = 91;

    #10;

    data_in = 112;

    #10;

    data_in = 61;

    #10;

    data_in = 26;

    #10;

    data_in = 78;

    #10;

    data_in = 115;

    #10;

    data_in = 118;

    #10;

    data_in = 83;

    #10;

    data_in = 107;

    #10;

    data_in = 107;

    #10;

    data_in = 95;

    #10;

    data_in = 21;

    #10;

    data_in = 22;

    #10;

    data_in = 82;

    #10;

    data_in = 94;

    #10;

    data_in = 7;

    #10;

    data_in = 120;

    #10;

    data_in = 108;

    #10;

    data_in = 107;

    #10;

    data_in = 74;

    #10;

    data_in = 84;

    #10;

    data_in = 124;

    #10;

    data_in = 22;

    #10;

    data_in = 7;

    #10;

    data_in = 29;

    #10;

    data_in = 17;

    #10;

    data_in = 90;

    #10;

    data_in = 91;

    #10;

    data_in = 57;

    #10;

    data_in = 21;

    #10;

    data_in = 48;

    #10;

    data_in = 34;

    #10;

    data_in = 85;

    #10;

    data_in = 1;

    #10;

    data_in = 49;

    #10;

    data_in = 71;

    #10;

    data_in = 3;

    #10;

    data_in = 2;

    #10;

    data_in = 65;

    #10;

    data_in = 26;

    #10;

    data_in = 112;

    #10;

    data_in = 87;

    #10;

    data_in = 125;

    #10;

    data_in = 92;

    #10;

    data_in = 42;

    #10;

    data_in = 49;

    #10;

    data_in = 1;

    #10;

    data_in = 22;

    #10;

    data_in = 127;

    #10;

    data_in = 35;

    #10;

    data_in = 63;

    #10;

    data_in = 77;

    #10;

    data_in = 125;

    #10;

    data_in = 54;

    #10;

    data_in = 91;

    #10;

    data_in = 118;

    #10;

    data_in = 88;

    #10;

    data_in = 114;

    #10;

    data_in = 63;

    #10;

    data_in = 48;

    #10;

    data_in = 87;

    #10;

    data_in = 53;

    #10;

    data_in = 109;

    #10;

    data_in = 59;

    #10;

    data_in = 103;

    #10;

    data_in = 16;

    #10;

    data_in = 106;

    #10;

    data_in = 56;

    #10;

    data_in = 66;

    #10;

    data_in = 72;

    #10;

    data_in = 96;

    #10;

    data_in = 98;

    #10;

    data_in = 69;

    #10;

    data_in = 91;

    #10;

    data_in = 66;

    #10;

    data_in = 48;

    #10;

    data_in = 4;

    #10;

    data_in = 104;

    #10;

    data_in = 16;

    #10;

    data_in = 102;

    #10;

    data_in = 90;

    #10;

    data_in = 108;

    #10;

    data_in = 23;

    #10;

    data_in = 56;

    #10;

    data_in = 81;

    #10;

    data_in = 13;

    #10;

    data_in = 127;

    #10;

    data_in = 54;

    #10;

    data_in = 79;

    #10;

    data_in = 29;

    #10;

    data_in = 3;

    #10;

    data_in = 5;

    #10;

    data_in = 48;

    #10;

    data_in = 100;

    #10;

    data_in = 102;

    #10;

    data_in = 38;

    #10;

    data_in = 127;

    #10;

    data_in = 63;

    #10;

    data_in = 81;

    #10;

    data_in = 71;

    #10;

    data_in = 101;

    #10;

    data_in = 120;

    #10;

    data_in = 71;

    #10;

    data_in = 2;

    #10;

    data_in = 86;

    #10;

    data_in = 53;

    #10;

    data_in = 94;

    #10;

    data_in = 80;

    #10;

    data_in = 14;

    #10;

    data_in = 47;

    #10;

    data_in = 78;

    #10;

    data_in = 88;

    #10;

    data_in = 67;

    #10;

    data_in = 92;

    #10;

    data_in = 44;

    #10;

    data_in = 105;

    #10;

    data_in = 115;

    #10;

    data_in = 95;

    #10;

    data_in = 19;

    #10;

    data_in = 88;

    #10;

    data_in = 103;

    #10;

    data_in = 33;

    #10;

    data_in = 27;

    #10;

    data_in = 87;

    #10;

    data_in = 71;

    #10;

    data_in = 0;

    #10;

    data_in = 108;

    #10;

    data_in = 25;

    #10;

    data_in = 60;

    #10;

    data_in = 30;

    #10;

    data_in = 77;

    #10;

    data_in = 120;

    #10;

    data_in = 69;

    #10;

    data_in = 115;

    #10;

    data_in = 63;

    #10;

    data_in = 49;

    #10;

    data_in = 120;

    #10;

    data_in = 90;

    #10;

    data_in = 15;

    #10;

    data_in = 110;

    #10;

    data_in = 109;

    #10;

    data_in = 10;

    #10;

    data_in = 33;

    #10;

    data_in = 119;

    #10;

    data_in = 44;

    #10;

    data_in = 5;

    #10;

    data_in = 59;

    #10;

    data_in = 100;

    #10;

    data_in = 89;

    #10;

    data_in = 59;

    #10;

    data_in = 66;

    #10;

    data_in = 127;

    #10;

    data_in = 107;

    #10;

    data_in = 56;

    #10;

    data_in = 23;

    #10;

    data_in = 82;

    #10;

    data_in = 98;

    #10;

    data_in = 115;

    #10;

    data_in = 51;

    #10;

    data_in = 39;

    #10;

    data_in = 96;

    #10;

    data_in = 95;

    #10;

    data_in = 32;

    #10;

    data_in = 102;

    #10;

    data_in = 121;

    #10;

    data_in = 24;

    #10;

    data_in = 5;

    #10;

    data_in = 3;

    #10;

    data_in = 5;

    #10;

    data_in = 49;

    #10;

    data_in = 50;

    #10;

    data_in = 15;

    #10;

    data_in = 49;

    #10;

    data_in = 24;

    #10;

    data_in = 71;

    #10;

    data_in = 38;

    #10;

    data_in = 56;

    #10;

    data_in = 115;

    #10;

    data_in = 46;

    #10;

    data_in = 123;

    #10;

    data_in = 5;

    #10;

    data_in = 18;

    #10;

    data_in = 120;

    #10;

    data_in = 37;

    #10;

    data_in = 89;

    #10;

    data_in = 53;

    #10;

    data_in = 16;

    #10;

    data_in = 3;

    #10;

    data_in = 28;

    #10;

    data_in = 47;

    #10;

    data_in = 3;

    #10;

    data_in = 28;

    #10;

    data_in = 1;

    #10;

    data_in = 12;

    #10;

    data_in = 3;

    #10;

    data_in = 99;

    #10;

    data_in = 127;

    #10;

    data_in = 5;

    #10;

    data_in = 18;

    #10;

    data_in = 18;

    #10;

    data_in = 71;

    #10;

    data_in = 42;

    #10;

    data_in = 54;

    #10;

    data_in = 123;

    #10;

    data_in = 15;

    #10;

    data_in = 86;

    #10;

    data_in = 96;

    #10;

    data_in = 65;

    #10;

    data_in = 92;

    #10;

    data_in = 2;

    #10;

    data_in = 108;

    #10;

    data_in = 103;

    #10;

    data_in = 68;

    #10;

    data_in = 124;

    #10;

    data_in = 107;

    #10;

    data_in = 40;

    #10;

    data_in = 38;

    #10;

    data_in = 84;

    #10;

    data_in = 73;

    #10;

    data_in = 18;

    #10;

    data_in = 92;

    #10;

    data_in = 9;

    #10;

    data_in = 77;

    #10;

    data_in = 5;

    #10;

    data_in = 100;

    #10;

    data_in = 121;

    #10;

    data_in = 126;

    #10;

    data_in = 65;

    #10;

    data_in = 48;

    #10;

    data_in = 21;

    #10;

    data_in = 18;

    #10;

    data_in = 37;

    #10;

    data_in = 69;

    #10;

    data_in = 121;

    #10;

    data_in = 78;

    #10;

    data_in = 108;

    #10;

    data_in = 17;

    #10;

    data_in = 34;

    #10;

    data_in = 61;

    #10;

    data_in = 25;

    #10;

    data_in = 27;

    #10;

    data_in = 51;

    #10;

    data_in = 12;

    #10;

    data_in = 126;

    #10;

    data_in = 38;

    #10;

    data_in = 123;

    #10;

    data_in = 100;

    #10;

    data_in = 25;

    #10;

    data_in = 87;

    #10;

    data_in = 67;

    #10;

    data_in = 28;

    #10;

    data_in = 4;

    #10;

    data_in = 59;

    #10;

    data_in = 1;

    #10;

    data_in = 94;

    #10;

    data_in = 68;

    #10;

    data_in = 70;

    #10;

    data_in = 16;

    #10;

    data_in = 114;

    #10;

    data_in = 2;

    #10;

    data_in = 72;

    #10;

    data_in = 119;

    #10;

    data_in = 95;

    #10;

    data_in = 37;

    #10;

    data_in = 85;

    #10;

    data_in = 11;

    #10;

    data_in = 30;

    #10;

    data_in = 62;

    #10;

    data_in = 62;

    #10;

    data_in = 68;

    #10;

    data_in = 86;

    #10;

    data_in = 77;

    #10;

    data_in = 52;

    #10;

    data_in = 124;

    #10;

    data_in = 59;

    #10;

    data_in = 11;

    #10;

    data_in = 12;

    #10;

    data_in = 46;

    #10;

    data_in = 37;

    #10;

    data_in = 109;

    #10;

    data_in = 9;

    #10;

    data_in = 36;

    #10;

    data_in = 124;

    #10;

    data_in = 73;

    #10;

    data_in = 91;

    #10;

    data_in = 65;

    #10;

    data_in = 82;

    #10;

    data_in = 9;

    #10;

    data_in = 55;

    #10;

    data_in = 56;

    #10;

    data_in = 55;

    #10;

    data_in = 83;

    #10;

    data_in = 40;

    #10;

    data_in = 107;

    #10;

    data_in = 73;

    #10;

    data_in = 88;

    #10;

    data_in = 50;

    #10;

    data_in = 8;

    #10;

    data_in = 64;

    #10;

    data_in = 31;

    #10;

    data_in = 110;

    #10;

    data_in = 46;

    #10;

    data_in = 115;

    #10;

    data_in = 4;

    #10;

    data_in = 113;

    #10;

    data_in = 48;

    #10;

    data_in = 30;

    #10;

    data_in = 91;

    #10;

    data_in = 101;

    #10;

    data_in = 11;

    #10;

    data_in = 32;

    #10;

    data_in = 53;

    #10;

    data_in = 3;

    #10;

    data_in = 116;

    #10;

    data_in = 49;

    #10;

    data_in = 58;

    #10;

    data_in = 86;

    #10;

    data_in = 118;

    #10;

    data_in = 39;

    #10;

    data_in = 37;

    #10;

    data_in = 75;

    #10;

    data_in = 55;

    #10;

    data_in = 88;

    #10;

    data_in = 47;

    #10;

    data_in = 94;

    #10;

    data_in = 33;

    #10;

    data_in = 96;

    #10;

    data_in = 18;

    #10;

    data_in = 105;

    #10;

    data_in = 25;

    #10;

    data_in = 73;

    #10;

    data_in = 108;

    #10;

    data_in = 67;

    #10;

    data_in = 36;

    #10;

    data_in = 2;

    #10;

    data_in = 23;

    #10;

    data_in = 84;

    #10;

    data_in = 58;

    #10;

    data_in = 126;

    #10;

    data_in = 22;

    #10;

    data_in = 97;

    #10;

    data_in = 84;

    #10;

    data_in = 0;

    #10;

    data_in = 24;

    #10;

    data_in = 101;

    #10;

    data_in = 22;

    #10;

    data_in = 101;

    #10;

    data_in = 95;

    #10;

    data_in = 124;

    #10;

    data_in = 59;

    #10;

    data_in = 53;

    #10;

    data_in = 12;

    #10;

    data_in = 86;

    #10;

    data_in = 39;

    #10;

    data_in = 111;

    #10;

    data_in = 125;

    #10;

    data_in = 26;

    #10;

    data_in = 92;

    #10;

    data_in = 50;

    #10;

    data_in = 113;

    #10;

    data_in = 110;

    #10;

    data_in = 20;

    #10;

    data_in = 45;

    #10;

    data_in = 41;

    #10;

    data_in = 69;

    #10;

    data_in = 0;

    #10;

    data_in = 76;

    #10;

    data_in = 120;

    #10;

    data_in = 56;

    #10;

    data_in = 34;

    #10;

    data_in = 90;

    #10;

    data_in = 21;

    #10;

    data_in = 66;

    #10;

    data_in = 39;

    #10;

    data_in = 42;

    #10;

    data_in = 57;

    #10;

    data_in = 53;

    #10;

    data_in = 82;

    #10;

    data_in = 86;

    #10;

    data_in = 43;

    #10;

    data_in = 110;

    #10;

    data_in = 95;

    #10;

    data_in = 50;

    #10;

    data_in = 39;

    #10;

    data_in = 75;

    #10;

    data_in = 65;

    #10;

    data_in = 103;

    #10;

    data_in = 120;

    #10;

    data_in = 47;

    #10;

    data_in = 80;

    #10;

    data_in = 124;

    #10;

    data_in = 107;

    #10;

    data_in = 91;

    #10;

    data_in = 92;

    #10;

    data_in = 59;

    #10;

    data_in = 55;

    #10;

    data_in = 39;

    #10;

    data_in = 114;

    #10;

    data_in = 24;

    #10;

    data_in = 99;

    #10;

    data_in = 27;

    #10;

    data_in = 59;

    #10;

    data_in = 13;

    #10;

    data_in = 62;

    #10;

    data_in = 121;

    #10;

    data_in = 107;

    #10;

    data_in = 125;

    #10;

    data_in = 1;

    #10;

    data_in = 16;

    #10;

    data_in = 124;

    #10;

    data_in = 47;

    #10;

    data_in = 10;

    #10;

    data_in = 78;

    #10;

    data_in = 50;

    #10;

    data_in = 2;

    #10;

    data_in = 101;

    #10;

    data_in = 76;

    #10;

    data_in = 21;

    #10;

    data_in = 89;

    #10;

    data_in = 64;

    #10;

    data_in = 102;

    #10;

    data_in = 64;

    #10;

    data_in = 10;

    #10;

    data_in = 95;

    #10;

    data_in = 3;

    #10;

    data_in = 29;

    #10;

    data_in = 80;

    #10;

    data_in = 66;

    #10;

    data_in = 40;

    #10;

    data_in = 72;

    #10;

    data_in = 50;

    #10;

    data_in = 1;

    #10;

    data_in = 70;

    #10;

    data_in = 84;

    #10;

    data_in = 101;

    #10;

    data_in = 93;

    #10;

    data_in = 20;

    #10;

    data_in = 58;

    #10;

    data_in = 40;

    #10;

    data_in = 94;

    #10;

    data_in = 0;

    #10;

    data_in = 28;

    #10;

    data_in = 77;

    #10;

    data_in = 86;

    #10;

    data_in = 27;

    #10;

    data_in = 1;

    #10;

    data_in = 71;

    #10;

    data_in = 105;

    #10;

    data_in = 74;

    #10;

    data_in = 122;

    #10;

    data_in = 19;

    #10;

    data_in = 39;

    #10;

    data_in = 42;

    #10;

    data_in = 122;

    #10;

    data_in = 4;

    #10;

    data_in = 45;

    #10;

    data_in = 14;

    #10;

    data_in = 51;

    #10;

    data_in = 104;

    #10;

    data_in = 126;

    #10;

    data_in = 31;

    #10;

    data_in = 64;

    #10;

    data_in = 91;

    #10;

    data_in = 50;

    #10;

    data_in = 2;

    #10;

    data_in = 15;

    #10;

    data_in = 118;

    #10;

    data_in = 34;

    #10;

    data_in = 74;

    #10;

    data_in = 5;

    #10;

    data_in = 21;

    #10;

    data_in = 96;

    #10;

    data_in = 56;

    #10;

    data_in = 47;

    #10;

    data_in = 122;

    #10;

    data_in = 116;

    #10;

    data_in = 81;

    #10;

    data_in = 23;

    #10;

    data_in = 55;

    #10;

    data_in = 21;

    #10;

    data_in = 62;

    #10;

    data_in = 16;

    #10;

    data_in = 111;

    #10;

    data_in = 88;

    #10;

    data_in = 74;

    #10;

    data_in = 93;

    #10;

    data_in = 9;

    #10;

    data_in = 26;

    #10;

    data_in = 20;

    #10;

    data_in = 123;

    #10;

    data_in = 27;

    #10;

    data_in = 0;

    #10;

    data_in = 20;

    #10;

    data_in = 88;

    #10;

    data_in = 109;

    #10;

    data_in = 48;

    #10;

    data_in = 110;

    #10;

    data_in = 111;

    #10;

    data_in = 52;

    #10;

    data_in = 84;

    #10;

    data_in = 78;

    #10;

    data_in = 107;

    #10;

    data_in = 44;

    #10;

    data_in = 29;

    #10;

    data_in = 115;

    #10;

    data_in = 25;

    #10;

    data_in = 0;

    #10;

    data_in = 42;

    #10;

    data_in = 99;

    #10;

    data_in = 13;

    #10;

    data_in = 36;

    #10;

    data_in = 18;

    #10;

    data_in = 92;

    #10;

    data_in = 45;

    #10;

    data_in = 72;

    #10;

    data_in = 121;

    #10;

    data_in = 35;

    #10;

    data_in = 56;

    #10;

    data_in = 16;

    #10;

    data_in = 67;

    #10;

    data_in = 48;

    #10;

    data_in = 100;

    #10;

    data_in = 11;

    #10;

    data_in = 15;

    #10;

    data_in = 112;

    #10;

    data_in = 79;

    #10;

    data_in = 98;

    #10;

    data_in = 54;

    #10;

    data_in = 26;

    #10;

    data_in = 49;

    #10;

    data_in = 13;

    #10;

    data_in = 29;

    #10;

    data_in = 103;

    #10;

    data_in = 0;

    #10;

    data_in = 52;

    #10;

    data_in = 85;

    #10;

    data_in = 114;

    #10;

    data_in = 8;

    #10;

    data_in = 2;

    #10;

    data_in = 46;

    #10;

    data_in = 25;

    #10;

    data_in = 91;

    #10;

    data_in = 94;

    #10;

    data_in = 76;

    #10;

    data_in = 116;

    #10;

    data_in = 99;

    #10;

    data_in = 20;

    #10;

    data_in = 75;

    #10;

    data_in = 21;

    #10;

    data_in = 87;

    #10;

    data_in = 105;

    #10;

    data_in = 79;

    #10;

    data_in = 63;

    #10;

    data_in = 92;

    #10;

    data_in = 9;

    #10;

    data_in = 90;

    #10;

    data_in = 99;

    #10;

    data_in = 85;

    #10;

    data_in = 73;

    #10;

    data_in = 115;

    #10;

    data_in = 123;

    #10;

    data_in = 61;

    #10;

    data_in = 107;

    #10;

    data_in = 65;

    #10;

    data_in = 49;

    #10;

    data_in = 96;

    #10;

    data_in = 37;

    #10;

    data_in = 52;

    #10;

    data_in = 66;

    #10;

    data_in = 69;

    #10;

    data_in = 112;

    #10;

    data_in = 36;

    #10;

    data_in = 66;

    #10;

    data_in = 35;

    #10;

    data_in = 81;

    #10;

    data_in = 88;

    #10;

    data_in = 93;

    #10;

    data_in = 107;

    #10;

    data_in = 104;

    #10;

    data_in = 87;

    #10;

    data_in = 92;

    #10;

    data_in = 28;

    #10;

    data_in = 20;

    #10;

    data_in = 13;

    #10;

    data_in = 66;

    #10;

    data_in = 48;

    #10;

    data_in = 22;

    #10;

    data_in = 122;

    #10;

    data_in = 118;

    #10;

    data_in = 18;

    #10;

    data_in = 126;

    #10;

    data_in = 69;

    #10;

    data_in = 115;

    #10;

    data_in = 64;

    #10;

    data_in = 58;

    #10;

    data_in = 94;

    #10;

    data_in = 111;

    #10;

    data_in = 112;

    #10;

    data_in = 68;

    #10;

    data_in = 110;

    #10;

    data_in = 56;

    #10;

    data_in = 47;

    #10;

    data_in = 68;

    #10;

    data_in = 107;

    #10;

    data_in = 107;

    #10;

    data_in = 6;

    #10;

    data_in = 86;

    #10;

    data_in = 47;

    #10;

    data_in = 120;

    #10;

    data_in = 126;

    #10;

    data_in = 75;

    #10;

    data_in = 125;

    #10;

    data_in = 29;

    #10;

    data_in = 31;

    #10;

    data_in = 86;

    #10;

    data_in = 20;

    #10;

    data_in = 70;

    #10;

    data_in = 51;

    #10;

    data_in = 121;

    #10;

    data_in = 91;

    #10;

    data_in = 87;

    #10;

    data_in = 47;

    #10;

    data_in = 123;

    #10;

    data_in = 93;

    #10;

    data_in = 92;

    #10;

    data_in = 4;

    #10;

    data_in = 35;

    #10;

    data_in = 115;

    #10;

    data_in = 9;

    #10;

    data_in = 119;

    #10;

    data_in = 124;

    #10;

    data_in = 15;

    #10;

    data_in = 38;

    #10;

    data_in = 44;

    #10;

    data_in = 110;

    #10;

    data_in = 14;

    #10;

    data_in = 68;

    #10;

    data_in = 74;

    #10;

    data_in = 89;

    #10;

    data_in = 104;

    #10;

    data_in = 120;

    #10;

    data_in = 12;

    #10;

    data_in = 63;

    #10;

    data_in = 99;

    #10;

    data_in = 56;

    #10;

    data_in = 13;

    #10;

    data_in = 49;

    #10;

    data_in = 70;

    #10;

    data_in = 53;

    #10;

    data_in = 63;

    #10;

    data_in = 6;

    #10;

    data_in = 109;

    #10;

    data_in = 45;

    #10;

    data_in = 122;

    #10;

    data_in = 61;

    #10;

    data_in = 18;

    #10;

    data_in = 41;

    #10;

    data_in = 101;

    #10;

    data_in = 99;

    #10;

    data_in = 67;

    #10;

    data_in = 76;

    #10;

    data_in = 85;

    #10;

    data_in = 21;

    #10;

    data_in = 27;

    #10;

    data_in = 121;

    #10;

    data_in = 21;

    #10;

    data_in = 12;

    #10;

    data_in = 112;

    #10;

    data_in = 109;

    #10;

    data_in = 92;

    #10;

    data_in = 34;

    #10;

    data_in = 39;

    #10;

    data_in = 71;

    #10;

    data_in = 109;

    #10;

    data_in = 15;

    #10;

    data_in = 119;

    #10;

    data_in = 62;

    #10;

    data_in = 53;

    #10;

    data_in = 68;

    #10;

    data_in = 60;

    #10;

    data_in = 101;

    #10;

    data_in = 107;

    #10;

    data_in = 126;

    #10;

    data_in = 63;

    #10;

    data_in = 108;

    #10;

    data_in = 106;

    #10;

    data_in = 46;

    #10;

    data_in = 42;

    #10;

    data_in = 51;

    #10;

    data_in = 109;

    #10;

    data_in = 14;

    #10;

    data_in = 95;

    #10;

    data_in = 13;

    #10;

    data_in = 121;

    #10;

    data_in = 56;

    #10;

    data_in = 2;

    #10;

    data_in = 12;

    #10;

    data_in = 103;

    #10;

    data_in = 49;

    #10;

    data_in = 51;

    #10;

    data_in = 95;

    #10;

    data_in = 106;

    #10;

    data_in = 98;

    #10;

    data_in = 5;

    #10;

    data_in = 107;

    #10;

    data_in = 38;

    #10;

    data_in = 1;

    #10;

    data_in = 127;

    #10;

    data_in = 36;

    #10;

    data_in = 37;

    #10;

    data_in = 114;

    #10;

    data_in = 50;

    #10;

    data_in = 17;

    #10;

    data_in = 119;

    #10;

    data_in = 120;

    #10;

    data_in = 71;

    #10;

    data_in = 27;

    #10;

    data_in = 43;

    #10;

    data_in = 89;

    #10;

    data_in = 109;

    #10;

    data_in = 47;

    #10;

    data_in = 43;

    #10;

    data_in = 32;

    #10;

    data_in = 52;

    #10;

    data_in = 92;

    #10;

    data_in = 83;

    #10;

    data_in = 87;

    #10;

    data_in = 99;

    #10;

    data_in = 54;

    #10;

    data_in = 94;

    #10;

    data_in = 114;

    #10;

    data_in = 111;

    #10;

    data_in = 89;

    #10;

    data_in = 54;

    #10;

    data_in = 28;

    #10;

    data_in = 93;

    #10;

    data_in = 84;

    #10;

    data_in = 96;

    #10;

    data_in = 49;

    #10;

    data_in = 124;

    #10;

    data_in = 97;

    #10;

    data_in = 36;

    #10;

    data_in = 120;

    #10;

    data_in = 112;

    #10;

    data_in = 37;

    #10;

    data_in = 2;

    #10;

    data_in = 13;

    #10;

    data_in = 71;

    #10;

    data_in = 98;

    #10;

    data_in = 15;

    #10;

    data_in = 66;

    #10;

    data_in = 8;

    #10;

    data_in = 112;

    #10;

    data_in = 84;

    #10;

    data_in = 60;

    #10;

    data_in = 16;

    #10;

    data_in = 91;

    #10;

    data_in = 117;

    #10;

    data_in = 36;

    #10;

    data_in = 79;

    #10;

    data_in = 2;

    #10;

    data_in = 80;

    #10;

    data_in = 122;

    #10;

    data_in = 108;

    #10;

    data_in = 31;

    #10;

    data_in = 11;

    #10;

    data_in = 78;

    #10;

    data_in = 68;

    #10;

    data_in = 53;

    #10;

    data_in = 53;

    #10;

    data_in = 56;

    #10;

    data_in = 127;

    #10;

    data_in = 33;

    #10;

    data_in = 120;

    #10;

    data_in = 74;

    #10;

    data_in = 29;

    #10;

    data_in = 102;

    #10;

    data_in = 15;

    #10;

    data_in = 83;

    #10;

    data_in = 53;

    #10;

    data_in = 40;

    #10;

    data_in = 76;

    #10;

    data_in = 101;

    #10;

    data_in = 32;

    #10;

    data_in = 38;

    #10;

    data_in = 25;

    #10;

    data_in = 97;

    #10;

    data_in = 113;

    #10;

    data_in = 107;

    #10;

    data_in = 85;

    #10;

    data_in = 3;

    #10;

    data_in = 53;

    #10;

    data_in = 41;

    #10;

    data_in = 72;

    #10;

    data_in = 26;

    #10;

    data_in = 1;

    #10;

    data_in = 26;

    #10;

    data_in = 62;

    #10;

    data_in = 105;

    #10;

    data_in = 28;

    #10;

    data_in = 80;

    #10;

    data_in = 101;

    #10;

    data_in = 90;

    #10;

    data_in = 76;

    #10;

    data_in = 91;

    #10;

    data_in = 86;

    #10;

    data_in = 57;

    #10;

    data_in = 86;

    #10;

    data_in = 43;

    #10;

    data_in = 92;

    #10;

    data_in = 89;

    #10;

    data_in = 81;

    #10;

    data_in = 89;

    #10;

    data_in = 98;

    #10;

    data_in = 93;

    #10;

    data_in = 89;

    #10;

    data_in = 27;

    #10;

    data_in = 61;

    #10;

    data_in = 84;

    #10;

    data_in = 46;

    #10;

    data_in = 67;

    #10;

    data_in = 62;

    #10;

    data_in = 36;

    #10;

    data_in = 8;

    #10;

    data_in = 85;

    #10;

    data_in = 9;

    #10;

    data_in = 70;

    #10;

    data_in = 51;

    #10;

    data_in = 125;

    #10;

    data_in = 127;

    #10;

    data_in = 65;

    #10;

    data_in = 101;

    #10;

    data_in = 43;

    #10;

    data_in = 22;

    #10;

    data_in = 113;

    #10;

    data_in = 108;

    #10;

    data_in = 44;

    #10;

    data_in = 113;

    #10;

    data_in = 21;

    #10;

    data_in = 1;

    #10;

    data_in = 92;

    #10;

    data_in = 20;

    #10;

    data_in = 64;

    #10;

    data_in = 0;

    #10;

    data_in = 114;

    #10;

    data_in = 123;

    #10;

    data_in = 26;

    #10;

    data_in = 1;

    #10;

    data_in = 99;

    #10;

    data_in = 75;

    #10;

    data_in = 118;

    #10;

    data_in = 48;

    #10;

    data_in = 113;

    #10;

    data_in = 101;

    #10;

    data_in = 97;

    #10;

    data_in = 99;

    #10;

    data_in = 101;

    #10;

    data_in = 82;

    #10;

    data_in = 107;

    #10;

    data_in = 21;

    #10;

    data_in = 94;

    #10;

    data_in = 125;

    #10;

    data_in = 119;

    #10;

    data_in = 26;

    #10;

    data_in = 83;

    #10;

    data_in = 23;

    #10;

    data_in = 36;

    #10;

    data_in = 68;

    #10;

    data_in = 37;

    #10;

    data_in = 67;

    #10;

    data_in = 85;

    #10;

    data_in = 63;

    #10;

    data_in = 76;

    #10;

    data_in = 92;

    #10;

    data_in = 47;

    #10;

    data_in = 6;

    #10;

    data_in = 105;

    #10;

    data_in = 104;

    #10;

    data_in = 47;

    #10;

    data_in = 107;

    #10;

    data_in = 96;

    #10;

    data_in = 44;

    #10;

    data_in = 87;

    #10;

    data_in = 60;

    #10;

    data_in = 69;

    #10;

    data_in = 55;

    #10;

    data_in = 108;

    #10;

    data_in = 7;

    #10;

    data_in = 51;

    #10;

    data_in = 4;

    #10;

    data_in = 84;

    #10;

    data_in = 27;

    #10;

    data_in = 75;

    #10;

    data_in = 73;

    #10;

    data_in = 3;

    #10;

    data_in = 116;

    #10;

    data_in = 63;

    #10;

    data_in = 38;

    #10;

    data_in = 81;

    #10;

    data_in = 112;

    #10;

    data_in = 54;

    #10;

    data_in = 54;

    #10;

    data_in = 112;

    #10;

    data_in = 61;

    #10;

    data_in = 127;

    #10;

    data_in = 71;

    #10;

    data_in = 29;

    #10;

    data_in = 107;

    #10;

    data_in = 91;

    #10;

    data_in = 16;

    #10;

    data_in = 34;

    #10;

    data_in = 1;

    #10;

    data_in = 5;

    #10;

    data_in = 32;

    #10;

    data_in = 101;

    #10;

    data_in = 94;

    #10;

    data_in = 83;

    #10;

    data_in = 89;

    #10;

    data_in = 89;

    #10;

    data_in = 11;

    #10;

    data_in = 69;

    #10;

    data_in = 76;

    #10;

    data_in = 0;

    #10;

    data_in = 76;

    #10;

    data_in = 17;

    #10;

    data_in = 113;

    #10;

    data_in = 4;

    #10;

    data_in = 35;

    #10;

    data_in = 113;

    #10;

    data_in = 45;

    #10;

    data_in = 96;

    #10;

    data_in = 82;

    #10;

    data_in = 43;

    #10;

    data_in = 95;

    #10;

    data_in = 25;

    #10;

    data_in = 89;

    #10;

    data_in = 70;

    #10;

    data_in = 57;

    #10;

    data_in = 83;

    #10;

    data_in = 10;

    #10;

    data_in = 115;

    #10;

    data_in = 21;

    #10;

    data_in = 110;

    #10;

    data_in = 26;

    #10;

    data_in = 31;

    #10;

    data_in = 120;

    #10;

    data_in = 39;

    #10;

    data_in = 66;

    #10;

    data_in = 23;

    #10;

    data_in = 41;

    #10;

    data_in = 11;

    #10;

    data_in = 108;

    #10;

    data_in = 10;

    #10;

    data_in = 80;

    #10;

    data_in = 100;

    #10;

    data_in = 67;

    #10;

    data_in = 88;

    #10;

    data_in = 70;

    #10;

    data_in = 37;

    #10;

    data_in = 65;

    #10;

    data_in = 60;

    #10;

    data_in = 70;

    #10;

    data_in = 5;

    #10;

    data_in = 56;

    #10;

    data_in = 101;

    #10;

    data_in = 18;

    #10;

    data_in = 117;

    #10;

    data_in = 23;

    #10;

    data_in = 106;

    #10;

    data_in = 78;

    #10;

    data_in = 36;

    #10;

    data_in = 26;

    #10;

    data_in = 67;

    #10;

    data_in = 34;

    #10;

    data_in = 0;

    #10;

    data_in = 111;

    #10;

    data_in = 17;

    #10;

    data_in = 73;

    #10;

    data_in = 57;

    #10;

    data_in = 25;

    #10;

    data_in = 120;

    #10;

    data_in = 114;

    #10;

    data_in = 82;

    #10;

    data_in = 69;

    #10;

    data_in = 11;

    #10;

    data_in = 60;

    #10;

    data_in = 24;

    #10;

    data_in = 85;

    #10;

    data_in = 50;

    #10;

    data_in = 82;

    #10;

    data_in = 114;

    #10;

    data_in = 83;

    #10;

    data_in = 121;

    #10;

    data_in = 75;

    #10;

    data_in = 99;

    #10;

    data_in = 95;

    #10;

    data_in = 49;

    #10;

    data_in = 47;

    #10;

    data_in = 45;

    #10;

    data_in = 22;

    #10;

    data_in = 21;

    #10;

    data_in = 31;

    #10;

    data_in = 46;

    #10;

    data_in = 22;

    #10;

    data_in = 98;

    #10;

    data_in = 124;

    #10;

    data_in = 94;

    #10;

    data_in = 40;

    #10;

    data_in = 94;

    #10;

    data_in = 36;

    #10;

    data_in = 54;

    #10;

    data_in = 59;

    #10;

    data_in = 70;

    #10;

    data_in = 47;

    #10;

    data_in = 102;

    #10;

    data_in = 26;

    #10;

    data_in = 45;

    #10;

    data_in = 18;

    #10;

    data_in = 80;

    #10;

    data_in = 33;

    #10;

    data_in = 75;

    #10;

    data_in = 75;

    #10;

    data_in = 108;

    #10;

    data_in = 4;

    #10;

    data_in = 88;

    #10;

    data_in = 117;

    #10;

    data_in = 6;

    #10;

    data_in = 40;

    #10;

    data_in = 102;

    #10;

    data_in = 3;

    #10;

    data_in = 26;

    #10;

    data_in = 61;

    #10;

    data_in = 98;

    #10;

    data_in = 5;

    #10;

    data_in = 111;

    #10;

    data_in = 59;

    #10;

    data_in = 76;

    #10;

    data_in = 122;

    #10;

    data_in = 34;

    #10;

    data_in = 47;

    #10;

    data_in = 35;

    #10;

    data_in = 0;

    #10;

    data_in = 39;

    #10;

    data_in = 20;

    #10;

    data_in = 113;

    #10;

    data_in = 87;

    #10;

    data_in = 77;

    #10;

    data_in = 114;

    #10;

    data_in = 33;

    #10;

    data_in = 32;

    #10;

    data_in = 70;

    #10;

    data_in = 39;

    #10;

    data_in = 81;

    #10;

    data_in = 83;

    #10;

    data_in = 66;

    #10;

    data_in = 60;

    #10;

    data_in = 125;

    #10;

    data_in = 103;

    #10;

    data_in = 35;

    #10;

    data_in = 76;

    #10;

    data_in = 72;

    #10;

    data_in = 37;

    #10;

    data_in = 40;

    #10;

    data_in = 106;

    #10;

    data_in = 84;

    #10;

    data_in = 25;

    #10;

    data_in = 22;

    #10;

    data_in = 16;

    #10;

    data_in = 32;

    #10;

    data_in = 77;

    #10;

    data_in = 11;

    #10;

    data_in = 0;

    #10;

    data_in = 93;

    #10;

    data_in = 74;

    #10;

    data_in = 3;

    #10;

    data_in = 4;

    #10;

    data_in = 2;

    #10;

    data_in = 75;

    #10;

    data_in = 28;

    #10;

    data_in = 16;

    #10;

    data_in = 58;

    #10;

    data_in = 64;

    #10;

    data_in = 13;

    #10;

    data_in = 75;

    #10;

    data_in = 57;

    #10;

    data_in = 74;

    #10;

    data_in = 105;

    #10;

    data_in = 45;

    #10;

    data_in = 106;

    #10;

    data_in = 123;

    #10;

    data_in = 10;

    #10;

    data_in = 45;

    #10;

    data_in = 48;

    #10;

    data_in = 79;

    #10;

    data_in = 69;

    #10;

    data_in = 5;

    #10;

    data_in = 33;

    #10;

    data_in = 74;

    #10;

    data_in = 20;

    #10;

    data_in = 20;

    #10;

    data_in = 22;

    #10;

    data_in = 60;

    #10;

    data_in = 46;

    #10;

    data_in = 115;

    #10;

    data_in = 126;

    #10;

    data_in = 118;

    #10;

    data_in = 10;

    #10;

    data_in = 48;

    #10;

    data_in = 40;

    #10;

    data_in = 52;

    #10;

    data_in = 44;

    #10;

    data_in = 0;

    #10;

    data_in = 55;

    #10;

    data_in = 103;

    #10;

    data_in = 64;

    #10;

    data_in = 105;

    #10;

    data_in = 49;

    #10;

    data_in = 122;

    #10;

    data_in = 2;

    #10;

    data_in = 5;

    #10;

    data_in = 5;

    #10;

    data_in = 37;

    #10;

    data_in = 66;

    #10;

    data_in = 30;

    #10;

    data_in = 60;

    #10;

    data_in = 31;

    #10;

    data_in = 126;

    #10;

    data_in = 18;

    #10;

    data_in = 29;

    #10;

    data_in = 27;

    #10;

    data_in = 82;

    #10;

    data_in = 4;

    #10;

    data_in = 59;

    #10;

    data_in = 5;

    #10;

    data_in = 126;

    #10;

    data_in = 48;

    #10;

    data_in = 96;

    #10;

    data_in = 85;

    #10;

    data_in = 107;

    #10;

    data_in = 113;

    #10;

    data_in = 96;

    #10;

    data_in = 25;

    #10;

    data_in = 38;

    #10;

    data_in = 70;

    #10;

    data_in = 45;

    #10;

    data_in = 91;

    #10;

    data_in = 114;

    #10;

    data_in = 17;

    #10;

    data_in = 24;

    #10;

    data_in = 54;

    #10;

    data_in = 81;

    #10;

    data_in = 45;

    #10;

    data_in = 41;

    #10;

    data_in = 74;

    #10;

    data_in = 3;

    #10;

    data_in = 90;

    #10;

    data_in = 35;

    #10;

    data_in = 31;

    #10;

    data_in = 67;

    #10;

    data_in = 61;

    #10;

    data_in = 54;

    #10;

    data_in = 68;

    #10;

    data_in = 25;

    #10;

    data_in = 36;

    #10;

    data_in = 84;

    #10;

    data_in = 119;

    #10;

    data_in = 110;

    #10;

    data_in = 2;

    #10;

    data_in = 126;

    #10;

    data_in = 30;

    #10;

    data_in = 23;

    #10;

    data_in = 7;

    #10;

    data_in = 4;

    #10;

    data_in = 49;

    #10;

    data_in = 86;

    #10;

    data_in = 102;

    #10;

    data_in = 118;

    #10;

    data_in = 79;

    #10;

    data_in = 8;

    #10;

    data_in = 22;

    #10;

    data_in = 50;

    #10;

    data_in = 110;

    #10;

    data_in = 46;

    #10;

    data_in = 76;

    #10;

    data_in = 72;

    #10;

    data_in = 53;

    #10;

    data_in = 71;

    #10;

    data_in = 70;

    #10;

    data_in = 16;

    #10;

    data_in = 79;

    #10;

    data_in = 24;

    #10;

    data_in = 86;

    #10;

    data_in = 99;

    #10;

    data_in = 24;

    #10;

    data_in = 4;

    #10;

    data_in = 22;

    #10;

    data_in = 78;

    #10;

    data_in = 122;

    #10;

    data_in = 55;

    #10;

    data_in = 70;

    #10;

    data_in = 102;

    #10;

    data_in = 121;

    #10;

    data_in = 104;

    #10;

    data_in = 68;

    #10;

    data_in = 4;

    #10;

    data_in = 119;

    #10;

    data_in = 46;

    #10;

    data_in = 41;

    #10;

    data_in = 61;

    #10;

    data_in = 78;

    #10;

    data_in = 30;

    #10;

    data_in = 102;

    #10;

    data_in = 69;

    #10;

    data_in = 30;

    #10;

    data_in = 61;

    #10;

    data_in = 108;

    #10;

    data_in = 25;

    #10;

    data_in = 87;

    #10;

    data_in = 123;

    #10;

    data_in = 38;

    #10;

    data_in = 116;

    #10;

    data_in = 112;

    #10;

    data_in = 93;

    #10;

    data_in = 44;

    #10;

    data_in = 40;

    #10;

    data_in = 37;

    #10;

    data_in = 117;

    #10;

    data_in = 34;

    #10;

    data_in = 49;

    #10;

    data_in = 53;

    #10;

    data_in = 58;

    #10;

    data_in = 123;

    #10;

    data_in = 127;

    #10;

    data_in = 10;

    #10;

    data_in = 46;

    #10;

    data_in = 8;

    #10;

    data_in = 37;

    #10;

    data_in = 68;

    #10;

    data_in = 124;

    #10;

    data_in = 5;

    #10;

    data_in = 15;

    #10;

    data_in = 103;

    #10;

    data_in = 103;

    #10;

    data_in = 69;

    #10;

    data_in = 7;

    #10;

    data_in = 63;

    #10;

    data_in = 5;

    #10;

    data_in = 71;

    #10;

    data_in = 14;

    #10;

    data_in = 40;

    #10;

    data_in = 4;

    #10;

    data_in = 14;

    #10;

    data_in = 42;

    #10;

    data_in = 5;

    #10;

    data_in = 103;

    #10;

    data_in = 3;

    #10;

    data_in = 64;

    #10;

    data_in = 58;

    #10;

    data_in = 103;

    #10;

    data_in = 52;

    #10;

    data_in = 67;

    #10;

    data_in = 13;

    #10;

    data_in = 14;

    #10;

    data_in = 108;

    #10;

    data_in = 43;

    #10;

    data_in = 81;

    #10;

    data_in = 96;

    #10;

    data_in = 117;

    #10;

    data_in = 2;

    #10;

    data_in = 104;

    #10;

    data_in = 50;

    #10;

    data_in = 102;

    #10;

    data_in = 116;

    #10;

    data_in = 77;

    #10;

    data_in = 7;

    #10;

    data_in = 110;

    #10;

    data_in = 46;

    #10;

    data_in = 20;

    #10;

    data_in = 97;

    #10;

    data_in = 54;

    #10;

    data_in = 51;

    #10;

    data_in = 44;

    #10;

    data_in = 47;

    #10;

    data_in = 5;

    #10;

    data_in = 86;

    #10;

    data_in = 4;

    #10;

    data_in = 93;

    #10;

    data_in = 6;

    #10;

    data_in = 73;

    #10;

    data_in = 42;

    #10;

    data_in = 19;

    #10;

    data_in = 65;

    #10;

    data_in = 99;

    #10;

    data_in = 24;

    #10;

    data_in = 99;

    #10;

    data_in = 68;

    #10;

    data_in = 103;

    #10;

    data_in = 61;

    #10;

    data_in = 12;

    #10;

    data_in = 109;

    #10;

    data_in = 114;

    #10;

    data_in = 68;

    #10;

    data_in = 59;

    #10;

    data_in = 51;

    #10;

    data_in = 54;

    #10;

    data_in = 65;

    #10;

    data_in = 7;

    #10;

    data_in = 113;

    #10;

    data_in = 115;

    #10;

    data_in = 5;

    #10;

    data_in = 104;

    #10;

    data_in = 94;

    #10;

    data_in = 113;

    #10;

    data_in = 60;

    #10;

    data_in = 5;

    #10;

    data_in = 92;

    #10;

    data_in = 65;

    #10;

    data_in = 94;

    #10;

    data_in = 23;

    #10;

    data_in = 21;

    #10;

    data_in = 55;

    #10;

    data_in = 44;

    #10;

    data_in = 93;

    #10;

    data_in = 100;

    #10;

    data_in = 94;

    #10;

    data_in = 57;

    #10;

    data_in = 16;

    #10;

    data_in = 102;

    #10;

    data_in = 28;

    #10;

    data_in = 78;

    #10;

    data_in = 114;

    #10;

    data_in = 93;

    #10;

    data_in = 40;

    #10;

    data_in = 63;

    #10;

    data_in = 107;

    #10;

    data_in = 3;

    #10;

    data_in = 54;

    #10;

    data_in = 90;

    #10;

    data_in = 60;

    #10;

    data_in = 25;

    #10;

    data_in = 120;

    #10;

    data_in = 112;

    #10;

    data_in = 106;

    #10;

    data_in = 72;

    #10;

    data_in = 8;

    #10;

    data_in = 51;

    #10;

    data_in = 56;

    #10;

    data_in = 5;

    #10;

    data_in = 42;

    #10;

    data_in = 62;

    #10;

    data_in = 62;

    #10;

    data_in = 94;

    #10;

    data_in = 55;

    #10;

    data_in = 69;

    #10;

    data_in = 104;

    #10;

    data_in = 19;

    #10;

    data_in = 38;

    #10;

    data_in = 43;

    #10;

    data_in = 53;

    #10;

    data_in = 74;

    #10;

    data_in = 59;

    #10;

    data_in = 105;

    #10;

    data_in = 73;

    #10;

    data_in = 37;

    #10;

    data_in = 112;

    #10;

    data_in = 50;

    #10;

    data_in = 109;

    #10;

    data_in = 127;

    #10;

    data_in = 53;

    #10;

    data_in = 64;

    #10;

    data_in = 55;

    #10;

    data_in = 57;

    #10;

    data_in = 120;

    #10;

    data_in = 124;

    #10;

    data_in = 35;

    #10;

    data_in = 38;

    #10;

    data_in = 47;

    #10;

    data_in = 86;

    #10;

    data_in = 89;

    #10;

    data_in = 91;

    #10;

    data_in = 74;

    #10;

    data_in = 87;

    #10;

    data_in = 77;

    #10;

    data_in = 22;

    #10;

    data_in = 10;

    #10;

    data_in = 101;

    #10;

    data_in = 86;

    #10;

    data_in = 71;

    #10;

    data_in = 108;

    #10;

    data_in = 104;

    #10;

    data_in = 17;

    #10;

    data_in = 85;

    #10;

    data_in = 101;

    #10;

    data_in = 15;

    #10;

    data_in = 73;

    #10;

    data_in = 122;

    #10;

    data_in = 21;

    #10;

    data_in = 48;

    #10;

    data_in = 30;

    #10;

    data_in = 90;

    #10;

    data_in = 13;

    #10;

    data_in = 95;

    #10;

    data_in = 67;

    #10;

    data_in = 105;

    #10;

    data_in = 84;

    #10;

    data_in = 93;

    #10;

    data_in = 98;

    #10;

    data_in = 39;

    #10;

    data_in = 6;

    #10;

    data_in = 83;

    #10;

    data_in = 102;

    #10;

    data_in = 110;

    #10;

    data_in = 112;

    #10;

    data_in = 106;

    #10;

    data_in = 57;

    #10;

    data_in = 121;

    #10;

    data_in = 127;

    #10;

    data_in = 65;

    #10;

    data_in = 117;

    #10;

    data_in = 124;

    #10;

    data_in = 64;

    #10;

    data_in = 27;

    #10;

    data_in = 57;

    #10;

    data_in = 29;

    #10;

    data_in = 90;

    #10;

    data_in = 123;

    #10;

    data_in = 25;

    #10;

    data_in = 124;

    #10;

    data_in = 68;

    #10;

    data_in = 75;

    #10;

    data_in = 121;

    #10;

    data_in = 122;

    #10;

    data_in = 10;

    #10;

    data_in = 11;

    #10;

    data_in = 43;

    #10;

    data_in = 89;

    #10;

    data_in = 95;

    #10;

    data_in = 103;

    #10;

    data_in = 54;

    #10;

    data_in = 125;

    #10;

    data_in = 81;

    #10;

    data_in = 4;

    #10;

    data_in = 101;

    #10;

    data_in = 78;

    #10;

    data_in = 29;

    #10;

    data_in = 18;

    #10;

    data_in = 83;

    #10;

    data_in = 57;

    #10;

    data_in = 37;

    #10;

    data_in = 29;

    #10;

    data_in = 31;

    #10;

    data_in = 45;

    #10;

    data_in = 26;

    #10;

    data_in = 62;

    #10;

    data_in = 109;

    #10;

    data_in = 30;

    #10;

    data_in = 2;

    #10;

    data_in = 28;

    #10;

    data_in = 48;

    #10;

    data_in = 71;

    #10;

    data_in = 124;

    #10;

    data_in = 10;

    #10;

    data_in = 64;

    #10;

    data_in = 21;

    #10;

    data_in = 104;

    #10;

    data_in = 125;

    #10;

    data_in = 46;

    #10;

    data_in = 31;

    #10;

    data_in = 7;

    #10;

    data_in = 36;

    #10;

    data_in = 110;

    #10;

    data_in = 102;

    #10;

    data_in = 51;

    #10;

    data_in = 55;

    #10;

    data_in = 72;

    #10;

    data_in = 16;

    #10;

    data_in = 56;

    #10;

    data_in = 90;

    #10;

    data_in = 117;

    #10;

    data_in = 69;

    #10;

    data_in = 14;

    #10;

    data_in = 70;

    #10;

    data_in = 17;

    #10;

    data_in = 116;

    #10;

    data_in = 11;

    #10;

    data_in = 28;

    #10;

    data_in = 120;

    #10;

    data_in = 50;

    #10;

    data_in = 106;

    #10;

    data_in = 8;

    #10;

    data_in = 19;

    #10;

    data_in = 6;

    #10;

    data_in = 32;

    #10;

    data_in = 72;

    #10;

    data_in = 44;

    #10;

    data_in = 15;

    #10;

    data_in = 121;

    #10;

    data_in = 20;

    #10;

    data_in = 41;

    #10;

    data_in = 67;

    #10;

    data_in = 86;

    #10;

    data_in = 71;

    #10;

    data_in = 89;

    #10;

    data_in = 105;

    #10;

    data_in = 49;

    #10;

    data_in = 92;

    #10;

    data_in = 30;

    #10;

    data_in = 111;

    #10;

    data_in = 113;

    #10;

    data_in = 10;

    #10;

    data_in = 64;

    #10;

    data_in = 83;

    #10;

    data_in = 102;

    #10;

    data_in = 12;

    #10;

    data_in = 82;

    #10;

    data_in = 60;

    #10;

    data_in = 67;

    #10;

    data_in = 122;

    #10;

    data_in = 112;

    #10;

    data_in = 46;

    #10;

    data_in = 73;

    #10;

    data_in = 84;

    #10;

    data_in = 64;

    #10;

    data_in = 80;

    #10;

    data_in = 103;

    #10;

    data_in = 71;

    #10;

    data_in = 107;

    #10;

    data_in = 33;

    #10;

    data_in = 11;

    #10;

    data_in = 122;

    #10;

    data_in = 79;

    #10;

    data_in = 83;

    #10;

    data_in = 34;

    #10;

    data_in = 45;

    #10;

    data_in = 55;

    #10;

    data_in = 86;

    #10;

    data_in = 116;

    #10;

    data_in = 41;

    #10;

    data_in = 12;

    #10;

    data_in = 25;

    #10;

    data_in = 23;

    #10;

    data_in = 78;

    #10;

    data_in = 92;

    #10;

    data_in = 88;

    #10;

    data_in = 11;

    #10;

    data_in = 30;

    #10;

    data_in = 79;

    #10;

    data_in = 59;

    #10;

    data_in = 27;

    #10;

    data_in = 65;

    #10;

    data_in = 62;

    #10;

    data_in = 56;

    #10;

    data_in = 69;

    #10;

    data_in = 33;

    #10;

    data_in = 83;

    #10;

    data_in = 77;

    #10;

    data_in = 92;

    #10;

    data_in = 107;

    #10;

    data_in = 12;

    #10;

    data_in = 111;

    #10;

    data_in = 117;

    #10;

    data_in = 57;

    #10;

    data_in = 12;

    #10;

    data_in = 51;

    #10;

    data_in = 85;

    #10;

    data_in = 77;

    #10;

    data_in = 74;

    #10;

    data_in = 77;

    #10;

    data_in = 56;

    #10;

    data_in = 115;

    #10;

    data_in = 72;

    #10;

    data_in = 50;

    #10;

    data_in = 48;

    #10;

    data_in = 2;

    #10;

    data_in = 83;

    #10;

    data_in = 35;

    #10;

    data_in = 42;

    #10;

    data_in = 98;

    #10;

    data_in = 4;

    #10;

    data_in = 58;

    #10;

    data_in = 8;

    #10;

    data_in = 51;

    #10;

    data_in = 7;

    #10;

    data_in = 51;

    #10;

    data_in = 81;

    #10;

    data_in = 65;

    #10;

    data_in = 9;

    #10;

    data_in = 55;

    #10;

    data_in = 26;

    #10;

    data_in = 55;

    #10;

    data_in = 115;

    #10;

    data_in = 27;

    #10;

    data_in = 50;

    #10;

    data_in = 10;

    #10;

    data_in = 23;

    #10;

    data_in = 43;

    #10;

    data_in = 114;

    #10;

    data_in = 123;

    #10;

    data_in = 84;

    #10;

    data_in = 117;

    #10;

    data_in = 119;

    #10;

    data_in = 42;

    #10;

    data_in = 82;

    #10;

    data_in = 46;

    #10;

    data_in = 105;

    #10;

    data_in = 119;

    #10;

    data_in = 97;

    #10;

    data_in = 23;

    #10;

    data_in = 70;

    #10;

    data_in = 58;

    #10;

    data_in = 94;

    #10;

    data_in = 87;

    #10;

    data_in = 103;

    #10;

    data_in = 33;

    #10;

    data_in = 110;

    #10;

    data_in = 97;

    #10;

    data_in = 124;

    #10;

    data_in = 116;

    #10;

    data_in = 25;

    #10;

    data_in = 6;

    #10;

    data_in = 36;

    #10;

    data_in = 17;

    #10;

    data_in = 106;

    #10;

    data_in = 86;

    #10;

    data_in = 9;

    #10;

    data_in = 14;

    #10;

    data_in = 110;

    #10;

    data_in = 51;

    #10;

    data_in = 75;

    #10;

    data_in = 116;

    #10;

    data_in = 106;

    #10;

    data_in = 21;

    #10;

    data_in = 61;

    #10;

    data_in = 110;

    #10;

    data_in = 62;

    #10;

    data_in = 80;

    #10;

    data_in = 72;

    #10;

    data_in = 33;

    #10;

    data_in = 26;

    #10;

    data_in = 14;

    #10;

    data_in = 40;

    #10;

    data_in = 15;

    #10;

    data_in = 106;

    #10;

    data_in = 100;

    #10;

    data_in = 127;

    #10;

    data_in = 57;

    #10;

    data_in = 107;

    #10;

    data_in = 115;

    #10;

    data_in = 122;

    #10;

    data_in = 115;

    #10;

    data_in = 90;

    #10;

    data_in = 117;

    #10;

    data_in = 56;

    #10;

    data_in = 116;

    #10;

    data_in = 37;

    #10;

    data_in = 110;

    #10;

    data_in = 45;

    #10;

    data_in = 31;

    #10;

    data_in = 70;

    #10;

    data_in = 39;

    #10;

    data_in = 94;

    #10;

    data_in = 104;

    #10;

    data_in = 23;

    #10;

    data_in = 102;

    #10;

    data_in = 95;

    #10;

    data_in = 104;

    #10;

    data_in = 18;

    #10;

    data_in = 116;

    #10;

    data_in = 4;

    #10;

    data_in = 43;

    #10;

    data_in = 45;

    #10;

    data_in = 40;

    #10;

    data_in = 61;

    #10;

    data_in = 50;

    #10;

    data_in = 21;

    #10;

    data_in = 89;

    #10;

    data_in = 20;

    #10;

    data_in = 124;

    #10;

    data_in = 61;

    #10;

    data_in = 85;

    #10;

    data_in = 43;

    #10;

    data_in = 52;

    #10;

    data_in = 38;

    #10;

    data_in = 69;

    #10;

    data_in = 46;

    #10;

    data_in = 15;

    #10;

    data_in = 40;

    #10;

    data_in = 61;

    #10;

    data_in = 6;

    #10;

    data_in = 124;

    #10;

    data_in = 14;

    #10;

    data_in = 97;

    #10;

    data_in = 121;

    #10;

    data_in = 27;

    #10;

    data_in = 121;

    #10;

    data_in = 0;

    #10;

    data_in = 57;

    #10;

    data_in = 50;

    #10;

    data_in = 11;

    #10;

    data_in = 124;

    #10;

    data_in = 71;

    #10;

    data_in = 14;

    #10;

    data_in = 11;

    #10;

    data_in = 58;

    #10;

    data_in = 3;

    #10;

    data_in = 56;

    #10;

    data_in = 33;

    #10;

    data_in = 58;

    #10;

    data_in = 54;

    #10;

    data_in = 11;

    #10;

    data_in = 31;

    #10;

    data_in = 2;

    #10;

    data_in = 51;

    #10;

    data_in = 27;

    #10;

    data_in = 31;

    #10;

    data_in = 35;

    #10;

    data_in = 60;

    #10;

    data_in = 16;

    #10;

    data_in = 64;

    #10;

    data_in = 103;

    #10;

    data_in = 2;

    #10;

    data_in = 89;

    #10;

    data_in = 87;

    #10;

    data_in = 72;

    #10;

    data_in = 49;

    #10;

    data_in = 38;

    #10;

    data_in = 53;

    #10;

    data_in = 34;

    #10;

    data_in = 44;

    #10;

    data_in = 66;

    #10;

    data_in = 38;

    #10;

    data_in = 75;

    #10;

    data_in = 29;

    #10;

    data_in = 66;

    #10;

    data_in = 86;

    #10;

    data_in = 112;

    #10;

    data_in = 44;

    #10;

    data_in = 74;

    #10;

    data_in = 108;

    #10;

    data_in = 3;

    #10;

    data_in = 103;

    #10;

    data_in = 113;

    #10;

    data_in = 36;

    #10;

    data_in = 77;

    #10;

    data_in = 65;

    #10;

    data_in = 31;

    #10;

    data_in = 11;

    #10;

    data_in = 36;

    #10;

    data_in = 62;

    #10;

    data_in = 94;

    #10;

    data_in = 119;

    #10;

    data_in = 34;

    #10;

    data_in = 71;

    #10;

    data_in = 18;

    #10;

    data_in = 6;

    #10;

    data_in = 21;

    #10;

    data_in = 17;

    #10;

    data_in = 15;

    #10;

    data_in = 97;

    #10;

    data_in = 5;

    #10;

    data_in = 111;

    #10;

    data_in = 5;

    #10;

    data_in = 45;

    #10;

    data_in = 125;

    #10;

    data_in = 77;

    #10;

    data_in = 3;

    #10;

    data_in = 3;

    #10;

    data_in = 99;

    #10;

    data_in = 23;

    #10;

    data_in = 112;

    #10;

    data_in = 91;

    #10;

    data_in = 85;

    #10;

    data_in = 79;

    #10;

    data_in = 89;

    #10;

    data_in = 77;

    #10;

    data_in = 41;

    #10;

    data_in = 12;

    #10;

    data_in = 59;

    #10;

    data_in = 32;

    #10;

    data_in = 38;

    #10;

    data_in = 66;

    #10;

    data_in = 58;

    #10;

    data_in = 8;

    #10;

    data_in = 73;

    #10;

    data_in = 83;

    #10;

    data_in = 76;

    #10;

    data_in = 33;

    #10;

    data_in = 62;

    #10;

    data_in = 6;

    #10;

    data_in = 67;

    #10;

    data_in = 71;

    #10;

    data_in = 67;

    #10;

    data_in = 25;

    #10;

    data_in = 10;

    #10;

    data_in = 91;

    #10;

    data_in = 3;

    #10;

    data_in = 94;

    #10;

    data_in = 22;

    #10;

    data_in = 117;

    #10;

    data_in = 55;

    #10;

    data_in = 80;

    #10;

    data_in = 61;

    #10;

    data_in = 17;

    #10;

    data_in = 32;

    #10;

    data_in = 1;

    #10;

    data_in = 70;

    #10;

    data_in = 119;

    #10;

    data_in = 24;

    #10;

    data_in = 17;

    #10;

    data_in = 44;

    #10;

    data_in = 56;

    #10;

    data_in = 6;

    #10;

    data_in = 3;

    #10;

    data_in = 95;

    #10;

    data_in = 11;

    #10;

    data_in = 80;

    #10;

    data_in = 50;

    #10;

    data_in = 69;

    #10;

    data_in = 61;

    #10;

    data_in = 53;

    #10;

    data_in = 114;

    #10;

    data_in = 97;

    #10;

    data_in = 65;

    #10;

    data_in = 74;

    #10;

    data_in = 11;

    #10;

    data_in = 125;

    #10;

    data_in = 41;

    #10;

    data_in = 49;

    #10;

    data_in = 82;

    #10;

    data_in = 29;

    #10;

    data_in = 49;

    #10;

    data_in = 126;

    #10;

    data_in = 10;

    #10;

    data_in = 9;

    #10;

    data_in = 66;

    #10;

    data_in = 115;

    #10;

    data_in = 64;

    #10;

    data_in = 24;

    #10;

    data_in = 115;

    #10;

    data_in = 108;

    #10;

    data_in = 63;

    #10;

    data_in = 119;

    #10;

    data_in = 33;

    #10;

    data_in = 65;

    #10;

    data_in = 58;

    #10;

    data_in = 97;

    #10;

    data_in = 122;

    #10;

    data_in = 98;

    #10;

    data_in = 83;

    #10;

    data_in = 90;

    #10;

    data_in = 18;

    #10;

    data_in = 71;

    #10;

    data_in = 34;

    #10;

    data_in = 8;

    #10;

    data_in = 119;

    #10;

    data_in = 120;

    #10;

    data_in = 82;

    #10;

    data_in = 125;

    #10;

    data_in = 87;

    #10;

    data_in = 64;

    #10;

    data_in = 65;

    #10;

    data_in = 63;

    #10;

    data_in = 97;

    #10;

    data_in = 84;

    #10;

    data_in = 98;

    #10;

    data_in = 68;

    #10;

    data_in = 117;

    #10;

    data_in = 118;

    #10;

    data_in = 33;

    #10;

    data_in = 10;

    #10;

    data_in = 25;

    #10;

    data_in = 75;

    #10;

    data_in = 115;

    #10;

    data_in = 83;

    #10;

    data_in = 81;

    #10;

    data_in = 102;

    #10;

    data_in = 50;

    #10;

    data_in = 18;

    #10;

    data_in = 30;

    #10;

    data_in = 38;

    #10;

    data_in = 96;

    #10;

    data_in = 75;

    #10;

    data_in = 39;

    #10;

    data_in = 86;

    #10;

    data_in = 5;

    #10;

    data_in = 3;

    #10;

    data_in = 59;

    #10;

    data_in = 44;

    #10;

    data_in = 37;

    #10;

    data_in = 85;

    #10;

    data_in = 94;

    #10;

    data_in = 50;

    #10;

    data_in = 126;

    #10;

    data_in = 123;

    #10;

    data_in = 32;

    #10;

    data_in = 51;

    #10;

    data_in = 63;

    #10;

    data_in = 99;

    #10;

    data_in = 81;

    #10;

    data_in = 84;

    #10;

    data_in = 49;

    #10;

    data_in = 76;

    #10;

    data_in = 56;

    #10;

    data_in = 109;

    #10;

    data_in = 51;

    #10;

    data_in = 52;

    #10;

    data_in = 48;

    #10;

    data_in = 127;

    #10;

    data_in = 85;

    #10;

    data_in = 20;

    #10;

    data_in = 103;

    #10;

    data_in = 74;

    #10;

    data_in = 85;

    #10;

    data_in = 125;

    #10;

    data_in = 62;

    #10;

    data_in = 65;

    #10;

    data_in = 120;

    #10;

    data_in = 46;

    #10;

    data_in = 89;

    #10;

    data_in = 40;

    #10;

    data_in = 97;

    #10;

    data_in = 1;

    #10;

    data_in = 11;

    #10;

    data_in = 25;

    #10;

    data_in = 0;

    #10;

    data_in = 100;

    #10;

    data_in = 5;

    #10;

    data_in = 56;

    #10;

    data_in = 112;

    #10;

    data_in = 114;

    #10;

    data_in = 118;

    #10;

    data_in = 68;

    #10;

    data_in = 24;

    #10;

    data_in = 105;

    #10;

    data_in = 58;

    #10;

    data_in = 54;

    #10;

    data_in = 33;

    #10;

    data_in = 102;

    #10;

    data_in = 64;

    #10;

    data_in = 100;

    #10;

    data_in = 19;

    #10;

    data_in = 23;

    #10;

    data_in = 29;

    #10;

    data_in = 118;

    #10;

    data_in = 103;

    #10;

    data_in = 82;

    #10;

    data_in = 7;

    #10;

    data_in = 66;

    #10;

    data_in = 109;

    #10;

    data_in = 105;

    #10;

    data_in = 59;

    #10;

    data_in = 116;

    #10;

    data_in = 22;

    #10;

    data_in = 68;

    #10;

    data_in = 81;

    #10;

    data_in = 16;

    #10;

    data_in = 102;

    #10;

    data_in = 1;

    #10;

    data_in = 69;

    #10;

    data_in = 1;

    #10;

    data_in = 9;

    #10;

    data_in = 126;

    #10;

    data_in = 38;

    #10;

    data_in = 27;

    #10;

    data_in = 28;

    #10;

    data_in = 50;

    #10;

    data_in = 22;

    #10;

    data_in = 107;

    #10;

    data_in = 17;

    #10;

    data_in = 102;

    #10;

    data_in = 104;

    #10;

    data_in = 64;

    #10;

    data_in = 75;

    #10;

    data_in = 111;

    #10;

    data_in = 103;

    #10;

    data_in = 37;

    #10;

    data_in = 103;

    #10;

    data_in = 74;

    #10;

    data_in = 28;

    #10;

    data_in = 70;

    #10;

    data_in = 32;

    #10;

    data_in = 47;

    #10;

    data_in = 95;

    #10;

    data_in = 87;

    #10;

    data_in = 20;

    #10;

    data_in = 71;

    #10;

    data_in = 13;

    #10;

    data_in = 105;

    #10;

    data_in = 31;

    #10;

    data_in = 125;

    #10;

    data_in = 2;

    #10;

    data_in = 88;

    #10;

    data_in = 104;

    #10;

    data_in = 67;

    #10;

    data_in = 29;

    #10;

    data_in = 46;

    #10;

    data_in = 19;

    #10;

    data_in = 21;

    #10;

    data_in = 25;

    #10;

    data_in = 92;

    #10;

    data_in = 61;

    #10;

    data_in = 97;

    #10;

    data_in = 117;

    #10;

    data_in = 74;

    #10;

    data_in = 59;

    #10;

    data_in = 7;

    #10;

    data_in = 99;

    #10;

    data_in = 87;

    #10;

    data_in = 42;

    #10;

    data_in = 40;

    #10;

    data_in = 67;

    #10;

    data_in = 97;

    #10;

    data_in = 41;

    #10;

    data_in = 117;

    #10;

    data_in = 124;

    #10;

    data_in = 115;

    #10;

    data_in = 7;

    #10;

    data_in = 7;

    #10;

    data_in = 32;

    #10;

    data_in = 110;

    #10;

    data_in = 60;

    #10;

    data_in = 87;

    #10;

    data_in = 114;

    #10;

    data_in = 23;

    #10;

    data_in = 73;

    #10;

    data_in = 46;

    #10;

    data_in = 77;

    #10;

    data_in = 119;

    #10;

    data_in = 9;

    #10;

    data_in = 58;

    #10;

    data_in = 24;

    #10;

    data_in = 56;

    #10;

    data_in = 50;

    #10;

    data_in = 51;

    #10;

    data_in = 100;

    #10;

    data_in = 36;

    #10;

    data_in = 118;

    #10;

    data_in = 96;

    #10;

    data_in = 50;

    #10;

    data_in = 127;

    #10;

    data_in = 7;

    #10;

    data_in = 39;

    #10;

    data_in = 122;

    #10;

    data_in = 78;

    #10;

    data_in = 62;

    #10;

    data_in = 37;

    #10;

    data_in = 34;

    #10;

    data_in = 4;

    #10;

    data_in = 88;

    #10;

    data_in = 45;

    #10;

    data_in = 29;

    #10;

    data_in = 71;

    #10;

    data_in = 7;

    #10;

    data_in = 114;

    #10;

    data_in = 63;

    #10;

    data_in = 59;

    #10;

    data_in = 94;

    #10;

    data_in = 80;

    #10;

    data_in = 35;

    #10;

    data_in = 12;

    #10;

    data_in = 106;

    #10;

    data_in = 28;

    #10;

    data_in = 22;

    #10;

    data_in = 121;

    #10;

    data_in = 17;

    #10;

    data_in = 10;

    #10;

    data_in = 50;

    #10;

    data_in = 13;

    #10;

    data_in = 2;

    #10;

    data_in = 86;

    #10;

    data_in = 105;

    #10;

    data_in = 23;

    #10;

    data_in = 75;

    #10;

    data_in = 68;

    #10;

    data_in = 23;

    #10;

    data_in = 88;

    #10;

    data_in = 33;

    #10;

    data_in = 49;

    #10;

    data_in = 127;

    #10;

    data_in = 39;

    #10;

    data_in = 110;

    #10;

    data_in = 1;

    #10;

    data_in = 68;

    #10;

    data_in = 62;

    #10;

    data_in = 99;

    #10;

    data_in = 88;

    #10;

    data_in = 125;

    #10;

    data_in = 91;

    #10;

    data_in = 6;

    #10;

    data_in = 126;

    #10;

    data_in = 56;

    #10;

    data_in = 109;

    #10;

    data_in = 72;

    #10;

    data_in = 64;

    #10;

    data_in = 52;

    #10;

    data_in = 30;

    #10;

    data_in = 45;

    #10;

    data_in = 93;

    #10;

    data_in = 77;

    #10;

    data_in = 15;

    #10;

    data_in = 25;

    #10;

    data_in = 13;

    #10;

    data_in = 69;

    #10;

    data_in = 18;

    #10;

    data_in = 33;

    #10;

    data_in = 47;

    #10;

    data_in = 17;

    #10;

    data_in = 83;

    #10;

    data_in = 56;

    #10;

    data_in = 85;

    #10;

    data_in = 72;

    #10;

    data_in = 111;

    #10;

    data_in = 114;

    #10;

    data_in = 77;

    #10;

    data_in = 8;

    #10;

    data_in = 121;

    #10;

    data_in = 117;

    #10;

    data_in = 57;

    #10;

    data_in = 60;

    #10;

    data_in = 75;

    #10;

    data_in = 35;

    #10;

    data_in = 34;

    #10;

    data_in = 112;

    #10;

    data_in = 119;

    #10;

    data_in = 83;

    #10;

    data_in = 33;

    #10;

    data_in = 58;

    #10;

    data_in = 24;

    #10;

    data_in = 70;

    #10;

    data_in = 51;

    #10;

    data_in = 29;

    #10;

    data_in = 94;

    #10;

    data_in = 127;

    #10;

    data_in = 58;

    #10;

    data_in = 5;

    #10;

    data_in = 78;

    #10;

    data_in = 37;

    #10;

    data_in = 99;

    #10;

    data_in = 53;

    #10;

    data_in = 19;

    #10;

    data_in = 26;

    #10;

    data_in = 77;

    #10;

    data_in = 95;

    #10;

    data_in = 38;

    #10;

    data_in = 105;

    #10;

    data_in = 113;

    #10;

    data_in = 1;

    #10;

    data_in = 39;

    #10;

    data_in = 88;

    #10;

    data_in = 107;

    #10;

    data_in = 78;

    #10;

    data_in = 102;

    #10;

    data_in = 77;

    #10;

    data_in = 8;

    #10;

    data_in = 65;

    #10;

    data_in = 103;

    #10;

    data_in = 11;

    #10;

    data_in = 72;

    #10;

    data_in = 100;

    #10;

    data_in = 31;

    #10;

    data_in = 88;

    #10;

    data_in = 66;

    #10;

    data_in = 53;

    #10;

    data_in = 14;

    #10;

    data_in = 19;

    #10;

    data_in = 90;

    #10;

    data_in = 109;

    #10;

    data_in = 55;

    #10;

    data_in = 124;

    #10;

    data_in = 29;

    #10;

    data_in = 84;

    #10;

    data_in = 46;

    #10;

    data_in = 14;

    #10;

    data_in = 91;

    #10;

    data_in = 111;

    #10;

    data_in = 97;

    #10;

    data_in = 61;

    #10;

    data_in = 21;

    #10;

    data_in = 108;

    #10;

    data_in = 22;

    #10;

    data_in = 76;

    #10;

    data_in = 28;

    #10;

    data_in = 81;

    #10;

    data_in = 39;

    #10;

    data_in = 125;

    #10;

    data_in = 29;

    #10;

    data_in = 18;

    #10;

    data_in = 109;

    #10;

    data_in = 124;

    #10;

    data_in = 108;

    #10;

    data_in = 84;

    #10;

    data_in = 8;

    #10;

    data_in = 59;

    #10;

    data_in = 44;

    #10;

    data_in = 61;

    #10;

    data_in = 60;

    #10;

    data_in = 90;

    #10;

    data_in = 51;

    #10;

    data_in = 22;

    #10;

    data_in = 64;

    #10;

    data_in = 28;

    #10;

    data_in = 45;

    #10;

    data_in = 124;

    #10;

    data_in = 89;

    #10;

    data_in = 73;

    #10;

    data_in = 124;

    #10;

    data_in = 29;

    #10;

    data_in = 103;

    #10;

    data_in = 125;

    #10;

    data_in = 22;

    #10;

    data_in = 18;

    #10;

    data_in = 104;

    #10;

    data_in = 55;

    #10;

    data_in = 111;

    #10;

    data_in = 32;

    #10;

    data_in = 61;

    #10;

    data_in = 8;

    #10;

    data_in = 29;

    #10;

    data_in = 116;

    #10;

    data_in = 20;

    #10;

    data_in = 12;

    #10;

    data_in = 112;

    #10;

    data_in = 34;

    #10;

    data_in = 18;

    #10;

    data_in = 45;

    #10;

    data_in = 82;

    #10;

    data_in = 1;

    #10;

    data_in = 62;

    #10;

    data_in = 123;

    #10;

    data_in = 61;

    #10;

    data_in = 15;

    #10;

    data_in = 83;

    #10;

    data_in = 110;

    #10;

    data_in = 67;

    #10;

    data_in = 77;

    #10;

    data_in = 63;

    #10;

    data_in = 6;

    #10;

    data_in = 99;

    #10;

    data_in = 97;

    #10;

    data_in = 63;

    #10;

    data_in = 114;

    #10;

    data_in = 19;

    #10;

    data_in = 2;

    #10;

    data_in = 46;

    #10;

    data_in = 104;

    #10;

    data_in = 95;

    #10;

    data_in = 30;

    #10;

    data_in = 121;

    #10;

    data_in = 21;

    #10;

    data_in = 102;

    #10;

    data_in = 101;

    #10;

    data_in = 43;

    #10;

    data_in = 70;

    #10;

    data_in = 93;

    #10;

    data_in = 28;

    #10;

    data_in = 67;

    #10;

    data_in = 28;

    #10;

    data_in = 91;

    #10;

    data_in = 126;

    #10;

    data_in = 61;

    #10;

    data_in = 106;

    #10;

    data_in = 67;

    #10;

    data_in = 101;

    #10;

    data_in = 27;

    #10;

    data_in = 35;

    #10;

    data_in = 87;

    #10;

    data_in = 48;

    #10;

    data_in = 51;

    #10;

    data_in = 44;

    #10;

    data_in = 60;

    #10;

    data_in = 78;

    #10;

    data_in = 19;

    #10;

    data_in = 97;

    #10;

    data_in = 35;

    #10;

    data_in = 28;

    #10;

    data_in = 113;

    #10;

    data_in = 34;

    #10;

    data_in = 107;

    #10;

    data_in = 94;

    #10;

    data_in = 32;

    #10;

    data_in = 18;

    #10;

    data_in = 38;

    #10;

    data_in = 4;

    #10;

    data_in = 97;

    #10;

    data_in = 47;

    #10;

    data_in = 51;

    #10;

    data_in = 76;

    #10;

    data_in = 46;

    #10;

    data_in = 42;

    #10;

    data_in = 37;

    #10;

    data_in = 44;

    #10;

    data_in = 27;

    #10;

    data_in = 126;

    #10;

    data_in = 18;

    #10;

    data_in = 18;

    #10;

    data_in = 127;

    #10;

    data_in = 66;

    #10;

    data_in = 96;

    #10;

    data_in = 114;

    #10;

    data_in = 87;

    #10;

    data_in = 80;

    #10;

    data_in = 21;

    #10;

    data_in = 52;

    #10;

    data_in = 3;

    #10;

    data_in = 84;

    #10;

    data_in = 19;

    #10;

    data_in = 93;

    #10;

    data_in = 37;

    #10;

    data_in = 65;

    #10;

    data_in = 38;

    #10;

    data_in = 69;

    #10;

    data_in = 108;

    #10;

    data_in = 49;

    #10;

    data_in = 29;

    #10;

    data_in = 115;

    #10;

    data_in = 89;

    #10;

    data_in = 116;

    #10;

    data_in = 126;

    #10;

    data_in = 90;

    #10;

    data_in = 93;

    #10;

    data_in = 54;

    #10;

    data_in = 17;

    #10;

    data_in = 120;

    #10;

    data_in = 57;

    #10;

    data_in = 93;

    #10;

    data_in = 88;

    #10;

    data_in = 35;

    #10;

    data_in = 72;

    #10;

    data_in = 55;

    #10;

    data_in = 30;

    #10;

    data_in = 77;

    #10;

    data_in = 80;

    #10;

    data_in = 49;

    #10;

    data_in = 114;

    #10;

    data_in = 51;

    #10;

    data_in = 83;

    #10;

    data_in = 53;

    #10;

    data_in = 104;

    #10;

    data_in = 93;

    #10;

    data_in = 2;

    #10;

    data_in = 106;

    #10;

    data_in = 102;

    #10;

    data_in = 5;

    #10;

    data_in = 0;

    #10;

    data_in = 16;

    #10;

    data_in = 43;

    #10;

    data_in = 107;

    #10;

    data_in = 17;

    #10;

    data_in = 121;

    #10;

    data_in = 77;

    #10;

    data_in = 83;

    #10;

    data_in = 28;

    #10;

    data_in = 73;

    #10;

    data_in = 75;

    #10;

    data_in = 126;

    #10;

    data_in = 96;

    #10;

    data_in = 80;

    #10;

    data_in = 127;

    #10;

    data_in = 24;

    #10;

    data_in = 21;

    #10;

    data_in = 23;

    #10;

    data_in = 48;

    #10;

    data_in = 87;

    #10;

    data_in = 76;

    #10;

    data_in = 75;

    #10;

    data_in = 47;

    #10;

    data_in = 26;

    #10;

    data_in = 43;

    #10;

    data_in = 77;

    #10;

    data_in = 105;

    #10;

    data_in = 41;

    #10;

    data_in = 114;

    #10;

    data_in = 12;

    #10;

    data_in = 70;

    #10;

    data_in = 79;

    #10;

    data_in = 124;

    #10;

    data_in = 89;

    #10;

    data_in = 109;

    #10;

    data_in = 33;

    #10;

    data_in = 68;

    #10;

    data_in = 112;

    #10;

    data_in = 33;

    #10;

    data_in = 96;

    #10;

    data_in = 48;

    #10;

    data_in = 115;

    #10;

    data_in = 47;

    #10;

    data_in = 82;

    #10;

    data_in = 50;

    #10;

    data_in = 59;

    #10;

    data_in = 69;

    #10;

    data_in = 83;

    #10;

    data_in = 67;

    #10;

    data_in = 101;

    #10;

    data_in = 20;

    #10;

    data_in = 120;

    #10;

    data_in = 102;

    #10;

    data_in = 79;

    #10;

    data_in = 40;

    #10;

    data_in = 63;

    #10;

    data_in = 61;

    #10;

    data_in = 121;

    #10;

    data_in = 14;

    #10;

    data_in = 20;

    #10;

    data_in = 65;

    #10;

    data_in = 11;

    #10;

    data_in = 4;

    #10;

    data_in = 36;

    #10;

    data_in = 101;

    #10;

    data_in = 86;

    #10;

    data_in = 58;

    #10;

    data_in = 67;

    #10;

    data_in = 48;

    #10;

    data_in = 96;

    #10;

    data_in = 94;

    #10;

    data_in = 6;

    #10;

    data_in = 122;

    #10;

    data_in = 74;

    #10;

    data_in = 110;

    #10;

    data_in = 7;

    #10;

    data_in = 18;

    #10;

    data_in = 11;

    #10;

    data_in = 11;

    #10;

    data_in = 113;

    #10;

    data_in = 112;

    #10;

    data_in = 12;

    #10;

    data_in = 1;

    #10;

    data_in = 127;

    #10;

    data_in = 58;

    #10;

    data_in = 64;

    #10;

    data_in = 47;

    #10;

    data_in = 127;

    #10;

    data_in = 98;

    #10;

    data_in = 37;

    #10;

    data_in = 52;

    #10;

    data_in = 40;

    #10;

    data_in = 78;

    #10;

    data_in = 20;

    #10;

    data_in = 114;

    #10;

    data_in = 93;

    #10;

    data_in = 43;

    #10;

    data_in = 26;

    #10;

    data_in = 34;

    #10;

    #0;

    $finish;
  end
endmodule
