interface accu_intf(input clk);
  
  //declaring the signals
  logic         rst_n;
  logic [7:0]   data_in;
  logic         valid_in;
 
  logic         valid_out;
  logic [9:0]   data_out;
  
  modport dut (input clk, rst_n, data_in, valid_in, output valid_out, data_out);
endinterface
