// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_UART_TB_H_
#define VERILATED_VTOP_UART_TB_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop_uart_tb__Syms;
class Vtop_uart_tb___024root;
class VerilatedVcdC;
class Vtop_uart_tb_prim_sha2_pkg;
class Vtop_uart_tb_uart_reg_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop_uart_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop_uart_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&tl_i_a_valid,0,0);
    VL_IN8(&tl_i_a_opcode,2,0);
    VL_IN8(&tl_i_a_size,1,0);
    VL_IN8(&tl_i_a_mask,3,0);
    VL_IN8(&tl_i_a_source,7,0);
    VL_IN8(&tl_i_a_param,2,0);
    VL_IN8(&tl_i_d_ready,0,0);
    VL_OUT8(&tl_o_a_ready,0,0);
    VL_OUT8(&tl_o_d_valid,0,0);
    VL_OUT8(&tl_o_d_opcode,2,0);
    VL_OUT8(&tl_o_d_source,7,0);
    VL_OUT8(&tl_o_d_error,0,0);
    VL_OUT8(&cio_tx_o,0,0);
    VL_OUT8(&cio_tx_en_o,0,0);
    VL_IN8(&cio_rx_i,0,0);
    VL_IN(&tl_i_a_address,31,0);
    VL_IN(&tl_i_a_data,31,0);
    VL_OUT(&tl_o_d_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_uart_tb_uart_reg_pkg* const __PVT__uart_reg_pkg;
    Vtop_uart_tb_prim_sha2_pkg* const __PVT__prim_sha2_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop_uart_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop_uart_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop_uart_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop_uart_tb();
  private:
    VL_UNCOPYABLE(Vtop_uart_tb);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
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
};

#endif  // guard
