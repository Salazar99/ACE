interface sqrt_intf(input clk);
  
  //declaring the signals
  logic rst;
  logic start;
  logic signed [32:0] in;
  logic [32:0] out;
  logic error;
  logic done;
  
  modport dut (input clk, rst, start, in, output out, error, done);
endinterface
