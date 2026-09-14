// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sqrt_spaced.h for the primary calling header

#include "Vtb_sqrt_spaced__pch.h"
#include "Vtb_sqrt_spaced__Syms.h"
#include "Vtb_sqrt_spaced___024root.h"

VlCoroutine Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__0(Vtb_sqrt_spaced___024root* vlSelf);
VlCoroutine Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__1(Vtb_sqrt_spaced___024root* vlSelf);
VlCoroutine Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__2(Vtb_sqrt_spaced___024root* vlSelf);

void Vtb_sqrt_spaced___024root___eval_initial(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_initial\n"); );
    // Body
    Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__intf__rst__0 
        = vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0 
        = vlSelf->tb_sqrt_spaced__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__0(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_sqrt_spaced__DOT__lfsr;
    tb_sqrt_spaced__DOT__lfsr = 0;
    IData/*31:0*/ tb_sqrt_spaced__DOT__unnamedblk4__DOT__i;
    tb_sqrt_spaced__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__n;
    __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__1__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__1__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i;
    __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__4__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__5__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__5__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__6__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__6__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__8__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__9__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__10__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__10__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__12__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__13__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__14__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__14__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__16__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__17__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__18__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__18__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__20__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__21__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__22__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__22__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__24__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__25__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__26__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__26__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__gap__28__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__gap__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__29__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__30__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__31__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__31__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__33__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__34__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__34__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__35__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__35__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__37__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__38__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__38__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__39__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__39__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__41__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__42__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__42__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__43__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__43__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__45__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__46__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__46__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__47__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__47__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i = 0;
    QData/*32:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__value;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__value = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__gap;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__gap = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard;
    __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__49__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__50__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sqrt_spaced__DOT__rnd__51__Vfuncout;
    __Vfunc_tb_sqrt_spaced__DOT__rnd__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__52__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__52__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__53__n;
    __Vtask_tb_sqrt_spaced__DOT__idle__53__n = 0;
    IData/*31:0*/ __Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i;
    __Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"seed=%d"}, 
                                vlSelf->tb_sqrt_spaced__DOT__seed))) {
        vlSelf->tb_sqrt_spaced__DOT__seed = 1U;
    }
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x63U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->tb_sqrt_spaced__DOT__cycles))) {
        vlSelf->tb_sqrt_spaced__DOT__cycles = 0xbb8U;
    }
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"out=%s"}, 
                                vlSelf->tb_sqrt_spaced__DOT__out))) {
        vlSelf->tb_sqrt_spaced__DOT__out = std::string{"trace.csv"};
    }
    tb_sqrt_spaced__DOT__lfsr = ((IData)(1U) + ((IData)(0x9e3779b1U) 
                                                * vlSelf->tb_sqrt_spaced__DOT__seed));
    vlSelf->tb_sqrt_spaced__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->tb_sqrt_spaced__DOT__out)
                                                  , 
                                                  std::string{"w"});
    ;
    VL_FWRITEF(vlSelf->tb_sqrt_spaced__DOT__fd,"bool rst,bool start,int in,int out,bool error,bool done\n");
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst = 1U;
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in = 0ULL;
    __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__n = 3U;
    __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            < __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__n)) {
        co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_sqrt_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                           57);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                           58);
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst = 1U;
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
        __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__reset_pulse__0__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sqrt_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                       62);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                       63);
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst = 0U;
    __Vtask_tb_sqrt_spaced__DOT__idle__1__n = 2U;
    __Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i 
            < __Vtask_tb_sqrt_spaced__DOT__idle__1__n)) {
        co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_sqrt_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                           49);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                           50);
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
        __Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__1__unnamedblk1__DOT__i);
    }
    tb_sqrt_spaced__DOT__unnamedblk4__DOT__i = 0U;
    while ((vlSelf->tb_sqrt_spaced__DOT__sampled < vlSelf->tb_sqrt_spaced__DOT__cycles)) {
        __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i 
            = tb_sqrt_spaced__DOT__unnamedblk4__DOT__i;
        if ((0U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__4__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__5__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__5__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__4__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__value = 0ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__6__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__3__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__6__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__6__unnamedblk1__DOT__i);
            }
        } else if ((1U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__8__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__9__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__9__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__8__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__value = 1ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__10__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__7__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__10__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__10__unnamedblk1__DOT__i);
            }
        } else if ((2U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__12__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__13__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__13__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__12__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__value = 4ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__14__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__11__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__14__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__14__unnamedblk1__DOT__i);
            }
        } else if ((3U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__16__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__17__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__17__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__16__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__value = 0x90ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__18__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__15__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__18__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__18__unnamedblk1__DOT__i);
            }
        } else if ((4U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__20__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__21__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__21__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__20__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__value = 0x3e8ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__22__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__19__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__22__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__22__unnamedblk1__DOT__i);
            }
        } else if ((5U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__gap__24__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__25__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__25__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__24__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__value = 0x10000ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__26__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__23__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__26__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__26__unnamedblk1__DOT__i);
            }
        } else {
            __Vfunc_tb_sqrt_spaced__DOT__gap__28__Vfuncout 
                = ((IData)(0x28U) + VL_MODDIV_III(32, 
                                                  ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__29__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__29__Vfuncout), (IData)(0x28U)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__gap__28__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__value 
                = VL_EXTEND_QI(33,32, VL_MODDIV_III(32, 
                                                    ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__30__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__30__Vfuncout), (IData)(0x186a0U)));
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__31__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__27__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__31__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__31__unnamedblk1__DOT__i);
            }
        }
        if ((0U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__33__Vfuncout 
                = ((IData)(8U) + (7U & ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__34__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__34__Vfuncout)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__33__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__value = 0x1ffffffffULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__35__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__32__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__35__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__35__unnamedblk1__DOT__i);
            }
        } else if ((1U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__37__Vfuncout 
                = ((IData)(8U) + (7U & ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__38__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__38__Vfuncout)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__37__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__value = 0x1ffffff70ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__39__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__36__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__39__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__39__unnamedblk1__DOT__i);
            }
        } else if ((2U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__41__Vfuncout 
                = ((IData)(8U) + (7U & ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__42__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__42__Vfuncout)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__41__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__value = 0x80000000ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__43__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__40__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__43__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__43__unnamedblk1__DOT__i);
            }
        } else if ((3U == __Vtask_tb_sqrt_spaced__DOT__directed_pair__2__i)) {
            __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__45__Vfuncout 
                = ((IData)(8U) + (7U & ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__46__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__46__Vfuncout)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__45__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__value = 0xee6b2800ULL;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__47__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__44__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__47__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__47__unnamedblk1__DOT__i);
            }
        } else {
            __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__49__Vfuncout 
                = ((IData)(8U) + (7U & ([&]() {
                            tb_sqrt_spaced__DOT__lfsr 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * tb_sqrt_spaced__DOT__lfsr));
                            __Vfunc_tb_sqrt_spaced__DOT__rnd__50__Vfuncout 
                                = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                        }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__50__Vfuncout)));
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__gap 
                = __Vfunc_tb_sqrt_spaced__DOT__recovery_gap__49__Vfuncout;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__value 
                = (0x1ffffffffULL & (- VL_EXTEND_QI(33,32, 
                                                    ([&]() {
                                tb_sqrt_spaced__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_sqrt_spaced__DOT__lfsr));
                                __Vfunc_tb_sqrt_spaced__DOT__rnd__51__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_sqrt_spaced__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_sqrt_spaced__DOT__rnd__51__Vfuncout))));
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               71);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               72);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__value;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               75);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               76);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 1U;
            co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_sqrt_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                               78);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                               79);
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
            __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard = 0U;
            while (((~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)) 
                    & (0x28U > __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard))) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   85);
                __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__unnamedblk3__DOT__guard);
            }
            __Vtask_tb_sqrt_spaced__DOT__idle__52__n 
                = __Vtask_tb_sqrt_spaced__DOT__spaced_request__48__gap;
            __Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i 
                    < __Vtask_tb_sqrt_spaced__DOT__idle__52__n)) {
                co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_sqrt_spaced.clk)", 
                                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                                   49);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                   50);
                vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
                __Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__52__unnamedblk1__DOT__i);
            }
        }
        tb_sqrt_spaced__DOT__unnamedblk4__DOT__i = 
            ((IData)(1U) + tb_sqrt_spaced__DOT__unnamedblk4__DOT__i);
    }
    __Vtask_tb_sqrt_spaced__DOT__idle__53__n = 2U;
    __Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i 
            < __Vtask_tb_sqrt_spaced__DOT__idle__53__n)) {
        co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_sqrt_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                           49);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                           50);
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start = 0U;
        __Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sqrt_spaced__DOT__idle__53__unnamedblk1__DOT__i);
    }
    VL_FCLOSE_I(vlSelf->tb_sqrt_spaced__DOT__fd); VL_FINISH_MT("/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 158, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__1(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h41eab6ff__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_sqrt_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                                           166);
        co_await vlSelf->__VdlySched.delay(0xfa0ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/sqrt/tb_sqrt_spaced.sv", 
                                           167);
        if (VL_UNLIKELY((vlSelf->tb_sqrt_spaced__DOT__sampled 
                         < vlSelf->tb_sqrt_spaced__DOT__cycles))) {
            VL_FWRITEF(vlSelf->tb_sqrt_spaced__DOT__fd,"%0#,%0#,%0d,%0#,%0#,%0#\n",
                       1,vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst,
                       1,(IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start),
                       33,vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in,
                       33,vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.out,
                       1,(IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.error),
                       1,vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done);
            vlSelf->tb_sqrt_spaced__DOT__sampled = 
                ((IData)(1U) + vlSelf->tb_sqrt_spaced__DOT__sampled);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sqrt_spaced___024root___dump_triggers__act(Vtb_sqrt_spaced___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sqrt_spaced___024root___eval_triggers__act(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__intf__rst__0))) 
                                     | ((~ (IData)(vlSelf->tb_sqrt_spaced__DOT__clk)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_sqrt_spaced__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__intf__rst__0 
        = vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst;
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0 
        = vlSelf->tb_sqrt_spaced__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sqrt_spaced___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_sqrt_spaced___024root___nba_sequent__TOP__0(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num = 0;
    QData/*32:0*/ __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess = 0;
    QData/*32:0*/ __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter = 0;
    CData/*0:0*/ TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done;
    TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done = 0;
    QData/*32:0*/ TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in;
    TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in = 0;
    // Body
    TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in 
        = vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter = vlSelf->tb_sqrt_spaced__DOT__dut__DOT__iter;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess = vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess;
    __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num = vlSelf->tb_sqrt_spaced__DOT__dut__DOT__num;
    TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done 
        = vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done;
    if (vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.rst) {
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.out = 0ULL;
        vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.error = 0U;
        TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done = 0U;
        __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num = 0ULL;
        __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess = 0ULL;
        __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter = 0ULL;
    } else if (vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.start) {
        if ((1U & (IData)((vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in 
                           >> 0x1fU)))) {
            TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in = 0ULL;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.error = 1U;
            TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done = 1U;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.out = 0ULL;
        } else {
            __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num 
                = vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in;
            __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess = 1ULL;
            __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter = 0ULL;
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.error = 0U;
            TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done = 0U;
            TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in = 0ULL;
        }
    } else if ((1U & (~ (IData)(vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done)))) {
        if ((0xaULL > vlSelf->tb_sqrt_spaced__DOT__dut__DOT__iter)) {
            __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess 
                = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess 
                                                      + 
                                                      VL_DIV_QQQ(33, vlSelf->tb_sqrt_spaced__DOT__dut__DOT__num, vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess))), 1U));
            __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter 
                = (0x1ffffffffULL & (1ULL + vlSelf->tb_sqrt_spaced__DOT__dut__DOT__iter));
        } else {
            vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.out 
                = vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess;
            TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done = 1U;
        }
    }
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.done = TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__done;
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__num = __Vdly__tb_sqrt_spaced__DOT__dut__DOT__num;
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess = __Vdly__tb_sqrt_spaced__DOT__dut__DOT__guess;
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__iter = __Vdly__tb_sqrt_spaced__DOT__dut__DOT__iter;
    vlSymsp->TOP__tb_sqrt_spaced__DOT__intf.in = TOP__tb_sqrt_spaced__DOT__intf__DOT____Vdly__in;
}
