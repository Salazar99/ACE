
export ACEROOT="/home/fabio/Desktop/ACE"

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_div_sel_i.csv

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_mult_sel_i.csv
