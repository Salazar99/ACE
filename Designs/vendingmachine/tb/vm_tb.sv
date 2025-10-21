`timescale 1ns/1ns

module test;
  logic  clk, start, rst;
  logic  [3:0] coin;
  logic [1:0] button;

  // Instantiate device under test
  VendingMachine vm(.clk(clk),
  	   .rst(rst),
          .start(start),
          .coin_in(coin),
          .button_in(button));
  always
    begin
      #5 clk =~clk;
    end

  initial begin
    $dumpfile("vm.vcd");
    $dumpvars(0,test);
    rst = 0;
    clk = 0;
    coin = 0;
    start = 0;
    button = 0;
    #5;
    rst = 1;
    coin = 0;
    start = 0;
    button = 0; 
    #10;
    rst = 0;
    coin = 0;
    start = 1;
    button = 0;
    #10;
    coin = 3;
    start = 0;
    button = 0;
    #10;
   
    coin = 0;
    start = 0;
    button = 1;
    #20;
   
    coin = 0;
    start = 0;
    button = 0;
    $finish;
  end
endmodule

