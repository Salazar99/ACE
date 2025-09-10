#export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/6_testbench_generator/verified_accu.vcd --clk clk --vcd-ss test::dut --dump-to ./verified_accu_guarantees.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_accu_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_accu_guarantees.csv --conf accumulator_guarantees.xml