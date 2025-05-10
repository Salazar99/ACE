interface climate_intf(input clk);
  
  //declaring the signals
  logic rst_n;           // Asynchronous reset (active low)
  logic signed [31:0] temperature; // signed because also negative
  logic [31:0] pressure;  // Atmospheric pressure value (0-2047)
  logic snow;
  logic sunny;
  logic storm;
  logic error;
  logic done;
  
  modport dut (input clk, rst_n, temperature, pressure, output snow, sunny, storm, error, done);
endinterface
