rm -rf work && vlib work && vlog -sv tb/testbench.sv rtl/mutex.sv && vsim -c -assertdebug -voptargs=+acc work.tbench_top -do "force tbench_top.intf.positive_flag 0;run -all; exit" && gtkwave VendingMachine.vcd  
#force tbench_top.intf.change_out 1;

