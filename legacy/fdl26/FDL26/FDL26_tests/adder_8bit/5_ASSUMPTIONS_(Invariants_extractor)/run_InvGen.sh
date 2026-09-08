
#export ACEROOT="/home/fabio/Desktop/ACE"

#python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_a_+_b_+_cin_eq_0.csv

python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_a_+_b_+_cin_eq_256.csv

#python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_a_+_b_+_cin_gt_255.csv

#python3.11 "$ACEROOT/InvGen/InvGen.py" InvTemplates.xml ../4_filtering/filtered_a_+_b_+_cin_le_255.csv