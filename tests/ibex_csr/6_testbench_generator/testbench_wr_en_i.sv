`timescale 1ns/1ns

module test;

  localparam int unsigned WIDTH = 32;
  localparam bit SHADOW_COPY    = 1'b1;
  localparam logic [WIDTH-1:0] RESET_VALUE = 32'h0;
  localparam int NUM_TESTS = 100;



  logic clk;

  logic clk_i;

  logic rst_ni;

  logic [WIDTH-1:0] wr_data_i;

  logic wr_en_i;

  logic [WIDTH-1:0] rd_data_o;

  logic rd_error_o;


  // Device Under Test (DUT)

  ibex_csr #(
    .Width(WIDTH),
    .ShadowCopy(SHADOW_COPY),
    .ResetValue(RESET_VALUE)
  ) dut(
    .clk_i(clk),
    .rst_ni(rst_ni),
    .wr_data_i(wr_data_i),
    .wr_en_i(wr_en_i),
    .rd_data_o(rd_data_o),
    .rd_error_o(rd_error_o)
  );


  always #5 clk = ~clk;


  initial begin

    $dumpfile("ibex_csr.vcd");

    $dumpvars(0, test);

    clk = 0;

    rst_ni = 0;

    wr_data_i = 0;

    wr_en_i = 0;

    #0 wr_data_i = 0;

    #10 rst_ni = 1;

    #10;

    rst_ni = 1;

    wr_data_i = 16843009;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 33686018;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 50529027;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 67372036;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 84215045;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 101058054;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 117901063;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 134744072;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 151587081;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 168430090;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 185273099;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 202116108;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 218959117;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 235802126;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 252645135;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 269488144;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 286331153;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 303174162;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 320017171;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 336860180;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 353703189;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 370546198;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 387389207;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 404232216;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 421075225;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 437918234;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 454761243;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 471604252;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 488447261;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 505290270;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 522133279;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 538976288;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 555819297;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 572662306;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 589505315;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 606348324;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 623191333;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 640034342;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 656877351;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 673720360;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 690563369;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 707406378;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 724249387;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 741092396;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 757935405;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 774778414;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 791621423;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 808464432;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 825307441;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 842150450;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 858993459;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 875836468;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 892679477;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 909522486;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 926365495;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 943208504;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 960051513;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 976894522;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 993737531;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1010580540;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1027423549;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1044266558;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1061109567;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1077952576;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1094795585;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1111638594;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1128481603;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1145324612;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1162167621;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1179010630;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1195853639;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1212696648;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1229539657;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1246382666;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1263225675;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1280068684;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1296911693;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1313754702;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1330597711;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1347440720;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1364283729;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1381126738;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1397969747;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1414812756;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1431655765;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1448498774;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1465341783;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1482184792;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1499027801;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1515870810;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1532713819;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1549556828;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1566399837;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1583242846;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1600085855;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1616928864;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1633771873;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1650614882;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    rst_ni = 1;

    wr_data_i = 1667457891;

    wr_en_i = 1;

    #10 wr_en_i = 0;

    #0 wr_data_i = 0;

    #5 rst_ni = 0;

    #5;

    #50;

    $finish;
  end
endmodule
