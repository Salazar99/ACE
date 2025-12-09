// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_csr__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_csr::Vibex_csr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_csr__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , wr_en_i{vlSymsp->TOP.wr_en_i}
    , rd_error_o{vlSymsp->TOP.rd_error_o}
    , wr_data_i{vlSymsp->TOP.wr_data_i}
    , rd_data_o{vlSymsp->TOP.rd_data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vibex_csr::Vibex_csr(const char* _vcname__)
    : Vibex_csr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_csr::~Vibex_csr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_csr___024root___eval_debug_assertions(Vibex_csr___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_csr___024root___eval_static(Vibex_csr___024root* vlSelf);
void Vibex_csr___024root___eval_initial(Vibex_csr___024root* vlSelf);
void Vibex_csr___024root___eval_settle(Vibex_csr___024root* vlSelf);
void Vibex_csr___024root___eval(Vibex_csr___024root* vlSelf);

void Vibex_csr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_csr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_csr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_csr___024root___eval_static(&(vlSymsp->TOP));
        Vibex_csr___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_csr___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_csr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_csr::eventsPending() { return false; }

uint64_t Vibex_csr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_csr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_csr___024root___eval_final(Vibex_csr___024root* vlSelf);

VL_ATTR_COLD void Vibex_csr::final() {
    Vibex_csr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_csr::hierName() const { return vlSymsp->name(); }
const char* Vibex_csr::modelName() const { return "Vibex_csr"; }
unsigned Vibex_csr::threads() const { return 1; }
void Vibex_csr::prepareClone() const { contextp()->prepareClone(); }
void Vibex_csr::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vibex_csr::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_csr___024root__trace_decl_types(VerilatedVcd* tracep);

void Vibex_csr___024root__trace_init_top(Vibex_csr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_csr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_csr___024root*>(voidSelf);
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_csr___024root__trace_decl_types(tracep);
    Vibex_csr___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_csr___024root__trace_register(Vibex_csr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_csr::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_csr::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_csr___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
