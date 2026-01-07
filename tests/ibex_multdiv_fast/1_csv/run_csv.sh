export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/tests/ibex_multdiv_fast/ibex_multdiv_fast.vcd --clk clk_i --vcd-ss tb_ibex_multdiv_fast::dut --dump-to ./ibex_multdiv_fast.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./ibex_multdiv_fast.csv

