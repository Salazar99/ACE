rm -rf work && vlib work && vlog -sv tb/testbench.sv RTL/VendingMachine.sv && vsim -c -assertdebug -voptargs=+acc work.tbench_top -do "run -all; exit" && gtkwave VendingMachine.vcd  

// -cuname assertions -mfcu assertions/as.sv