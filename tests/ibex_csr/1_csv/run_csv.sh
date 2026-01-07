#export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/tests/ibex_csr/ibex_csr.vcd --clk clk_i --vcd-ss tb_ibex_csr::dut --dump-to ./ibex_csr.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./ibex_csr.csv

