 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv tb/tb_old.sv rtl/sequence_generator.sv
vsim -voptargs=+acc -c work.tb_sequence_generator -do "run -all; exit" 
gtkwave sequence_generator.vcd
