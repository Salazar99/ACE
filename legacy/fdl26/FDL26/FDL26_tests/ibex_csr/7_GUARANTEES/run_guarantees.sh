#export ACEROOT="/home/fabio/Desktop/ACE"



# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/ibex_csr/6_testbench_generator/ibex_csr.vcd" --clk clk_i --vcd-ss test::dut --dump-to "./verified_ibex_csr_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_ibex_csr_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_ibex_csr_guarantees.csv --conf ibex_csr_guarantees.xml

