export ACEROOT="/home/fabio/Desktop/ACE"

# IN < 0

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/sqrt/6_testbench_generator/sqrt_calculator_in_lt_0.vcd --clk clk --vcd-ss test::dut --dump-to ./sqrt_calculator_guarantees_in_lt_0.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./sqrt_calculator_guarantees_in_lt_0.csv

# Automatic generation of autogen.xml
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --generate-config
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./sqrt_calculator_guarantees_in_lt_0.csv --conf sqrt_calculator_guarantee.xml

# IN == 0

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/sqrt/6_testbench_generator/sqrt_calculator_in_eq_0.vcd --clk clk --vcd-ss test::dut --dump-to ./sqrt_calculator_guarantees_in_eq_0.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./sqrt_calculator_guarantees_in_eq_0.csv

# Automatic generation of autogen.xml
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --generate-config
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./sqrt_calculator_guarantees_in_eq_0.csv --conf sqrt_calculator_guarantee.xml

# IN > 0

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/sqrt/6_testbench_generator/sqrt_calculator_in_gt_0.vcd --clk clk --vcd-ss test::dut --dump-to ./sqrt_calculator_guarantees_in_gt_0.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./sqrt_calculator_guarantees_in_gt_0.csv

# Automatic generation of autogen.xml
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --generate-config
#harm --csv ./sqrt_calculator_guarantee.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./sqrt_calculator_guarantees_in_gt_0.csv --conf sqrt_calculator_guarantee.xml