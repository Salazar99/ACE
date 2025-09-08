 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_adder_8bit.v

# faulty option
vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::sum 0; run -all; exit"
mv adder_8bit_fault.vcd adder_8bit_fault_sum0.vcd
vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::sum 1; run -all; exit"
mv adder_8bit_fault.vcd adder_8bit_fault_sum1.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::cout 0; run -all; exit"
mv adder_8bit_fault.vcd adder_8bit_fault_cout0.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::cout 1; run -all; exit"
mv adder_8bit_fault.vcd adder_8bit_fault_cout1.vcd

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave adder_8bit_fault.vcd
