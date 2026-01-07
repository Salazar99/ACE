
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/src/Trace_filtering/filter.py" \
  --csv "$ACEROOT/tests/uart/2_fault_injection/Detection_traces/DT_bool_intr_tx_done_o_0.csv" \
  --ass "G(((reg2hw_intr_test == 8738) U (reg2hw_intr_state == -251)) ##2 true -> Detected)" \
  --out "filtered_intr_tx_done_0.csv"


# python3 "$ACEROOT/trace_filtering/filter.py" \
#   --csv "$ACEROOT/tests/uart/2_fault_injection/Detection_traces/DT_bool_intr_rx_watermark_o_0.csv" \
#   --ass "G((reg2hw_intr_test == 43690 U reg2hw_intr_state == -253) -> Detected)" \
#   --out "filtered_intr_tx_done_0.csv"

