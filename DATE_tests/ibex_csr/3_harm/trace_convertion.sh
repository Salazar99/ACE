
for vcd_file in ../2_fault_injection/*.vcd; do
    base_name=$(basename "$vcd_file" .vcd)
    $ACEROOT/third_party/vcd2csv --vcd "$vcd_file" --clk clk --vcd-ss tb_ibex_csr::dut --dump-to "./${base_name}.csv"
done