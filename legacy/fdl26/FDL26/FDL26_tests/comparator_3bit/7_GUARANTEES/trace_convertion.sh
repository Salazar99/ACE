
for vcd_file in ../6_testbench_generator/*.vcd; do
    base_name=$(basename "$vcd_file" .vcd)
    $ACEROOT/third_party/vcd2csv --vcd "$vcd_file" --clk clk --vcd-ss test::dut --dump-to "./${base_name}.csv"
done