export ACEROOT="/home/fabio/Desktop/ACE"

# A < B

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/comparator_3bit/6_testbench_generator/comparator_3bit_A_lt_B.vcd --clk clk --vcd-ss test::dut --dump-to ./comparator_3bit_guarantees_A_lt_B.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./comparator_3bit_guarantees_A_lt_B.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./comparator_3bit_guarantees_A_lt_B.csv --conf comparator_3bit_guarantees.xml

# A == B

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/comparator_3bit/6_testbench_generator/comparator_3bit_A_eq_B.vcd --clk clk --vcd-ss test::dut --dump-to ./comparator_3bit_guarantees_A_eq_B.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./comparator_3bit_guarantees_A_eq_B.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./comparator_3bit_guarantees_A_eq_B.csv --conf comparator_3bit_guarantees.xml

# A > B

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/comparator_3bit/6_testbench_generator/comparator_3bit_A_gt_B.vcd --clk clk --vcd-ss test::dut --dump-to ./comparator_3bit_guarantees_A_gt_B.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./comparator_3bit_guarantees_A_gt_B.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./comparator_3bit_guarantees_A_gt_B.csv --conf comparator_3bit_guarantees.xml