// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vverified_accu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vverified_accu::Vverified_accu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vverified_accu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , data_in{vlSymsp->TOP.data_in}
    , valid_in{vlSymsp->TOP.valid_in}
    , valid_out{vlSymsp->TOP.valid_out}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vverified_accu::Vverified_accu(const char* _vcname__)
    : Vverified_accu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vverified_accu::~Vverified_accu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vverified_accu___024root___eval_debug_assertions(Vverified_accu___024root* vlSelf);
#endif  // VL_DEBUG
void Vverified_accu___024root___eval_static(Vverified_accu___024root* vlSelf);
void Vverified_accu___024root___eval_initial(Vverified_accu___024root* vlSelf);
void Vverified_accu___024root___eval_settle(Vverified_accu___024root* vlSelf);
void Vverified_accu___024root___eval(Vverified_accu___024root* vlSelf);

void Vverified_accu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vverified_accu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vverified_accu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vverified_accu___024root___eval_static(&(vlSymsp->TOP));
        Vverified_accu___024root___eval_initial(&(vlSymsp->TOP));
        Vverified_accu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vverified_accu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vverified_accu::eventsPending() { return false; }

uint64_t Vverified_accu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vverified_accu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vverified_accu___024root___eval_final(Vverified_accu___024root* vlSelf);

VL_ATTR_COLD void Vverified_accu::final() {
    Vverified_accu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vverified_accu::hierName() const { return vlSymsp->name(); }
const char* Vverified_accu::modelName() const { return "Vverified_accu"; }
unsigned Vverified_accu::threads() const { return 1; }
void Vverified_accu::prepareClone() const { contextp()->prepareClone(); }
void Vverified_accu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vverified_accu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vverified_accu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vverified_accu___024root__trace_init_top(Vverified_accu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vverified_accu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_accu___024root*>(voidSelf);
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vverified_accu___024root__trace_decl_types(tracep);
    Vverified_accu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vverified_accu___024root__trace_register(Vverified_accu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vverified_accu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vverified_accu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vverified_accu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
