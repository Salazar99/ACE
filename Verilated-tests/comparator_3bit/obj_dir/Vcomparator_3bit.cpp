// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcomparator_3bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcomparator_3bit::Vcomparator_3bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcomparator_3bit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , A_greater{vlSymsp->TOP.A_greater}
    , A_equal{vlSymsp->TOP.A_equal}
    , A_less{vlSymsp->TOP.A_less}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcomparator_3bit::Vcomparator_3bit(const char* _vcname__)
    : Vcomparator_3bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcomparator_3bit::~Vcomparator_3bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcomparator_3bit___024root___eval_debug_assertions(Vcomparator_3bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomparator_3bit___024root___eval_static(Vcomparator_3bit___024root* vlSelf);
void Vcomparator_3bit___024root___eval_initial(Vcomparator_3bit___024root* vlSelf);
void Vcomparator_3bit___024root___eval_settle(Vcomparator_3bit___024root* vlSelf);
void Vcomparator_3bit___024root___eval(Vcomparator_3bit___024root* vlSelf);

void Vcomparator_3bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomparator_3bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcomparator_3bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcomparator_3bit___024root___eval_static(&(vlSymsp->TOP));
        Vcomparator_3bit___024root___eval_initial(&(vlSymsp->TOP));
        Vcomparator_3bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcomparator_3bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcomparator_3bit::eventsPending() { return false; }

uint64_t Vcomparator_3bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcomparator_3bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcomparator_3bit___024root___eval_final(Vcomparator_3bit___024root* vlSelf);

VL_ATTR_COLD void Vcomparator_3bit::final() {
    Vcomparator_3bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcomparator_3bit::hierName() const { return vlSymsp->name(); }
const char* Vcomparator_3bit::modelName() const { return "Vcomparator_3bit"; }
unsigned Vcomparator_3bit::threads() const { return 1; }
void Vcomparator_3bit::prepareClone() const { contextp()->prepareClone(); }
void Vcomparator_3bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcomparator_3bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcomparator_3bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcomparator_3bit___024root__trace_init_top(Vcomparator_3bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcomparator_3bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator_3bit___024root*>(voidSelf);
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcomparator_3bit___024root__trace_decl_types(tracep);
    Vcomparator_3bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcomparator_3bit___024root__trace_register(Vcomparator_3bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcomparator_3bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcomparator_3bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcomparator_3bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
