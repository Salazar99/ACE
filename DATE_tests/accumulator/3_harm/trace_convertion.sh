
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_data_out0.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_data_out0.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_data_out1.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_data_out1.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_valid_out0.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_valid_out0.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_valid_out1.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_valid_out1.csv
