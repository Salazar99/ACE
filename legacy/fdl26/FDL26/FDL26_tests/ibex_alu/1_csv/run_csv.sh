export ACEROOT="~/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/ibex_alu.vcd --clk clk --vcd-ss ibex_alu_tb --dump-to ./ibex_alu.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./ibex_alu.csv

