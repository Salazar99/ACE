interface mutex_intf(input clk);
  
  //declaring the signals
  logic [15:0] in;
  logic positive_flag;
  logic negative_flag;
  
  modport dut (input clk, in, output positive_flag,negative_flag);
endinterface
