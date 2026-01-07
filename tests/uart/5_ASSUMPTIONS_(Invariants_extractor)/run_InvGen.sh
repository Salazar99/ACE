
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/src/assume_gen/InvGen.py" InvTemplates.xml ../4_filtering/Filtered_traces/filtered_intr_rx_watermark_o_0.csv ./uart_intr_rx_watermark_o_0_assumptions.txt


python3 "$ACEROOT/src/assume_gen/InvGen.py" InvTemplates.xml ../4_filtering/Filtered_traces/filtered_intr_tx_done_o_0.csv ./uart_intr_tx_done_o_0_assumptions.txt