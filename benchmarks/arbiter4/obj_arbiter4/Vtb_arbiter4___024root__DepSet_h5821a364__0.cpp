// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_arbiter4.h for the primary calling header

#include "Vtb_arbiter4__pch.h"
#include "Vtb_arbiter4___024root.h"

VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__0(Vtb_arbiter4___024root* vlSelf);
VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__1(Vtb_arbiter4___024root* vlSelf);
VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__2(Vtb_arbiter4___024root* vlSelf);

void Vtb_arbiter4___024root___eval_initial(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_initial\n"); );
    // Body
    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_arbiter4__DOT__clk__0 
        = vlSelf->tb_arbiter4__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__0(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ tb_arbiter4__DOT__stress;
    tb_arbiter4__DOT__stress = 0;
    IData/*31:0*/ tb_arbiter4__DOT__lfsr;
    tb_arbiter4__DOT__lfsr = 0;
    CData/*3:0*/ tb_arbiter4__DOT__pending;
    tb_arbiter4__DOT__pending = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__0__n;
    __Vtask_tb_arbiter4__DOT__reset_pulse__0__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i;
    __Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__1__mask;
    __Vtask_tb_arbiter4__DOT__serve__1__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__1__tail;
    __Vtask_tb_arbiter4__DOT__serve__1__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__2__value;
    __Vtask_tb_arbiter4__DOT__drive__2__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__3__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__3__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__4__value;
    __Vtask_tb_arbiter4__DOT__drive__4__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__5__n;
    __Vtask_tb_arbiter4__DOT__idle__5__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__6__value;
    __Vtask_tb_arbiter4__DOT__drive__6__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__7__mask;
    __Vtask_tb_arbiter4__DOT__serve__7__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__7__tail;
    __Vtask_tb_arbiter4__DOT__serve__7__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__8__value;
    __Vtask_tb_arbiter4__DOT__drive__8__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__9__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__9__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__10__value;
    __Vtask_tb_arbiter4__DOT__drive__10__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__11__n;
    __Vtask_tb_arbiter4__DOT__idle__11__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__12__value;
    __Vtask_tb_arbiter4__DOT__drive__12__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__13__mask;
    __Vtask_tb_arbiter4__DOT__serve__13__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__13__tail;
    __Vtask_tb_arbiter4__DOT__serve__13__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__14__value;
    __Vtask_tb_arbiter4__DOT__drive__14__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__15__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__15__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__16__value;
    __Vtask_tb_arbiter4__DOT__drive__16__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__17__n;
    __Vtask_tb_arbiter4__DOT__idle__17__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__18__value;
    __Vtask_tb_arbiter4__DOT__drive__18__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__19__mask;
    __Vtask_tb_arbiter4__DOT__serve__19__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__19__tail;
    __Vtask_tb_arbiter4__DOT__serve__19__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__20__value;
    __Vtask_tb_arbiter4__DOT__drive__20__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__21__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__21__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__22__value;
    __Vtask_tb_arbiter4__DOT__drive__22__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__23__n;
    __Vtask_tb_arbiter4__DOT__idle__23__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__24__value;
    __Vtask_tb_arbiter4__DOT__drive__24__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__25__mask;
    __Vtask_tb_arbiter4__DOT__serve__25__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__25__tail;
    __Vtask_tb_arbiter4__DOT__serve__25__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__26__value;
    __Vtask_tb_arbiter4__DOT__drive__26__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__27__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__27__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__28__value;
    __Vtask_tb_arbiter4__DOT__drive__28__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__29__n;
    __Vtask_tb_arbiter4__DOT__idle__29__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__30__value;
    __Vtask_tb_arbiter4__DOT__drive__30__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__31__mask;
    __Vtask_tb_arbiter4__DOT__serve__31__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__31__tail;
    __Vtask_tb_arbiter4__DOT__serve__31__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__32__value;
    __Vtask_tb_arbiter4__DOT__drive__32__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__33__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__33__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__34__value;
    __Vtask_tb_arbiter4__DOT__drive__34__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__35__n;
    __Vtask_tb_arbiter4__DOT__idle__35__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__36__value;
    __Vtask_tb_arbiter4__DOT__drive__36__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__37__mask;
    __Vtask_tb_arbiter4__DOT__serve__37__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__37__tail;
    __Vtask_tb_arbiter4__DOT__serve__37__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__38__value;
    __Vtask_tb_arbiter4__DOT__drive__38__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__39__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__39__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__40__value;
    __Vtask_tb_arbiter4__DOT__drive__40__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__41__n;
    __Vtask_tb_arbiter4__DOT__idle__41__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__42__value;
    __Vtask_tb_arbiter4__DOT__drive__42__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__43__mask;
    __Vtask_tb_arbiter4__DOT__serve__43__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__43__tail;
    __Vtask_tb_arbiter4__DOT__serve__43__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__44__value;
    __Vtask_tb_arbiter4__DOT__drive__44__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__45__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__45__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__46__value;
    __Vtask_tb_arbiter4__DOT__drive__46__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__47__n;
    __Vtask_tb_arbiter4__DOT__idle__47__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__48__value;
    __Vtask_tb_arbiter4__DOT__drive__48__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__49__mask;
    __Vtask_tb_arbiter4__DOT__serve__49__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__49__tail;
    __Vtask_tb_arbiter4__DOT__serve__49__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__50__value;
    __Vtask_tb_arbiter4__DOT__drive__50__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__51__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__51__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__52__value;
    __Vtask_tb_arbiter4__DOT__drive__52__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__53__n;
    __Vtask_tb_arbiter4__DOT__idle__53__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__54__value;
    __Vtask_tb_arbiter4__DOT__drive__54__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__55__mask;
    __Vtask_tb_arbiter4__DOT__serve__55__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__55__tail;
    __Vtask_tb_arbiter4__DOT__serve__55__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__56__value;
    __Vtask_tb_arbiter4__DOT__drive__56__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__57__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__57__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__58__value;
    __Vtask_tb_arbiter4__DOT__drive__58__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__59__n;
    __Vtask_tb_arbiter4__DOT__idle__59__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__60__value;
    __Vtask_tb_arbiter4__DOT__drive__60__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__61__mask;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__62__value;
    __Vtask_tb_arbiter4__DOT__drive__62__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__64__value;
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__65__n;
    __Vtask_tb_arbiter4__DOT__idle__65__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__66__value;
    __Vtask_tb_arbiter4__DOT__drive__66__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__pulse__67__mask;
    __Vtask_tb_arbiter4__DOT__pulse__67__mask = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__68__value;
    __Vtask_tb_arbiter4__DOT__drive__68__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__69__value;
    __Vtask_tb_arbiter4__DOT__drive__69__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__pulse__70__mask;
    __Vtask_tb_arbiter4__DOT__pulse__70__mask = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__71__value;
    __Vtask_tb_arbiter4__DOT__drive__71__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__72__value;
    __Vtask_tb_arbiter4__DOT__drive__72__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__73__value;
    __Vtask_tb_arbiter4__DOT__drive__73__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__74__n;
    __Vtask_tb_arbiter4__DOT__reset_pulse__74__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i;
    __Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__75__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__76__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__77__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__78__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__78__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__pulse__79__mask;
    __Vtask_tb_arbiter4__DOT__pulse__79__mask = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__80__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__80__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__81__value;
    __Vtask_tb_arbiter4__DOT__drive__81__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__82__value;
    __Vtask_tb_arbiter4__DOT__drive__82__value = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__83__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__83__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__pulse__84__mask;
    __Vtask_tb_arbiter4__DOT__pulse__84__mask = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__85__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__85__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__86__value;
    __Vtask_tb_arbiter4__DOT__drive__86__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__87__value;
    __Vtask_tb_arbiter4__DOT__drive__87__value = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__88__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__88__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__89__value;
    __Vtask_tb_arbiter4__DOT__drive__89__value = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__90__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__90__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__91__n;
    __Vtask_tb_arbiter4__DOT__reset_pulse__91__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i;
    __Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__92__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__92__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__93__value;
    __Vtask_tb_arbiter4__DOT__drive__93__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__94__value;
    __Vtask_tb_arbiter4__DOT__drive__94__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__95__value;
    __Vtask_tb_arbiter4__DOT__drive__95__value = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__96__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__96__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__97__n;
    __Vtask_tb_arbiter4__DOT__reset_pulse__97__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i;
    __Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__98__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__98__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__99__n;
    __Vtask_tb_arbiter4__DOT__idle__99__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__100__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__100__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__101__value;
    __Vtask_tb_arbiter4__DOT__drive__101__value = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__serve__102__mask;
    __Vtask_tb_arbiter4__DOT__serve__102__mask = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__serve__102__tail;
    __Vtask_tb_arbiter4__DOT__serve__102__tail = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__103__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_arbiter4__DOT__rnd__104__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__rnd__104__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__105__value;
    __Vtask_tb_arbiter4__DOT__drive__105__value = 0;
    CData/*3:0*/ __Vfunc_tb_arbiter4__DOT__granted__106__Vfuncout;
    __Vfunc_tb_arbiter4__DOT__granted__106__Vfuncout = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__107__value;
    __Vtask_tb_arbiter4__DOT__drive__107__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__108__n;
    __Vtask_tb_arbiter4__DOT__idle__108__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__109__value;
    __Vtask_tb_arbiter4__DOT__drive__109__value = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__110__n;
    __Vtask_tb_arbiter4__DOT__idle__110__n = 0;
    IData/*31:0*/ __Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i;
    __Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_arbiter4__DOT__drive__111__value;
    __Vtask_tb_arbiter4__DOT__drive__111__value = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_55;
    // Body
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"seed=%d"}, 
                                vlSelf->tb_arbiter4__DOT__seed))) {
        vlSelf->tb_arbiter4__DOT__seed = 1U;
    }
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x63U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->tb_arbiter4__DOT__cycles))) {
        vlSelf->tb_arbiter4__DOT__cycles = 0x3e8U;
    }
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"out=%s"}, 
                                vlSelf->tb_arbiter4__DOT__out))) {
        vlSelf->tb_arbiter4__DOT__out = std::string{"trace.csv"};
    }
    __Vtemp_2[0U] = 0x6f3d2573U;
    __Vtemp_2[1U] = 0x6e617269U;
    __Vtemp_2[2U] = 0x736365U;
    if ((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                vlSelf->tb_arbiter4__DOT__scenario))) {
        vlSelf->tb_arbiter4__DOT__scenario = std::string{"nominal"};
    }
    tb_arbiter4__DOT__stress = (std::string{"stress"} 
                                == vlSelf->tb_arbiter4__DOT__scenario);
    tb_arbiter4__DOT__lfsr = ((IData)(1U) + ((IData)(0x9e3779b1U) 
                                             * vlSelf->tb_arbiter4__DOT__seed));
    vlSelf->tb_arbiter4__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->tb_arbiter4__DOT__out)
                                               , std::string{"w"});
    ;
    VL_FWRITEF(vlSelf->tb_arbiter4__DOT__fd,"bool rst_n,bool req0,bool req1,bool req2,bool req3,bool gnt0,bool gnt1,bool gnt2,bool gnt3,bool gnt_valid,int gnt_id\n");
    vlSelf->tb_arbiter4__DOT__rst_n = 0U;
    vlSelf->tb_arbiter4__DOT__req0 = 0U;
    vlSelf->tb_arbiter4__DOT__req1 = 0U;
    vlSelf->tb_arbiter4__DOT__req2 = 0U;
    vlSelf->tb_arbiter4__DOT__req3 = 0U;
    tb_arbiter4__DOT__pending = 0U;
    __Vtask_tb_arbiter4__DOT__reset_pulse__0__n = 2U;
    __Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            < __Vtask_tb_arbiter4__DOT__reset_pulse__0__n)) {
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           72);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           73);
        vlSelf->tb_arbiter4__DOT__rst_n = 0U;
        vlSelf->tb_arbiter4__DOT__req0 = 0U;
        vlSelf->tb_arbiter4__DOT__req1 = 0U;
        vlSelf->tb_arbiter4__DOT__req2 = 0U;
        vlSelf->tb_arbiter4__DOT__req3 = 0U;
        __Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__reset_pulse__0__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       78);
    vlSelf->tb_arbiter4__DOT__rst_n = 1U;
    tb_arbiter4__DOT__pending = 0U;
    __Vtask_tb_arbiter4__DOT__serve__1__tail = 2U;
    __Vtask_tb_arbiter4__DOT__serve__1__mask = 1U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__1__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__2__value = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__2__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__2__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__2__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__2__value) 
                                                >> 3U));
        __Vtemp_4 = ((IData)(tb_arbiter4__DOT__pending) 
                     & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__3__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__3__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_4;
    }
    __Vtask_tb_arbiter4__DOT__drive__4__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__4__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__4__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__4__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__4__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__5__n = __Vtask_tb_arbiter4__DOT__serve__1__tail;
    __Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__5__n)) {
        __Vtask_tb_arbiter4__DOT__drive__6__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__6__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__6__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__6__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__6__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__5__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__7__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__7__mask = 2U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__7__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__8__value = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__8__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__8__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__8__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__8__value) 
                                                >> 3U));
        __Vtemp_6 = ((IData)(tb_arbiter4__DOT__pending) 
                     & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__9__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__9__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_6;
    }
    __Vtask_tb_arbiter4__DOT__drive__10__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__10__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__10__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__10__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__10__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__11__n = __Vtask_tb_arbiter4__DOT__serve__7__tail;
    __Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__11__n)) {
        __Vtask_tb_arbiter4__DOT__drive__12__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__12__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__12__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__12__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__12__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__11__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__13__tail = 2U;
    __Vtask_tb_arbiter4__DOT__serve__13__mask = 4U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__13__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__14__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__14__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__14__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__14__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__14__value) 
                                                >> 3U));
        __Vtemp_8 = ((IData)(tb_arbiter4__DOT__pending) 
                     & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__15__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__15__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_8;
    }
    __Vtask_tb_arbiter4__DOT__drive__16__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__16__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__16__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__16__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__16__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__17__n = __Vtask_tb_arbiter4__DOT__serve__13__tail;
    __Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__17__n)) {
        __Vtask_tb_arbiter4__DOT__drive__18__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__18__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__18__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__18__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__18__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__17__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__19__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__19__mask = 8U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__19__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__20__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__20__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__20__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__20__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__20__value) 
                                                >> 3U));
        __Vtemp_10 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__21__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__21__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_10;
    }
    __Vtask_tb_arbiter4__DOT__drive__22__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__22__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__22__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__22__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__22__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__23__n = __Vtask_tb_arbiter4__DOT__serve__19__tail;
    __Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__23__n)) {
        __Vtask_tb_arbiter4__DOT__drive__24__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__24__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__24__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__24__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__24__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__23__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__25__tail = 2U;
    __Vtask_tb_arbiter4__DOT__serve__25__mask = 3U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__25__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__26__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__26__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__26__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__26__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__26__value) 
                                                >> 3U));
        __Vtemp_12 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__27__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__27__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_12;
    }
    __Vtask_tb_arbiter4__DOT__drive__28__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__28__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__28__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__28__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__28__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__29__n = __Vtask_tb_arbiter4__DOT__serve__25__tail;
    __Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__29__n)) {
        __Vtask_tb_arbiter4__DOT__drive__30__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__30__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__30__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__30__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__30__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__29__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__31__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__31__mask = 5U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__31__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__32__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__32__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__32__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__32__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__32__value) 
                                                >> 3U));
        __Vtemp_14 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__33__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__33__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_14;
    }
    __Vtask_tb_arbiter4__DOT__drive__34__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__34__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__34__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__34__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__34__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__35__n = __Vtask_tb_arbiter4__DOT__serve__31__tail;
    __Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__35__n)) {
        __Vtask_tb_arbiter4__DOT__drive__36__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__36__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__36__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__36__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__36__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__35__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__37__tail = 2U;
    __Vtask_tb_arbiter4__DOT__serve__37__mask = 0xaU;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__37__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__38__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__38__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__38__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__38__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__38__value) 
                                                >> 3U));
        __Vtemp_16 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__39__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__39__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_16;
    }
    __Vtask_tb_arbiter4__DOT__drive__40__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__40__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__40__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__40__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__40__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__41__n = __Vtask_tb_arbiter4__DOT__serve__37__tail;
    __Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__41__n)) {
        __Vtask_tb_arbiter4__DOT__drive__42__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__42__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__42__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__42__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__42__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__41__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__43__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__43__mask = 7U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__43__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__44__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__44__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__44__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__44__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__44__value) 
                                                >> 3U));
        __Vtemp_18 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__45__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__45__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_18;
    }
    __Vtask_tb_arbiter4__DOT__drive__46__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__46__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__46__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__46__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__46__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__47__n = __Vtask_tb_arbiter4__DOT__serve__43__tail;
    __Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__47__n)) {
        __Vtask_tb_arbiter4__DOT__drive__48__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__48__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__48__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__48__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__48__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__47__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__49__tail = 3U;
    __Vtask_tb_arbiter4__DOT__serve__49__mask = 0xfU;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__49__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__50__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__50__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__50__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__50__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__50__value) 
                                                >> 3U));
        __Vtemp_20 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__51__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__51__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_20;
    }
    __Vtask_tb_arbiter4__DOT__drive__52__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__52__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__52__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__52__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__52__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__53__n = __Vtask_tb_arbiter4__DOT__serve__49__tail;
    __Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__53__n)) {
        __Vtask_tb_arbiter4__DOT__drive__54__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__54__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__54__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__54__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__54__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__53__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__55__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__55__mask = 0xfU;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__55__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__56__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__56__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__56__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__56__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__56__value) 
                                                >> 3U));
        __Vtemp_22 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__57__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__57__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_22;
    }
    __Vtask_tb_arbiter4__DOT__drive__58__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__58__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__58__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__58__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__58__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__59__n = __Vtask_tb_arbiter4__DOT__serve__55__tail;
    __Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__59__n)) {
        __Vtask_tb_arbiter4__DOT__drive__60__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__60__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__60__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__60__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__60__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__59__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 3U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_24 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_24;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 5U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_26 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_26;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 9U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_28 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_28;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 3U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_30 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_30;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 5U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_32 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_32;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    __Vtask_tb_arbiter4__DOT__serve__61__tail = 1U;
    __Vtask_tb_arbiter4__DOT__serve__61__mask = 9U;
    tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__61__mask;
    while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
        __Vtask_tb_arbiter4__DOT__drive__62__value 
            = tb_arbiter4__DOT__pending;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__62__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__62__value) 
                                                >> 3U));
        __Vtemp_34 = ((IData)(tb_arbiter4__DOT__pending) 
                      & (~ ([&]() {
                        __Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout 
                            = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                    }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__63__Vfuncout))));
        tb_arbiter4__DOT__pending = __Vtemp_34;
    }
    __Vtask_tb_arbiter4__DOT__drive__64__value = 0U;
    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_arbiter4.clk)", 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                       59);
    vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__64__value));
    vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 1U));
    vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 2U));
    vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__64__value) 
                                            >> 3U));
    __Vtask_tb_arbiter4__DOT__idle__65__n = __Vtask_tb_arbiter4__DOT__serve__61__tail;
    __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__65__n)) {
        __Vtask_tb_arbiter4__DOT__drive__66__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__66__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__66__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__65__unnamedblk1__DOT__i);
    }
    if (tb_arbiter4__DOT__stress) {
        __Vtask_tb_arbiter4__DOT__pulse__67__mask = 0xfU;
        __Vtask_tb_arbiter4__DOT__drive__68__value 
            = __Vtask_tb_arbiter4__DOT__pulse__67__mask;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__68__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__68__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__68__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__68__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__drive__69__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__69__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__69__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__69__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__69__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__pulse__70__mask = 6U;
        __Vtask_tb_arbiter4__DOT__drive__71__value 
            = __Vtask_tb_arbiter4__DOT__pulse__70__mask;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__71__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__71__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__71__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__71__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__drive__72__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__72__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__72__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__72__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__72__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__drive__73__value = 0xfU;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__73__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__73__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__73__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__73__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__reset_pulse__74__n = 1U;
        __Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i = 0U;
        while ((__Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i 
                < __Vtask_tb_arbiter4__DOT__reset_pulse__74__n)) {
            co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_arbiter4.clk)", 
                                                               "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                               72);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                               73);
            vlSelf->tb_arbiter4__DOT__rst_n = 0U;
            vlSelf->tb_arbiter4__DOT__req0 = 0U;
            vlSelf->tb_arbiter4__DOT__req1 = 0U;
            vlSelf->tb_arbiter4__DOT__req2 = 0U;
            vlSelf->tb_arbiter4__DOT__req3 = 0U;
            __Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__reset_pulse__74__unnamedblk2__DOT__i);
        }
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           77);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           78);
        vlSelf->tb_arbiter4__DOT__rst_n = 1U;
        tb_arbiter4__DOT__pending = 0U;
    }
    while ((vlSelf->tb_arbiter4__DOT__sampled < vlSelf->tb_arbiter4__DOT__cycles)) {
        if (tb_arbiter4__DOT__stress) {
            if ((1U | (((0U == (3U & ([&]() {
                                            tb_arbiter4__DOT__lfsr 
                                                = ((IData)(0x3039U) 
                                                   + 
                                                   ((IData)(0x41c64e6dU) 
                                                    * tb_arbiter4__DOT__lfsr));
                                            __Vfunc_tb_arbiter4__DOT__rnd__75__Vfuncout 
                                                = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                        }(), __Vfunc_tb_arbiter4__DOT__rnd__75__Vfuncout))) 
                        | (1U == (3U & ([&]() {
                                            tb_arbiter4__DOT__lfsr 
                                                = ((IData)(0x3039U) 
                                                   + 
                                                   ((IData)(0x41c64e6dU) 
                                                    * tb_arbiter4__DOT__lfsr));
                                            __Vfunc_tb_arbiter4__DOT__rnd__76__Vfuncout 
                                                = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                        }(), __Vfunc_tb_arbiter4__DOT__rnd__76__Vfuncout)))) 
                       | (2U == (3U & ([&]() {
                                        tb_arbiter4__DOT__lfsr 
                                            = ((IData)(0x3039U) 
                                               + ((IData)(0x41c64e6dU) 
                                                  * tb_arbiter4__DOT__lfsr));
                                        __Vfunc_tb_arbiter4__DOT__rnd__77__Vfuncout 
                                            = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                    }(), __Vfunc_tb_arbiter4__DOT__rnd__77__Vfuncout)))))) {
                if ((0U == (3U & ([&]() {
                                    tb_arbiter4__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_arbiter4__DOT__lfsr));
                                    __Vfunc_tb_arbiter4__DOT__rnd__78__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_arbiter4__DOT__rnd__78__Vfuncout)))) {
                    __Vtask_tb_arbiter4__DOT__pulse__79__mask 
                        = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), 
                                                (3U 
                                                 & ([&]() {
                                        tb_arbiter4__DOT__lfsr 
                                            = ((IData)(0x3039U) 
                                               + ((IData)(0x41c64e6dU) 
                                                  * tb_arbiter4__DOT__lfsr));
                                        __Vfunc_tb_arbiter4__DOT__rnd__80__Vfuncout 
                                            = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                    }(), __Vfunc_tb_arbiter4__DOT__rnd__80__Vfuncout))));
                    __Vtask_tb_arbiter4__DOT__drive__81__value 
                        = __Vtask_tb_arbiter4__DOT__pulse__79__mask;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__81__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__81__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__81__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__81__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__drive__82__value = 0U;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__82__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__82__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__82__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__82__value) 
                                 >> 3U));
                } else if ((1U == (3U & ([&]() {
                                    tb_arbiter4__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_arbiter4__DOT__lfsr));
                                    __Vfunc_tb_arbiter4__DOT__rnd__83__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_arbiter4__DOT__rnd__83__Vfuncout)))) {
                    __Vtask_tb_arbiter4__DOT__pulse__84__mask 
                        = (0xfU & ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__85__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__85__Vfuncout));
                    __Vtask_tb_arbiter4__DOT__drive__86__value 
                        = __Vtask_tb_arbiter4__DOT__pulse__84__mask;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__86__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__86__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__86__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__86__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__drive__87__value = 0U;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__87__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__87__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__87__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__87__value) 
                                 >> 3U));
                } else if ((2U == (3U & ([&]() {
                                    tb_arbiter4__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_arbiter4__DOT__lfsr));
                                    __Vfunc_tb_arbiter4__DOT__rnd__88__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_arbiter4__DOT__rnd__88__Vfuncout)))) {
                    __Vtask_tb_arbiter4__DOT__drive__89__value 
                        = (0xfU & ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__90__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__90__Vfuncout));
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__89__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__89__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__89__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__89__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__reset_pulse__91__n 
                        = ((IData)(1U) + (1U & ([&]() {
                                    tb_arbiter4__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_arbiter4__DOT__lfsr));
                                    __Vfunc_tb_arbiter4__DOT__rnd__92__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_arbiter4__DOT__rnd__92__Vfuncout)));
                    __Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i = 0U;
                    while ((__Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i 
                            < __Vtask_tb_arbiter4__DOT__reset_pulse__91__n)) {
                        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge tb_arbiter4.clk)", 
                                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                           72);
                        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                           nullptr, 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           73);
                        vlSelf->tb_arbiter4__DOT__rst_n = 0U;
                        vlSelf->tb_arbiter4__DOT__req0 = 0U;
                        vlSelf->tb_arbiter4__DOT__req1 = 0U;
                        vlSelf->tb_arbiter4__DOT__req2 = 0U;
                        vlSelf->tb_arbiter4__DOT__req3 = 0U;
                        __Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__reset_pulse__91__unnamedblk2__DOT__i);
                    }
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       77);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       78);
                    vlSelf->tb_arbiter4__DOT__rst_n = 1U;
                    tb_arbiter4__DOT__pending = 0U;
                } else {
                    __Vtask_tb_arbiter4__DOT__drive__93__value = 0xfU;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__93__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__93__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__93__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__93__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__drive__94__value = 0xfU;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__94__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__94__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__94__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__94__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__drive__95__value = 0U;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__95__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__95__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__95__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__95__value) 
                                 >> 3U));
                }
            }
        } else {
            if ((0U == VL_MODDIV_III(32, ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__96__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__96__Vfuncout), (IData)(7U)))) {
                __Vtask_tb_arbiter4__DOT__reset_pulse__97__n 
                    = ((IData)(1U) + (1U & ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__98__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__98__Vfuncout)));
                __Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i = 0U;
                while ((__Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i 
                        < __Vtask_tb_arbiter4__DOT__reset_pulse__97__n)) {
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       72);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       73);
                    vlSelf->tb_arbiter4__DOT__rst_n = 0U;
                    vlSelf->tb_arbiter4__DOT__req0 = 0U;
                    vlSelf->tb_arbiter4__DOT__req1 = 0U;
                    vlSelf->tb_arbiter4__DOT__req2 = 0U;
                    vlSelf->tb_arbiter4__DOT__req3 = 0U;
                    __Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__reset_pulse__97__unnamedblk2__DOT__i);
                }
                co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_arbiter4.clk)", 
                                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                   77);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                   78);
                vlSelf->tb_arbiter4__DOT__rst_n = 1U;
                tb_arbiter4__DOT__pending = 0U;
                __Vtask_tb_arbiter4__DOT__idle__99__n 
                    = ((IData)(1U) + VL_MODDIV_III(32, 
                                                   ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__100__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__100__Vfuncout), (IData)(3U)));
                __Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i = 0U;
                while ((__Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i 
                        < __Vtask_tb_arbiter4__DOT__idle__99__n)) {
                    __Vtask_tb_arbiter4__DOT__drive__101__value = 0U;
                    co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_arbiter4.clk)", 
                                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                       58);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                       59);
                    vlSelf->tb_arbiter4__DOT__req0 
                        = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__101__value));
                    vlSelf->tb_arbiter4__DOT__req1 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__101__value) 
                                 >> 1U));
                    vlSelf->tb_arbiter4__DOT__req2 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__101__value) 
                                 >> 2U));
                    vlSelf->tb_arbiter4__DOT__req3 
                        = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__101__value) 
                                 >> 3U));
                    __Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__99__unnamedblk1__DOT__i);
                }
            }
            __Vtask_tb_arbiter4__DOT__serve__102__tail 
                = (3U & ([&]() {
                        tb_arbiter4__DOT__lfsr = ((IData)(0x3039U) 
                                                  + 
                                                  ((IData)(0x41c64e6dU) 
                                                   * tb_arbiter4__DOT__lfsr));
                        __Vfunc_tb_arbiter4__DOT__rnd__103__Vfuncout 
                            = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                    }(), __Vfunc_tb_arbiter4__DOT__rnd__103__Vfuncout));
            __Vtask_tb_arbiter4__DOT__serve__102__mask 
                = (0xfU & ((IData)(1U) + VL_MODDIV_III(32, 
                                                       ([&]() {
                                tb_arbiter4__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_arbiter4__DOT__lfsr));
                                __Vfunc_tb_arbiter4__DOT__rnd__104__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_arbiter4__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_arbiter4__DOT__rnd__104__Vfuncout), (IData)(0xfU))));
            tb_arbiter4__DOT__pending = __Vtask_tb_arbiter4__DOT__serve__102__mask;
            while ((0U != (IData)(tb_arbiter4__DOT__pending))) {
                __Vtask_tb_arbiter4__DOT__drive__105__value 
                    = tb_arbiter4__DOT__pending;
                co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_arbiter4.clk)", 
                                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                   58);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                   59);
                vlSelf->tb_arbiter4__DOT__req0 = (1U 
                                                  & (IData)(__Vtask_tb_arbiter4__DOT__drive__105__value));
                vlSelf->tb_arbiter4__DOT__req1 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__105__value) 
                                                     >> 1U));
                vlSelf->tb_arbiter4__DOT__req2 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__105__value) 
                                                     >> 2U));
                vlSelf->tb_arbiter4__DOT__req3 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__105__value) 
                                                     >> 3U));
                __Vtemp_55 = ((IData)(tb_arbiter4__DOT__pending) 
                              & (~ ([&]() {
                                __Vfunc_tb_arbiter4__DOT__granted__106__Vfuncout 
                                    = (((IData)(vlSelf->tb_arbiter4__DOT__gnt3) 
                                        << 3U) | (((IData)(vlSelf->tb_arbiter4__DOT__gnt2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_arbiter4__DOT__gnt1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_arbiter4__DOT__gnt0))));
                            }(), (IData)(__Vfunc_tb_arbiter4__DOT__granted__106__Vfuncout))));
                tb_arbiter4__DOT__pending = __Vtemp_55;
            }
            __Vtask_tb_arbiter4__DOT__drive__107__value = 0U;
            co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_arbiter4.clk)", 
                                                               "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                               59);
            vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__107__value));
            vlSelf->tb_arbiter4__DOT__req1 = (1U & 
                                              ((IData)(__Vtask_tb_arbiter4__DOT__drive__107__value) 
                                               >> 1U));
            vlSelf->tb_arbiter4__DOT__req2 = (1U & 
                                              ((IData)(__Vtask_tb_arbiter4__DOT__drive__107__value) 
                                               >> 2U));
            vlSelf->tb_arbiter4__DOT__req3 = (1U & 
                                              ((IData)(__Vtask_tb_arbiter4__DOT__drive__107__value) 
                                               >> 3U));
            __Vtask_tb_arbiter4__DOT__idle__108__n 
                = __Vtask_tb_arbiter4__DOT__serve__102__tail;
            __Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i = 0U;
            while ((__Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i 
                    < __Vtask_tb_arbiter4__DOT__idle__108__n)) {
                __Vtask_tb_arbiter4__DOT__drive__109__value = 0U;
                co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge tb_arbiter4.clk)", 
                                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                                   58);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                   59);
                vlSelf->tb_arbiter4__DOT__req0 = (1U 
                                                  & (IData)(__Vtask_tb_arbiter4__DOT__drive__109__value));
                vlSelf->tb_arbiter4__DOT__req1 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__109__value) 
                                                     >> 1U));
                vlSelf->tb_arbiter4__DOT__req2 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__109__value) 
                                                     >> 2U));
                vlSelf->tb_arbiter4__DOT__req3 = (1U 
                                                  & ((IData)(__Vtask_tb_arbiter4__DOT__drive__109__value) 
                                                     >> 3U));
                __Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__108__unnamedblk1__DOT__i);
            }
        }
    }
    __Vtask_tb_arbiter4__DOT__idle__110__n = 2U;
    __Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i 
            < __Vtask_tb_arbiter4__DOT__idle__110__n)) {
        __Vtask_tb_arbiter4__DOT__drive__111__value = 0U;
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           59);
        vlSelf->tb_arbiter4__DOT__req0 = (1U & (IData)(__Vtask_tb_arbiter4__DOT__drive__111__value));
        vlSelf->tb_arbiter4__DOT__req1 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__111__value) 
                                                >> 1U));
        vlSelf->tb_arbiter4__DOT__req2 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__111__value) 
                                                >> 2U));
        vlSelf->tb_arbiter4__DOT__req3 = (1U & ((IData)(__Vtask_tb_arbiter4__DOT__drive__111__value) 
                                                >> 3U));
        __Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_arbiter4__DOT__idle__110__unnamedblk1__DOT__i);
    }
    VL_FCLOSE_I(vlSelf->tb_arbiter4__DOT__fd); VL_FINISH_MT("/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 164, "");
}

