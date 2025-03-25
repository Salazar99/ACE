
//including interface and testcase files
`include "mutexintf.sv"
`include "test.sv"

module tbench_top;

  logic clk;
  
  
  //clock generation
  always #5 clk = ~clk;
  
  //reset Generation
  initial begin
    clk = 0;
  end
  
  
  //creating an instance of interface to connect DUT and testcase
  mutex_intf intf(clk);
  
  //testcase instance, interface handle is passed to test as an argument
  test t1(intf);
  
  //DUT instance, interface signals are connected to the DUT ports
  mutex DUT (intf.dut);
  
  //enabling the wave dump
  initial begin 
    $dumpfile("fault_pos1k.vcd");
    $dumpvars(0, tbench_top, intf);
  end
endmodule
