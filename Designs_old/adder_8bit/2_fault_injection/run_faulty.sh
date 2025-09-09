 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_adder_8bit.v

# faulty option
vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::cout 0; force testbench::uut::sum 0; run -all; exit"

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave adder_8bit_fault.vcd
