 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../testbench.v ../verified_multi_16bit.v

# faulty option
vsim -voptargs=+acc -c work.tb_multi_16bit -do "force tb_multi_16bit::uut::yout 0; run -all; exit"
mv verified_multi_16bit.vcd verified_multi_16bit_faulty_yout_0.vcd
vsim -voptargs=+acc -c work.tb_multi_16bit -do "force tb_multi_16bit::uut::yout 1; run -all; exit"
mv verified_multi_16bit.vcd verified_multi_16bit_faulty_yout_1.vcd
vsim -voptargs=+acc -c work.tb_multi_16bit -do "force tb_multi_16bit::uut::done 0; run -all; exit"
mv verified_multi_16bit.vcd verified_multi_16bit_faulty_done_0.vcd
vsim -voptargs=+acc -c work.tb_multi_16bit -do "force tb_multi_16bit::uut::done 1; run -all; exit"
mv verified_multi_16bit.vcd verified_multi_16bit_faulty_done_1.vcd
# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave verified_multi_16bit.vcd
