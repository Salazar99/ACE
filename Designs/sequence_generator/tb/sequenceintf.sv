interface sequence_intf(input clk);
  
  logic rst_n;              
  logic enable;            
  logic signed [31:0] start_value; 
  logic signed [31:0] step;        
  logic signed [31:0] range_min;   
  logic signed [31:0] range_max;  
  logic signed [31:0] sequence_value; 
  logic done;                  
  
  modport dut (input clk, rst_n, enable, start_value, step, range_min, range_max, output sequence_value, done);
endinterface
