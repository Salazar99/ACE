#export ACEROOT="/home/fabio/Desktop/ACE"

# Manual generation of sqrt_calculator_guarantee.xml
harm --csv ../4_filtering/Filtered_traces/filtered_intr_rx_watermark_o_0.csv --conf uart_config.xml --dump-to ./uart_intr_rx_watermark_o_0_guarantee.txt

harm --csv ../4_filtering/Filtered_traces/filtered_intr_tx_done_o_0.csv --conf uart_config.xml --dump-to ./uart_intr_tx_done_o_0_guarantee.txt