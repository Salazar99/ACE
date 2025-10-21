interface vendingmachine_intf(input clk,rst);
  
  //declaring the signals
  logic [3:0] coin_in;
  logic [1:0] button_in;
  logic [2:0]change_out;
  logic [1:0]beverage_out;
  logic [31:0] credit_out;
  logic disp_out;
  
  modport dut (input clk,rst, coin_in, button_in, output change_out, beverage_out, credit_out, disp_out);
endinterface
