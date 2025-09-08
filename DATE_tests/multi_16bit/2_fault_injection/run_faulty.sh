 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../testbench.v ../verified_multi_16bit.v

# faulty option
vsim -voptargs=+acc -c work.tb_multi_16bit -do "force tb_multi_16bit::uut::yout 0; force tb_multi_16bit::uut::done 0; run -all; exit"

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave verified_multi_16bit.vcd
