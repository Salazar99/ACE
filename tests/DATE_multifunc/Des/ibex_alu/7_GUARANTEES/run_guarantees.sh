export ACEROOT="/home/fabio/Desktop/ACE"

# OPERATOR == SUM

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/6_testbench_generator/ibex_alu_0.vcd --clk clk --vcd-ss test --dump-to ./ibex_alu_0.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./ibex_alu_0.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./ibex_alu_0.csv --conf ibex_alu_guarantees.xml

# OPERATOR == SUB

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/6_testbench_generator/ibex_alu_1.vcd --clk clk --vcd-ss test --dump-to ./ibex_alu_1.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./ibex_alu_1.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./ibex_alu_1.csv --conf ibex_alu_guarantees.xml

# OPERATOR == OR

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/6_testbench_generator/ibex_alu_3.vcd --clk clk --vcd-ss test --dump-to ./ibex_alu_3.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./ibex_alu_3.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./ibex_alu_3.csv --conf ibex_alu_guarantees.xml

# OPERATOR == AND

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/6_testbench_generator/ibex_alu_4.vcd --clk clk --vcd-ss test --dump-to ./ibex_alu_4.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./ibex_alu_4.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./ibex_alu_4.csv --conf ibex_alu_guarantees.xml

# OPERATOR == EQ

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/6_testbench_generator/ibex_alu_29.vcd --clk clk --vcd-ss test --dump-to ./ibex_alu_29.csv

# convert all the big values (signed value) in the correct negative value
python3 ../1_csv/convert_csv.py ./ibex_alu_29.csv

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ./ibex_alu_29.csv --conf ibex_alu_guarantees.xml