export ACEROOT="/home/fabio/Desktop/ACE"



# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/multi_16bit/6_testbench_generator/verified_multi_16bit.vcd" --clk clk --vcd-ss test::dut --dump-to "./verified_multi_16bit_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_multi_16bit_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_multi_16bit_guarantees.csv --conf multi_16bit_guarantees.xml

