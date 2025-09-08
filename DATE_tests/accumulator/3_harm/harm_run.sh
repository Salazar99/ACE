
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_data_out0.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_data_out0.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_data_out1.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_data_out1.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_valid_out0.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_valid_out0.csv
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu_fault_valid_out1.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu_fault_valid_out1.csv


# Manual generation of camellia.xml
harm --csv ./accu_DU.csv --conf accu_DU.xml