VL_INLINE_OPT VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__1(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hee9636a4__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_arbiter4.clk)", 
                                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                                           169);
        co_await vlSelf->__VdlySched.delay(0x1f40ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           170);
        if (VL_UNLIKELY((vlSelf->tb_arbiter4__DOT__sampled 
                         < vlSelf->tb_arbiter4__DOT__cycles))) {
            VL_FWRITEF(vlSelf->tb_arbiter4__DOT__fd,"%0#,%0#,%0#,%0#,%0#,%0#,%0#,%0#,%0#,%0#,%0#\n",
                       1,vlSelf->tb_arbiter4__DOT__rst_n,
                       1,(IData)(vlSelf->tb_arbiter4__DOT__req0),
                       1,vlSelf->tb_arbiter4__DOT__req1,
                       1,(IData)(vlSelf->tb_arbiter4__DOT__req2),
                       1,vlSelf->tb_arbiter4__DOT__req3,
                       1,(IData)(vlSelf->tb_arbiter4__DOT__gnt0),
                       1,vlSelf->tb_arbiter4__DOT__gnt1,
                       1,(IData)(vlSelf->tb_arbiter4__DOT__gnt2),
                       1,vlSelf->tb_arbiter4__DOT__gnt3,
                       1,(IData)(vlSelf->tb_arbiter4__DOT__gnt_valid),
                       2,vlSelf->tb_arbiter4__DOT__gnt_id);
            vlSelf->tb_arbiter4__DOT__sampled = ((IData)(1U) 
                                                 + vlSelf->tb_arbiter4__DOT__sampled);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__2(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 
                                           40);
        vlSelf->tb_arbiter4__DOT__clk = (1U & (~ (IData)(vlSelf->tb_arbiter4__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_arbiter4___024root___act_comb__TOP__0(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___act_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->tb_arbiter4__DOT__dut__DOT__req = (((IData)(vlSelf->tb_arbiter4__DOT__req3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_arbiter4__DOT__req2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_arbiter4__DOT__req1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_arbiter4__DOT__req0))));
    vlSelf->tb_arbiter4__DOT__dut__DOT__winner = vlSelf->tb_arbiter4__DOT__dut__DOT__pointer;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    {
        while ((4U > tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate 
                = (3U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__pointer) 
                         + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i));
            if ((1U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__req) 
                       >> (IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate)))) {
                vlSelf->tb_arbiter4__DOT__dut__DOT__winner 
                    = vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate;
                goto __Vlabel1;
            }
            tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
}

void Vtb_arbiter4___024root___eval_act(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_arbiter4___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h0ada650b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h65f75dd9_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h171d64e5_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h2f85f368_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_hbf1c8db9_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h5c1a01a7_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h651d43d6_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_arbiter4__ConstPool__TABLE_h0219fcde_0;

VL_INLINE_OPT void Vtb_arbiter4___024root___nba_sequent__TOP__0(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__winner) 
                     << 2U) | (((IData)((0U != (IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__req))) 
                                << 1U) | (IData)(vlSelf->tb_arbiter4__DOT__rst_n)));
    vlSelf->tb_arbiter4__DOT__gnt_valid = Vtb_arbiter4__ConstPool__TABLE_h0ada650b_0
        [__Vtableidx1];
    vlSelf->tb_arbiter4__DOT__gnt_id = Vtb_arbiter4__ConstPool__TABLE_h65f75dd9_0
        [__Vtableidx1];
    vlSelf->tb_arbiter4__DOT__gnt0 = Vtb_arbiter4__ConstPool__TABLE_h171d64e5_0
        [__Vtableidx1];
    vlSelf->tb_arbiter4__DOT__gnt1 = Vtb_arbiter4__ConstPool__TABLE_h2f85f368_0
        [__Vtableidx1];
    vlSelf->tb_arbiter4__DOT__gnt2 = Vtb_arbiter4__ConstPool__TABLE_hbf1c8db9_0
        [__Vtableidx1];
    vlSelf->tb_arbiter4__DOT__gnt3 = Vtb_arbiter4__ConstPool__TABLE_h5c1a01a7_0
        [__Vtableidx1];
    if ((0x40U & Vtb_arbiter4__ConstPool__TABLE_h651d43d6_0
         [__Vtableidx1])) {
        vlSelf->tb_arbiter4__DOT__dut__DOT__pointer 
            = Vtb_arbiter4__ConstPool__TABLE_h0219fcde_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void Vtb_arbiter4___024root___nba_comb__TOP__0(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->tb_arbiter4__DOT__dut__DOT__req = (((IData)(vlSelf->tb_arbiter4__DOT__req3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_arbiter4__DOT__req2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_arbiter4__DOT__req1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_arbiter4__DOT__req0))));
    vlSelf->tb_arbiter4__DOT__dut__DOT__winner = vlSelf->tb_arbiter4__DOT__dut__DOT__pointer;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    {
        while ((4U > tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate 
                = (3U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__pointer) 
                         + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i));
            if ((1U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__req) 
                       >> (IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate)))) {
                vlSelf->tb_arbiter4__DOT__dut__DOT__winner 
                    = vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate;
                goto __Vlabel2;
            }
            tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
}

void Vtb_arbiter4___024root___eval_nba(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_arbiter4___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_arbiter4___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_arbiter4___024root___timing_resume(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hee9636a4__0.resume("@(posedge tb_arbiter4.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_arbiter4___024root___timing_commit(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hee9636a4__0.commit("@(posedge tb_arbiter4.clk)");
    }
}

void Vtb_arbiter4___024root___eval_triggers__act(Vtb_arbiter4___024root* vlSelf);

bool Vtb_arbiter4___024root___eval_phase__act(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_arbiter4___024root___eval_triggers__act(vlSelf);
    Vtb_arbiter4___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_arbiter4___024root___timing_resume(vlSelf);
        Vtb_arbiter4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_arbiter4___024root___eval_phase__nba(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_arbiter4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__nba(Vtb_arbiter4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__act(Vtb_arbiter4___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_arbiter4___024root___eval(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_arbiter4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 24, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_arbiter4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 24, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_arbiter4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_arbiter4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_arbiter4___024root___eval_debug_assertions(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
