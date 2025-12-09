# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop_uart_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop_uart_tb \
	Vtop_uart_tb___024root__DepSet_h7fcc1f05__0 \
	Vtop_uart_tb___024root__DepSet_ha0ff4930__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop_uart_tb__ConstPool_0 \
	Vtop_uart_tb___024root__Slow \
	Vtop_uart_tb___024root__DepSet_h7fcc1f05__0__Slow \
	Vtop_uart_tb___024root__DepSet_ha0ff4930__0__Slow \
	Vtop_uart_tb_uart_reg_pkg__Slow \
	Vtop_uart_tb_uart_reg_pkg__DepSet_h919b1338__0__Slow \
	Vtop_uart_tb_prim_sha2_pkg__Slow \
	Vtop_uart_tb_prim_sha2_pkg__DepSet_h34dea809__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop_uart_tb__Dpi \
	Vtop_uart_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop_uart_tb__Syms \
	Vtop_uart_tb__Trace__0__Slow \
	Vtop_uart_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
