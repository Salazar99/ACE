# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vibex_multdiv_fast.mk for the caller.

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
	Vibex_multdiv_fast \
	Vibex_multdiv_fast___024root__DepSet_h1cfc5dbd__0 \
	Vibex_multdiv_fast___024root__DepSet_hfd6bfb24__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vibex_multdiv_fast___024root__Slow \
	Vibex_multdiv_fast___024root__DepSet_h1cfc5dbd__0__Slow \
	Vibex_multdiv_fast___024root__DepSet_hfd6bfb24__0__Slow \
	Vibex_multdiv_fast_ibex_pkg__Slow \
	Vibex_multdiv_fast_ibex_pkg__DepSet_h068db46f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vibex_multdiv_fast__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vibex_multdiv_fast__Syms \
	Vibex_multdiv_fast__Trace__0__Slow \
	Vibex_multdiv_fast__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
