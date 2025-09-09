 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_comparator_3bit.v

# faulty option
vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_equal 0; force testbench::uut::A_greater 0; force testbench::uut::A_less 0; run -all; exit"

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave comparator_3bit_fault.vcd
