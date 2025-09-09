interface climate_intf(input clk);
  
  //declaring the signals
  logic rst_n;           // Asynchronous reset (active low)
  logic signed [31:0] temperature; // signed because also negative
  logic [31:0] pressure;  // Atmospheric pressure value (0-2047)
  logic [31:0] climate_condition; // Predicted climate condition
  logic done;
  
  modport dut (input clk, rst_n, temperature, pressure, output climate_condition, done);
endinterface
