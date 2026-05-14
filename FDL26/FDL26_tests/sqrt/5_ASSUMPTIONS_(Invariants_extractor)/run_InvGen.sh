
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_in_gt_0.csv

python3 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_in_lt_0.csv

python3 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_in_eq_0.csv
