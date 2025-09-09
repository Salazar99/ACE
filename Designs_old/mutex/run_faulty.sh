#rm -rf work && vlib work && vlog -sv tb/tb_old/tb.v rtl/mutex.sv && vsim -c -assertdebug -voptargs=+acc work.mutex_tb -do "run -all; exit"
rm -rf work && vlib work && vlog -sv tb/tb_old/tb_fn.v rtl/mutex_f_negflag.v && vsim -c -assertdebug -voptargs=+acc work.mutex_tb -do "run -all; exit"
rm -rf work && vlib work && vlog -sv tb/tb_old/tb_fp.v rtl/mutex_f_posflag.v && vsim -c -assertdebug -voptargs=+acc work.mutex_tb -do "run -all; exit"
#gtkwave golden.vcd && 
gtkwave fault_pos.vcd && 
gtkwave fault_neg.vcd