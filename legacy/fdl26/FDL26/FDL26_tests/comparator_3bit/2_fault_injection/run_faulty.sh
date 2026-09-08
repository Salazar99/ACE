 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_comparator_3bit.v

# faulty option
vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_equal 0; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_equal0.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_equal 1; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_equal1.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_greater 0; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_greater0.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_greater 1; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_greater1.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_less 0; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_less0.vcd

vsim -voptargs=+acc -c work.testbench -do "force testbench::uut::A_less 1; run -all; exit"
mv comparator_3bit_fault.vcd comparator_A_less1.vcd
# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave comparator_3bit_fault.vcd
