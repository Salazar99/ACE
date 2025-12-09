// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VIBEX_MULTDIV_FAST_H_
#define VERILATED_VIBEX_MULTDIV_FAST_H_  // guard

#include "verilated.h"

class Vibex_multdiv_fast__Syms;
class Vibex_multdiv_fast___024root;
class VerilatedVcdC;
class Vibex_multdiv_fast_ibex_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vibex_multdiv_fast VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vibex_multdiv_fast__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&mult_en_i,0,0);
    VL_IN8(&div_en_i,0,0);
    VL_IN8(&mult_sel_i,0,0);
    VL_IN8(&div_sel_i,0,0);
    VL_IN8(&operator_i,1,0);
    VL_IN8(&signed_mode_i,1,0);
    VL_IN8(&equal_to_zero_i,0,0);
    VL_IN8(&data_ind_timing_i,0,0);
    VL_OUT8(&imd_val_we_o,1,0);
    VL_IN8(&multdiv_ready_id_i,0,0);
    VL_OUT8(&valid_o,0,0);
    VL_IN(&op_a_i,31,0);
    VL_IN(&op_b_i,31,0);
    VL_IN(&alu_adder_i,31,0);
    VL_OUT(&multdiv_result_o,31,0);
    VL_IN64(&alu_adder_ext_i,33,0);
    VL_OUT64(&alu_operand_a_o,32,0);
    VL_OUT64(&alu_operand_b_o,32,0);
    VL_IN64((&imd_val_q_i)[2],33,0);
    VL_OUT64((&imd_val_d_o)[2],33,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vibex_multdiv_fast_ibex_pkg* const __PVT__ibex_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vibex_multdiv_fast___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vibex_multdiv_fast(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vibex_multdiv_fast(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vibex_multdiv_fast();
  private:
    VL_UNCOPYABLE(Vibex_multdiv_fast);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
