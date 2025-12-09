# ===== Settings =====
OT ?= $(PWD)/external/opentitan
USE_LOCAL_UART := 1

# ===== Stubs (compiled first) =====
STUBS = \
	rtl/top_pkg.sv \
	

# ===== Dirs (lean: PRIM + TLUL only) =====
PRIM_DIR := $(OT)/hw/ip/prim/rtl
PRIM_GENERIC_DIR := $(OT)/hw/ip/prim_generic/rtl
TLUL_DIR := $(OT)/hw/ip/tlul/rtl

PKG_DIRS := $(PRIM_DIR) $(TLUL_DIR) $(PRIM_GENERIC_DIR)
SV_DIRS  := $(PRIM_DIR) $(TLUL_DIR) $(PRIM_GENERIC_DIR)

# ===== Packages discovery and ordering =====
define FIRST_EXISTING
$(firstword $(foreach D,$(PKG_DIRS),$(wildcard $(D)/$1)))
endef

TLUL_PKG := $(call FIRST_EXISTING,tlul_pkg.sv)
PKG_ALL  := $(sort $(foreach D,$(PKG_DIRS),$(wildcard $(D)/*_pkg.sv)))

# PRIM core packages first, then TLUL package
PRIM_CORE_PKGS := \
	$(PRIM_DIR)/prim_util_pkg.sv \
	$(PRIM_DIR)/prim_mubi_pkg.sv \
	$(PRIM_DIR)/prim_subreg_pkg.sv \
	$(PRIM_DIR)/prim_alert_pkg.sv \
	$(PRIM_DIR)/prim_secded_pkg.sv 

PKG_PRIORITY := $(PRIM_CORE_PKGS) $(TLUL_PKG)
PKG_PRIORITY := $(strip $(filter-out ,$(PKG_PRIORITY)))
PKG_ORDERED  := $(strip $(PKG_PRIORITY) $(filter-out $(PKG_PRIORITY),$(PKG_ALL)))


# Non-package PRIM/TLUL SV (minus EDN + LC helpers)
SV_ALL    := $(sort $(foreach D,$(SV_DIRS),$(wildcard $(D)/*.sv)))

# Exclude PRIM helper that pulls EDN (not needed for UART)
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_edn_req.sv,$(SV_ALL))

# Exclude PRIM RAM/ROM/SDC (not needed for UART)
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_ram_%.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_rom_%.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_sdc_%.sv,$(SV_ALL))

# Exclude PRIM helper that pulls LC (not needed for UART)
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_and_hardened.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_combine.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_dec.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_or_hardened.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_sender.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_DIR)/prim_lc_%.sv,$(SV_ALL))

#Exclude other shit not needed for UART
SV_ALL    := $(filter-out $(TLUL_DIR)/tlul_adapter_%.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(TLUL_DIR)/tlul_jtag_%.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(TLUL_DIR)/tlul_lc_%.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_GENERIC_DIR)/prim_flash.sv,$(SV_ALL))
SV_ALL    := $(filter-out $(PRIM_GENERIC_DIR)/prim_generic_flash_bank.sv,$(SV_ALL))

SV_OTHERS := $(filter-out $(PKG_ALL),$(SV_ALL))


# ===== UART RTL (local by default) =====
LOCAL_UART = \
	rtl/uart_reg_pkg.sv \
	rtl/uart_reg_top.sv \
	rtl/uart_tx.sv \
	rtl/uart_rx.sv \
	rtl/uart_core.sv \
	rtl/uart.sv

OT_UART_DIR := $(OT)/hw/ip/uart/rtl
RTL_UART    := $(if $(filter 1,$(USE_LOCAL_UART)),$(LOCAL_UART),$(OT_UART_DIR)/*.sv)

# ===== Testbench =====
TB_LIST = \
	rtl/top_uart_tb.sv \
	rtl/tlul_host.sv

CPP_RX = sim/sim_main_RX.cpp
CPP_TX = sim/sim_main_TX.cpp
CPP_GB = sim/sim_global.cpp

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

prepare:
	@mkdir -p external || true
	@if [ ! -d "$(OT)/.git" ]; then \
	echo "Clone OpenTitan (for TLUL/PRIM) into external/opentitan:"; \
	echo "  git clone https://github.com/lowRISC/opentitan.git $(OT)"; \
	exit 1; \
	fi

# ORDER: stubs -> ALL packages (priority first) -> PRIM/TLUL others -> UART -> TB/CPP
build_global: prepare
	@echo "==> Packages (priority first):"
	@echo "  PRIM_CORE_PKGS = $(PRIM_CORE_PKGS)"
	@echo "  TLUL_PKG       = $(TLUL_PKG)"
	verilator $(VERILATOR_FLAGS) --cc --exe --build \
	-I$(PRIM_DIR) -I$(TLUL_DIR) -I$(PRIM_GENERIC_DIR) \
	$(STUBS) \
	$(PKG_ORDERED) \
	rtl/top_racl_pkg.sv \
	$(SV_OTHERS) \
	$(RTL_UART) \
	$(TB_LIST) $(CPP_GB) \
	--top-module top_uart_tb \
	-o Vtop_uart_tb


# ORDER: stubs -> ALL packages (priority first) -> PRIM/TLUL others -> UART -> TB/CPP
build_tx: prepare
	@echo "==> Packages (priority first):"
	@echo "  PRIM_CORE_PKGS = $(PRIM_CORE_PKGS)"
	@echo "  TLUL_PKG       = $(TLUL_PKG)"
	verilator $(VERILATOR_FLAGS) --cc --exe --build \
	-I$(PRIM_DIR) -I$(TLUL_DIR) -I$(PRIM_GENERIC_DIR) \
	$(STUBS) \
	$(PKG_ORDERED) \
	rtl/top_racl_pkg.sv \
	$(SV_OTHERS) \
	$(RTL_UART) \
	$(TB_LIST) $(CPP_TX) \
	--top-module top_uart_tb \
	-o Vtop_uart_tb

build_rx: prepare
	@echo "==> Packages (priority first):"
	@echo "  PRIM_CORE_PKGS = $(PRIM_CORE_PKGS)"
	@echo "  TLUL_PKG       = $(TLUL_PKG)"
	verilator $(VERILATOR_FLAGS) --cc --exe --build \
	-I$(PRIM_DIR) -I$(TLUL_DIR) -I$(PRIM_GENERIC_DIR) \
	$(STUBS) \
	$(PKG_ORDERED) \
	rtl/top_racl_pkg.sv \
	$(SV_OTHERS) \
	$(RTL_UART) \
	$(TB_LIST) $(CPP_RX) \
	--top-module top_uart_tb \
	-o Vtop_uart_tb


run:
	./obj_dir/Vtop_uart_tb

clean:
	rm -rf obj_dir *.vcd *.fst

.PHONY: all prepare build run clean