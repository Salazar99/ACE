 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../tb/testbench.sv ../rtl/verified_accu.sv

 faulty option
vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::data_out 0; run -all; exit"
mv accu.vcd accu_fault_data_out0.vcd

vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::data_out 1; run -all; exit"
mv accu.vcd accu_fault_data_out1.vcd

vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::valid_out 0; run -all; exit"
mv accu.vcd accu_fault_valid_out0.vcd

vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::valid_out 1; run -all; exit"
mv accu.vcd accu_fault_valid_out1.vcd

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave accu.vcd
