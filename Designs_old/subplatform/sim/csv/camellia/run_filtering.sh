
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/subplatform/sim/csv/camellia/camellia.csv" \
  --ass "G((!(camallia_u::Drdy) ##1 (camallia_u::Drdy)) |-> ##24 camallia_u::Dvld)"
  #--ass "G((!(camallia_u::Drdy) ##1 (camallia_u::Drdy) ##1 (camallia_u::Drdy)) |-> ##23 camallia_u::Dvld)"
  #--ass "G(!(camallia_u::Krdy) ##1 (camallia_u::Krdy) |-> ##7 camallia_u::Kvld)"
  #--ass "G((!(camallia_u::Drdy) ##1 (camallia_u::Drdy)))"
