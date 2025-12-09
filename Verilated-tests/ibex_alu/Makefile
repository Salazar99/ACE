# ===== UART RTL (local by default) =====
LOCAL_FILES = \
	rtl/ibex_pkg.sv \
	rtl/ibex_alu.sv 

# ===== Testbench =====
#TB_LIST = \
	

CPP = sim/sim_main.cpp

# ===== Verilator flags =====

# Keep core diagnostics on
VERILATOR_FLAGS +=  -Wpedantic

# Treat real problems as errors
VERILATOR_FLAGS += --Werror-PKGNODECL --Werror-ENUMVALUE --Werror-SELRANGE

# Soften common bring-up noise
VERILATOR_FLAGS += -Wno-UNOPTFLAT -Wno-INITIALDLY -Wno-WIDTHEXPAND -Wno-UNSIGNED -Wno-MULTIDRIVEN
# Consider this if many truncations are intentional in TB:
# VERILATOR_FLAGS += -Wno-WIDTHTRUNC

VERILATOR_FLAGS += -sv --trace --timing 

# Enforce a single timescale across files (kills TIMESCALEMOD)
VERILATOR_FLAGS += --timescale-override 1ns/1ps


# ===== Targets =====
all: build_global run


# ORDER: stubs -> ALL packages (priority first) -> PRIM/TLUL others -> UART -> TB/CPP
build_global: 
	verilator $(VERILATOR_FLAGS) --cc --exe --build \
	$(LOCAL_FILES) \
	$(TB_LIST) $(CPP) \
	--top-module ibex_alu \
	-o Vibex_alu

run:
	./obj_dir/Vibex_alu

clean:
	rm -rf obj_dir *.vcd *.fst

.PHONY: all prepare build run clean