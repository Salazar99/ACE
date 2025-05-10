#harm --csv ./fault_pos.csv --conf mutex_cfg.xml


# Automatic generation of autogen.xml
#harm --vcd ../sequence_generator.vcd --clk clk --conf autogen.xml --generate-config --vcd-ss ::tbench_top::intf --vcd-r
#harm --vcd ../sequence_generator.vcd --clk clk --conf autogen.xml --vcd-ss ::tbench_top::intf --vcd-r

# Manual generation of sequence_generator.xml
harm --vcd ../sequence_generator.vcd --clk clk --conf sequence_generator.xml --vcd-ss ::tbench_top::intf --vcd-r