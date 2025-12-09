// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_uart_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_uart_tb::Vtop_uart_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_uart_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , tl_i_a_valid{vlSymsp->TOP.tl_i_a_valid}
    , tl_i_a_opcode{vlSymsp->TOP.tl_i_a_opcode}
    , tl_i_a_size{vlSymsp->TOP.tl_i_a_size}
    , tl_i_a_mask{vlSymsp->TOP.tl_i_a_mask}
    , tl_i_a_source{vlSymsp->TOP.tl_i_a_source}
    , tl_i_a_param{vlSymsp->TOP.tl_i_a_param}
    , tl_i_d_ready{vlSymsp->TOP.tl_i_d_ready}
    , tl_o_a_ready{vlSymsp->TOP.tl_o_a_ready}
    , tl_o_d_valid{vlSymsp->TOP.tl_o_d_valid}
    , tl_o_d_opcode{vlSymsp->TOP.tl_o_d_opcode}
    , tl_o_d_source{vlSymsp->TOP.tl_o_d_source}
    , tl_o_d_error{vlSymsp->TOP.tl_o_d_error}
    , cio_tx_o{vlSymsp->TOP.cio_tx_o}
    , cio_tx_en_o{vlSymsp->TOP.cio_tx_en_o}
    , cio_rx_i{vlSymsp->TOP.cio_rx_i}
    , tl_i_a_address{vlSymsp->TOP.tl_i_a_address}
    , tl_i_a_data{vlSymsp->TOP.tl_i_a_data}
    , tl_o_d_data{vlSymsp->TOP.tl_o_d_data}
    , __PVT__uart_reg_pkg{vlSymsp->TOP.__PVT__uart_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop_uart_tb::Vtop_uart_tb(const char* _vcname__)
    : Vtop_uart_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_uart_tb::~Vtop_uart_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_uart_tb___024root___eval_debug_assertions(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_uart_tb___024root___eval_static(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___eval_initial(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___eval_settle(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___eval(Vtop_uart_tb___024root* vlSelf);

void Vtop_uart_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_uart_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_uart_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_uart_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtop_uart_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_uart_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_uart_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_uart_tb::eventsPending() { return false; }

uint64_t Vtop_uart_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_uart_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_uart_tb___024root___eval_final(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb::final() {
    Vtop_uart_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_uart_tb::hierName() const { return vlSymsp->name(); }
const char* Vtop_uart_tb::modelName() const { return "Vtop_uart_tb"; }
unsigned Vtop_uart_tb::threads() const { return 1; }
void Vtop_uart_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtop_uart_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_uart_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_uart_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop_uart_tb___024root__trace_init_top(Vtop_uart_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_uart_tb___024root__trace_decl_types(tracep);
    Vtop_uart_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_register(Vtop_uart_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_uart_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_uart_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_uart_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
