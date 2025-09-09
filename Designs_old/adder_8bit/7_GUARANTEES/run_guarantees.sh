export ACEROOT="/home/fabio/Desktop/ACE"

# INPUT == 256

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/adder_8bit/6_testbench_generator/verified_adder_8bit_eq_256.vcd" --clk clk --vcd-ss test::dut --dump-to "./verified_adder_8bit_eq_256_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_adder_8bit_eq_256_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_adder_8bit_eq_256_guarantees.csv --conf adder_8bit_guarantees.xml

# INPUT == 0

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/adder_8bit/6_testbench_generator/verified_adder_8bit_eq_0.vcd" --clk clk --vcd-ss test::dut --dump-to "./verified_adder_8bit_eq_0_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_adder_8bit_eq_0_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_adder_8bit_eq_0_guarantees.csv --conf adder_8bit_guarantees.xml

# INPUT > 255

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/adder_8bit/6_testbench_generator/verified_adder_8bit_gt_255.vcd" --clk clk --vcd-ss test::dut --dump-to "./verified_adder_8bit_gt_255_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_adder_8bit_gt_255_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_adder_8bit_gt_255_guarantees.csv --conf adder_8bit_guarantees.xml

# INPUT <= 255

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd "$ACEROOT/Designs/adder_8bit/6_testbench_generator/verified_adder_8bit_le_255.vcd" --clk clk --vcd-ss test::dut --dump-to "./verified_adder_8bit_le_255_guarantees.csv"

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./verified_adder_8bit_le_255_guarantees.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./verified_adder_8bit_le_255_guarantees.csv --conf adder_8bit_guarantees.xml