

# run .vcd
#rm -rf work && vlib work && vlog -sv ../ibex_pkg.sv ../ibex_multdiv_fast.sv tb_ibex_multdiv_fast_div.sv && vsim -c -assertdebug -voptargs=+acc work.tb_ibex_multdiv_fast_div -do "run -all; exit" && gtkwave verified_div.vcd sf1.gtkw

# run .vcd
#rm -rf work && vlib work && vlog -sv ../ibex_pkg.sv ../ibex_multdiv_fast.sv tb_ibex_multdiv_fast_mult.sv && vsim -c -assertdebug -voptargs=+acc work.tb_ibex_multdiv_fast_mult -do "run -all; exit" && gtkwave verified_mult.vcd sf2.gtkw


# don't run .vcd
rm -rf work && vlib work && vlog -sv ../ibex_pkg.sv ../ibex_multdiv_fast.sv tb_ibex_multdiv_fast_div.sv && vsim -c -assertdebug -voptargs=+acc work.tb_ibex_multdiv_fast_div -do "run -all; exit"

# don't run .vcd
rm -rf work && vlib work && vlog -sv ../ibex_pkg.sv ../ibex_multdiv_fast.sv tb_ibex_multdiv_fast_mult.sv && vsim -c -assertdebug -voptargs=+acc work.tb_ibex_multdiv_fast_mult -do "run -all; exit"
