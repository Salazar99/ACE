#export ACEROOT="/home/fabio/Desktop/ACE"

# DIV
# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_multdiv_fast/6_testbench_generator/verified_div.vcd --clk clk_i --vcd-ss tb_ibex_multdiv_fast_div::dut --dump-to ./verified_div.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_div.csv

# Manual generation of sqrt_calculator_guarantee.xml
#harm --csv ./verified_div.csv --conf ibex_multdiv_fast_guarantees.xml

# MUL
# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_multdiv_fast/6_testbench_generator/verified_mult.vcd --clk clk_i --vcd-ss tb_ibex_multdiv_fast_mult::dut --dump-to ./verified_mult.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_mult.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_mult.csv --conf ibex_multdiv_fast_guarantees.xml