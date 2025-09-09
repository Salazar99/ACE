
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/tb_generator/tb_generator.py" \
    --input ../4_filtering/filtered_valid_in.csv \
    --design "../old/verified_accu.v" \
    --input-signals "data_in" \
    --group-delay 10 \
    --extra-delay 0 \
    --initial-signals "valid_in=0#0, rst_n=0#0, data_in=0#0, valid_in=1#20, rst_n=1#0"

# run .vcd
#rm -rf work && vlib work && vlog -sv testbench.sv ../old/verified_accu.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave verified_accu.vcd

# don't run .vcd
rm -rf work && vlib work && vlog -sv testbench.sv ../old/verified_accu.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"