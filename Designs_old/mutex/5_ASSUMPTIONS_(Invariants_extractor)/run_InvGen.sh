
#export ACEROOT="/home/fabio/Desktop/ACE"

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_A_lt_B.csv

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_A_gt_B.csv

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_A_eq_B.csv