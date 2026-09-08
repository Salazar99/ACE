// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_sync.h for the primary calling header

#include "Vtb_fifo_sync__pch.h"
#include "Vtb_fifo_sync___024root.h"

VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_sync___024root* vlSelf);
VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_sync___024root* vlSelf);
VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_sync___024root* vlSelf);

void Vtb_fifo_sync___024root___eval_initial(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial\n"); );
    // Body
    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0 
        = vlSelf->tb_fifo_sync__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ tb_fifo_sync__DOT__stress;
    tb_fifo_sync__DOT__stress = 0;
    IData/*31:0*/ tb_fifo_sync__DOT__lfsr;
    tb_fifo_sync__DOT__lfsr = 0;
    CData/*7:0*/ tb_fifo_sync__DOT__payload;
    tb_fifo_sync__DOT__payload = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__0__n;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__0__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__1__data;
    __Vtask_tb_fifo_sync__DOT__push__1__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__2__w;
    __Vtask_tb_fifo_sync__DOT__step__2__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__2__r;
    __Vtask_tb_fifo_sync__DOT__step__2__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__2__data;
    __Vtask_tb_fifo_sync__DOT__step__2__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__3__w;
    __Vtask_tb_fifo_sync__DOT__step__3__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__3__r;
    __Vtask_tb_fifo_sync__DOT__step__3__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__3__data;
    __Vtask_tb_fifo_sync__DOT__step__3__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__5__w;
    __Vtask_tb_fifo_sync__DOT__step__5__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__5__r;
    __Vtask_tb_fifo_sync__DOT__step__5__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__5__data;
    __Vtask_tb_fifo_sync__DOT__step__5__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__6__w;
    __Vtask_tb_fifo_sync__DOT__step__6__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__6__r;
    __Vtask_tb_fifo_sync__DOT__step__6__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__6__data;
    __Vtask_tb_fifo_sync__DOT__step__6__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__7__n;
    __Vtask_tb_fifo_sync__DOT__idle__7__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__8__w;
    __Vtask_tb_fifo_sync__DOT__step__8__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__8__r;
    __Vtask_tb_fifo_sync__DOT__step__8__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__8__data;
    __Vtask_tb_fifo_sync__DOT__step__8__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__10__w;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__10__r;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__11__w;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__11__r;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__12__n;
    __Vtask_tb_fifo_sync__DOT__idle__12__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__13__w;
    __Vtask_tb_fifo_sync__DOT__step__13__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__13__r;
    __Vtask_tb_fifo_sync__DOT__step__13__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__13__data;
    __Vtask_tb_fifo_sync__DOT__step__13__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__15__w;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__15__r;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__16__w;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__16__r;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__17__n;
    __Vtask_tb_fifo_sync__DOT__idle__17__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__18__w;
    __Vtask_tb_fifo_sync__DOT__step__18__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__18__r;
    __Vtask_tb_fifo_sync__DOT__step__18__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__18__data;
    __Vtask_tb_fifo_sync__DOT__step__18__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__19__data;
    __Vtask_tb_fifo_sync__DOT__push__19__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__20__w;
    __Vtask_tb_fifo_sync__DOT__step__20__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__20__r;
    __Vtask_tb_fifo_sync__DOT__step__20__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__20__data;
    __Vtask_tb_fifo_sync__DOT__step__20__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__21__w;
    __Vtask_tb_fifo_sync__DOT__step__21__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__21__r;
    __Vtask_tb_fifo_sync__DOT__step__21__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__21__data;
    __Vtask_tb_fifo_sync__DOT__step__21__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__22__data;
    __Vtask_tb_fifo_sync__DOT__push__22__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__23__w;
    __Vtask_tb_fifo_sync__DOT__step__23__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__23__r;
    __Vtask_tb_fifo_sync__DOT__step__23__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__23__data;
    __Vtask_tb_fifo_sync__DOT__step__23__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__24__w;
    __Vtask_tb_fifo_sync__DOT__step__24__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__24__r;
    __Vtask_tb_fifo_sync__DOT__step__24__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__24__data;
    __Vtask_tb_fifo_sync__DOT__step__24__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push_pop__25__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__25__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__26__w;
    __Vtask_tb_fifo_sync__DOT__step__26__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__26__r;
    __Vtask_tb_fifo_sync__DOT__step__26__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__26__data;
    __Vtask_tb_fifo_sync__DOT__step__26__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__27__w;
    __Vtask_tb_fifo_sync__DOT__step__27__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__27__r;
    __Vtask_tb_fifo_sync__DOT__step__27__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__27__data;
    __Vtask_tb_fifo_sync__DOT__step__27__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push_pop__28__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__28__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__29__w;
    __Vtask_tb_fifo_sync__DOT__step__29__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__29__r;
    __Vtask_tb_fifo_sync__DOT__step__29__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__29__data;
    __Vtask_tb_fifo_sync__DOT__step__29__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__30__w;
    __Vtask_tb_fifo_sync__DOT__step__30__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__30__r;
    __Vtask_tb_fifo_sync__DOT__step__30__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__30__data;
    __Vtask_tb_fifo_sync__DOT__step__30__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__32__w;
    __Vtask_tb_fifo_sync__DOT__step__32__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__32__r;
    __Vtask_tb_fifo_sync__DOT__step__32__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__32__data;
    __Vtask_tb_fifo_sync__DOT__step__32__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__33__w;
    __Vtask_tb_fifo_sync__DOT__step__33__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__33__r;
    __Vtask_tb_fifo_sync__DOT__step__33__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__33__data;
    __Vtask_tb_fifo_sync__DOT__step__33__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__35__w;
    __Vtask_tb_fifo_sync__DOT__step__35__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__35__r;
    __Vtask_tb_fifo_sync__DOT__step__35__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__35__data;
    __Vtask_tb_fifo_sync__DOT__step__35__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__36__w;
    __Vtask_tb_fifo_sync__DOT__step__36__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__36__r;
    __Vtask_tb_fifo_sync__DOT__step__36__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__36__data;
    __Vtask_tb_fifo_sync__DOT__step__36__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__37__n;
    __Vtask_tb_fifo_sync__DOT__idle__37__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__38__w;
    __Vtask_tb_fifo_sync__DOT__step__38__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__38__r;
    __Vtask_tb_fifo_sync__DOT__step__38__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__38__data;
    __Vtask_tb_fifo_sync__DOT__step__38__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__push__39__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__40__w;
    __Vtask_tb_fifo_sync__DOT__step__40__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__40__r;
    __Vtask_tb_fifo_sync__DOT__step__40__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__40__data;
    __Vtask_tb_fifo_sync__DOT__step__40__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__41__w;
    __Vtask_tb_fifo_sync__DOT__step__41__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__41__r;
    __Vtask_tb_fifo_sync__DOT__step__41__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__41__data;
    __Vtask_tb_fifo_sync__DOT__step__41__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__42__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__43__w;
    __Vtask_tb_fifo_sync__DOT__step__43__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__43__r;
    __Vtask_tb_fifo_sync__DOT__step__43__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__43__data;
    __Vtask_tb_fifo_sync__DOT__step__43__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__44__w;
    __Vtask_tb_fifo_sync__DOT__step__44__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__44__r;
    __Vtask_tb_fifo_sync__DOT__step__44__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__44__data;
    __Vtask_tb_fifo_sync__DOT__step__44__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__46__w;
    __Vtask_tb_fifo_sync__DOT__step__46__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__46__r;
    __Vtask_tb_fifo_sync__DOT__step__46__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__46__data;
    __Vtask_tb_fifo_sync__DOT__step__46__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__47__w;
    __Vtask_tb_fifo_sync__DOT__step__47__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__47__r;
    __Vtask_tb_fifo_sync__DOT__step__47__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__47__data;
    __Vtask_tb_fifo_sync__DOT__step__47__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__48__n;
    __Vtask_tb_fifo_sync__DOT__idle__48__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__49__w;
    __Vtask_tb_fifo_sync__DOT__step__49__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__49__r;
    __Vtask_tb_fifo_sync__DOT__step__49__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__49__data;
    __Vtask_tb_fifo_sync__DOT__step__49__data = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__50__data;
    __Vtask_tb_fifo_sync__DOT__push__50__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__51__w;
    __Vtask_tb_fifo_sync__DOT__step__51__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__51__r;
    __Vtask_tb_fifo_sync__DOT__step__51__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__51__data;
    __Vtask_tb_fifo_sync__DOT__step__51__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__52__w;
    __Vtask_tb_fifo_sync__DOT__step__52__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__52__r;
    __Vtask_tb_fifo_sync__DOT__step__52__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__52__data;
    __Vtask_tb_fifo_sync__DOT__step__52__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__53__w;
    __Vtask_tb_fifo_sync__DOT__step__53__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__53__r;
    __Vtask_tb_fifo_sync__DOT__step__53__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__53__data;
    __Vtask_tb_fifo_sync__DOT__step__53__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__54__w;
    __Vtask_tb_fifo_sync__DOT__step__54__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__54__r;
    __Vtask_tb_fifo_sync__DOT__step__54__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__54__data;
    __Vtask_tb_fifo_sync__DOT__step__54__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__56__w;
    __Vtask_tb_fifo_sync__DOT__step__56__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__56__r;
    __Vtask_tb_fifo_sync__DOT__step__56__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__56__data;
    __Vtask_tb_fifo_sync__DOT__step__56__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__57__w;
    __Vtask_tb_fifo_sync__DOT__step__57__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__57__r;
    __Vtask_tb_fifo_sync__DOT__step__57__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__57__data;
    __Vtask_tb_fifo_sync__DOT__step__57__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__58__w;
    __Vtask_tb_fifo_sync__DOT__step__58__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__58__r;
    __Vtask_tb_fifo_sync__DOT__step__58__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__58__data;
    __Vtask_tb_fifo_sync__DOT__step__58__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__59__w;
    __Vtask_tb_fifo_sync__DOT__step__59__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__59__r;
    __Vtask_tb_fifo_sync__DOT__step__59__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__59__data;
    __Vtask_tb_fifo_sync__DOT__step__59__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__60__w;
    __Vtask_tb_fifo_sync__DOT__step__60__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__60__r;
    __Vtask_tb_fifo_sync__DOT__step__60__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__60__data;
    __Vtask_tb_fifo_sync__DOT__step__60__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__61__n;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__61__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__62__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__63__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__64__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__65__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__66__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__66__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__67__w;
    __Vtask_tb_fifo_sync__DOT__step__67__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__67__r;
    __Vtask_tb_fifo_sync__DOT__step__67__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__67__data;
    __Vtask_tb_fifo_sync__DOT__step__67__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__68__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__69__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__70__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__70__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__71__w;
    __Vtask_tb_fifo_sync__DOT__step__71__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__71__r;
    __Vtask_tb_fifo_sync__DOT__step__71__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__71__data;
    __Vtask_tb_fifo_sync__DOT__step__71__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__72__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__73__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__74__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__75__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__75__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__76__w;
    __Vtask_tb_fifo_sync__DOT__step__76__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__76__r;
    __Vtask_tb_fifo_sync__DOT__step__76__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__76__data;
    __Vtask_tb_fifo_sync__DOT__step__76__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__78__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__78__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__79__w;
    __Vtask_tb_fifo_sync__DOT__step__79__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__79__r;
    __Vtask_tb_fifo_sync__DOT__step__79__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__79__data;
    __Vtask_tb_fifo_sync__DOT__step__79__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__81__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__81__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__82__w;
    __Vtask_tb_fifo_sync__DOT__step__82__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__82__r;
    __Vtask_tb_fifo_sync__DOT__step__82__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__82__data;
    __Vtask_tb_fifo_sync__DOT__step__82__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__83__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__83__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__84__n;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__84__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__85__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__85__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__86__w;
    __Vtask_tb_fifo_sync__DOT__step__86__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__86__r;
    __Vtask_tb_fifo_sync__DOT__step__86__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__86__data;
    __Vtask_tb_fifo_sync__DOT__step__86__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__87__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__87__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__88__w;
    __Vtask_tb_fifo_sync__DOT__step__88__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__88__r;
    __Vtask_tb_fifo_sync__DOT__step__88__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__88__data;
    __Vtask_tb_fifo_sync__DOT__step__88__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__89__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__90__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__90__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__91__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__92__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__93__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__94__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__95__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__95__Vfuncout = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__96__data;
    __Vtask_tb_fifo_sync__DOT__push__96__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__97__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__97__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__98__w;
    __Vtask_tb_fifo_sync__DOT__step__98__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__98__r;
    __Vtask_tb_fifo_sync__DOT__step__98__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__98__data;
    __Vtask_tb_fifo_sync__DOT__step__98__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__99__w;
    __Vtask_tb_fifo_sync__DOT__step__99__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__99__r;
    __Vtask_tb_fifo_sync__DOT__step__99__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__99__data;
    __Vtask_tb_fifo_sync__DOT__step__99__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__100__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__100__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__102__w;
    __Vtask_tb_fifo_sync__DOT__step__102__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__102__r;
    __Vtask_tb_fifo_sync__DOT__step__102__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__102__data;
    __Vtask_tb_fifo_sync__DOT__step__102__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__103__w;
    __Vtask_tb_fifo_sync__DOT__step__103__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__103__r;
    __Vtask_tb_fifo_sync__DOT__step__103__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__103__data;
    __Vtask_tb_fifo_sync__DOT__step__103__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__104__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__104__Vfuncout = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push_pop__105__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__105__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__106__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__106__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__107__w;
    __Vtask_tb_fifo_sync__DOT__step__107__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__107__r;
    __Vtask_tb_fifo_sync__DOT__step__107__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__107__data;
    __Vtask_tb_fifo_sync__DOT__step__107__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__108__w;
    __Vtask_tb_fifo_sync__DOT__step__108__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__108__r;
    __Vtask_tb_fifo_sync__DOT__step__108__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__108__data;
    __Vtask_tb_fifo_sync__DOT__step__108__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__109__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__109__Vfuncout = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__push__110__data;
    __Vtask_tb_fifo_sync__DOT__push__110__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__112__w;
    __Vtask_tb_fifo_sync__DOT__step__112__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__112__r;
    __Vtask_tb_fifo_sync__DOT__step__112__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__112__data;
    __Vtask_tb_fifo_sync__DOT__step__112__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__113__w;
    __Vtask_tb_fifo_sync__DOT__step__113__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__113__r;
    __Vtask_tb_fifo_sync__DOT__step__113__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__113__data;
    __Vtask_tb_fifo_sync__DOT__step__113__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__114__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__114__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__116__w;
    __Vtask_tb_fifo_sync__DOT__step__116__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__116__r;
    __Vtask_tb_fifo_sync__DOT__step__116__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__116__data;
    __Vtask_tb_fifo_sync__DOT__step__116__data = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__117__w;
    __Vtask_tb_fifo_sync__DOT__step__117__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__117__r;
    __Vtask_tb_fifo_sync__DOT__step__117__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__117__data;
    __Vtask_tb_fifo_sync__DOT__step__117__data = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__118__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__118__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__119__n;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__119__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__120__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__120__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__121__n;
    __Vtask_tb_fifo_sync__DOT__idle__121__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_sync__DOT__rnd__122__Vfuncout;
    __Vfunc_tb_fifo_sync__DOT__rnd__122__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__123__w;
    __Vtask_tb_fifo_sync__DOT__step__123__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__123__r;
    __Vtask_tb_fifo_sync__DOT__step__123__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__123__data;
    __Vtask_tb_fifo_sync__DOT__step__123__data = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__124__n;
    __Vtask_tb_fifo_sync__DOT__idle__124__n = 0;
    IData/*31:0*/ __Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__125__w;
    __Vtask_tb_fifo_sync__DOT__step__125__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo_sync__DOT__step__125__r;
    __Vtask_tb_fifo_sync__DOT__step__125__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo_sync__DOT__step__125__data;
    __Vtask_tb_fifo_sync__DOT__step__125__data = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"seed=%d"}, 
                                vlSelf->tb_fifo_sync__DOT__seed))) {
        vlSelf->tb_fifo_sync__DOT__seed = 1U;
    }
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x63U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->tb_fifo_sync__DOT__cycles))) {
        vlSelf->tb_fifo_sync__DOT__cycles = 0x4b0U;
    }
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"out=%s"}, 
                                vlSelf->tb_fifo_sync__DOT__out))) {
        vlSelf->tb_fifo_sync__DOT__out = std::string{"trace.csv"};
    }
    __Vtemp_2[0U] = 0x6f3d2573U;
    __Vtemp_2[1U] = 0x6e617269U;
    __Vtemp_2[2U] = 0x736365U;
    if ((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                                vlSelf->tb_fifo_sync__DOT__scenario))) {
        vlSelf->tb_fifo_sync__DOT__scenario = std::string{"nominal"};
    }
    tb_fifo_sync__DOT__stress = (std::string{"stress"} 
                                 == vlSelf->tb_fifo_sync__DOT__scenario);
    tb_fifo_sync__DOT__lfsr = ((IData)(1U) + ((IData)(0x9e3779b1U) 
                                              * vlSelf->tb_fifo_sync__DOT__seed));
    vlSelf->tb_fifo_sync__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->tb_fifo_sync__DOT__out)
                                                , std::string{"w"});
    ;
    VL_FWRITEF(vlSelf->tb_fifo_sync__DOT__fd,"bool rst_n,bool wr_en,bool rd_en,int din,int dout,bool full,bool empty,int count\n");
    vlSelf->tb_fifo_sync__DOT__rst_n = 0U;
    vlSelf->tb_fifo_sync__DOT__wr_en = 0U;
    vlSelf->tb_fifo_sync__DOT__rd_en = 0U;
    vlSelf->tb_fifo_sync__DOT__din = 0U;
    tb_fifo_sync__DOT__payload = 0U;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__0__n = 2U;
    __Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__reset_pulse__0__n)) {
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           82);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           83);
        vlSelf->tb_fifo_sync__DOT__rst_n = 0U;
        vlSelf->tb_fifo_sync__DOT__wr_en = 0U;
        vlSelf->tb_fifo_sync__DOT__rd_en = 0U;
        __Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__reset_pulse__0__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       88);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       89);
    vlSelf->tb_fifo_sync__DOT__rst_n = 1U;
    __Vtask_tb_fifo_sync__DOT__push__1__data = 0x2aU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__1__data;
    __Vtask_tb_fifo_sync__DOT__step__2__data = __Vtask_tb_fifo_sync__DOT__push__1__data;
    __Vtask_tb_fifo_sync__DOT__step__2__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__2__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__2__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__2__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__2__data;
    __Vtask_tb_fifo_sync__DOT__step__3__data = __Vtask_tb_fifo_sync__DOT__push__1__data;
    __Vtask_tb_fifo_sync__DOT__step__3__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__3__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__3__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__3__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__3__data;
    __Vtask_tb_fifo_sync__DOT__step__5__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__5__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__5__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__5__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__5__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__5__data;
    __Vtask_tb_fifo_sync__DOT__step__6__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__6__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__6__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__6__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__6__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__6__data;
    __Vtask_tb_fifo_sync__DOT__idle__7__n = 2U;
    __Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__7__n)) {
        __Vtask_tb_fifo_sync__DOT__step__8__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__8__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__8__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__8__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__8__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__8__data;
        __Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__7__unnamedblk1__DOT__i);
    }
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xaU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xbU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xcU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xdU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xeU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0xfU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0x10U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__push__9__data = 0x11U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__10__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__10__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__10__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__10__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__10__data;
    __Vtask_tb_fifo_sync__DOT__step__11__data = __Vtask_tb_fifo_sync__DOT__push__9__data;
    __Vtask_tb_fifo_sync__DOT__step__11__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__11__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__11__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__11__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__11__data;
    __Vtask_tb_fifo_sync__DOT__idle__12__n = 2U;
    __Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__12__n)) {
        __Vtask_tb_fifo_sync__DOT__step__13__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__13__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__13__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__13__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__13__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__13__data;
        __Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__12__unnamedblk1__DOT__i);
    }
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__step__15__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__15__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__15__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__15__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__15__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__15__data;
    __Vtask_tb_fifo_sync__DOT__step__16__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__16__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__16__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__16__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__16__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__16__data;
    __Vtask_tb_fifo_sync__DOT__idle__17__n = 2U;
    __Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__17__n)) {
        __Vtask_tb_fifo_sync__DOT__step__18__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__18__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__18__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__18__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__18__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__18__data;
        __Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__17__unnamedblk1__DOT__i);
    }
    __Vtask_tb_fifo_sync__DOT__push__19__data = 0xffU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__19__data;
    __Vtask_tb_fifo_sync__DOT__step__20__data = __Vtask_tb_fifo_sync__DOT__push__19__data;
    __Vtask_tb_fifo_sync__DOT__step__20__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__20__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__20__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__20__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__20__data;
    __Vtask_tb_fifo_sync__DOT__step__21__data = __Vtask_tb_fifo_sync__DOT__push__19__data;
    __Vtask_tb_fifo_sync__DOT__step__21__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__21__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__21__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__21__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__21__data;
    __Vtask_tb_fifo_sync__DOT__push__22__data = 0U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__22__data;
    __Vtask_tb_fifo_sync__DOT__step__23__data = __Vtask_tb_fifo_sync__DOT__push__22__data;
    __Vtask_tb_fifo_sync__DOT__step__23__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__23__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__23__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__23__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__23__data;
    __Vtask_tb_fifo_sync__DOT__step__24__data = __Vtask_tb_fifo_sync__DOT__push__22__data;
    __Vtask_tb_fifo_sync__DOT__step__24__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__24__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__24__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__24__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__24__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__25__data = 0x80U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__25__data;
    __Vtask_tb_fifo_sync__DOT__step__26__data = __Vtask_tb_fifo_sync__DOT__push_pop__25__data;
    __Vtask_tb_fifo_sync__DOT__step__26__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__26__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__26__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__26__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__26__data;
    __Vtask_tb_fifo_sync__DOT__step__27__data = __Vtask_tb_fifo_sync__DOT__push_pop__25__data;
    __Vtask_tb_fifo_sync__DOT__step__27__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__27__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__27__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__27__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__27__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__28__data = 7U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__28__data;
    __Vtask_tb_fifo_sync__DOT__step__29__data = __Vtask_tb_fifo_sync__DOT__push_pop__28__data;
    __Vtask_tb_fifo_sync__DOT__step__29__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__29__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__29__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__29__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__29__data;
    __Vtask_tb_fifo_sync__DOT__step__30__data = __Vtask_tb_fifo_sync__DOT__push_pop__28__data;
    __Vtask_tb_fifo_sync__DOT__step__30__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__30__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__30__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__30__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__30__data;
    __Vtask_tb_fifo_sync__DOT__step__32__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__32__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__32__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__32__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__32__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__32__data;
    __Vtask_tb_fifo_sync__DOT__step__33__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__33__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__33__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__33__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__33__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__33__data;
    __Vtask_tb_fifo_sync__DOT__step__35__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__35__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__35__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__35__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__35__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__35__data;
    __Vtask_tb_fifo_sync__DOT__step__36__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__36__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__36__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__36__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__36__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__36__data;
    __Vtask_tb_fifo_sync__DOT__idle__37__n = 3U;
    __Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__37__n)) {
        __Vtask_tb_fifo_sync__DOT__step__38__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__38__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__38__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__38__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__38__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__38__data;
        __Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__37__unnamedblk1__DOT__i);
    }
    __Vtask_tb_fifo_sync__DOT__push__39__data = 0x64U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__40__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__40__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__40__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__40__data;
    __Vtask_tb_fifo_sync__DOT__step__41__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__41__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__41__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__41__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__41__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__41__data;
    __Vtask_tb_fifo_sync__DOT__push__39__data = 0x65U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__40__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__40__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__40__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__40__data;
    __Vtask_tb_fifo_sync__DOT__step__41__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__41__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__41__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__41__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__41__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__41__data;
    __Vtask_tb_fifo_sync__DOT__push__39__data = 0x66U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__40__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__40__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__40__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__40__data;
    __Vtask_tb_fifo_sync__DOT__step__41__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__41__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__41__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__41__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__41__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__41__data;
    __Vtask_tb_fifo_sync__DOT__push__39__data = 0x67U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__40__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__40__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__40__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__40__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__40__data;
    __Vtask_tb_fifo_sync__DOT__step__41__data = __Vtask_tb_fifo_sync__DOT__push__39__data;
    __Vtask_tb_fifo_sync__DOT__step__41__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__41__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__41__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__41__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__41__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__42__data = 0xc8U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__43__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__43__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__43__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__43__data;
    __Vtask_tb_fifo_sync__DOT__step__44__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__44__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__44__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__44__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__44__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__44__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__42__data = 0xc9U;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__43__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__43__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__43__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__43__data;
    __Vtask_tb_fifo_sync__DOT__step__44__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__44__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__44__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__44__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__44__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__44__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__42__data = 0xcaU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__43__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__43__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__43__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__43__data;
    __Vtask_tb_fifo_sync__DOT__step__44__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__44__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__44__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__44__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__44__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__44__data;
    __Vtask_tb_fifo_sync__DOT__push_pop__42__data = 0xcbU;
    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__43__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__43__w = 1U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__43__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__43__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__43__data;
    __Vtask_tb_fifo_sync__DOT__step__44__data = __Vtask_tb_fifo_sync__DOT__push_pop__42__data;
    __Vtask_tb_fifo_sync__DOT__step__44__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__44__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__44__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__44__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__44__data;
    __Vtask_tb_fifo_sync__DOT__step__46__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__46__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__46__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__46__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__46__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__46__data;
    __Vtask_tb_fifo_sync__DOT__step__47__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__47__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__47__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__47__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__47__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__47__data;
    __Vtask_tb_fifo_sync__DOT__step__46__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__46__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__46__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__46__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__46__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__46__data;
    __Vtask_tb_fifo_sync__DOT__step__47__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__47__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__47__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__47__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__47__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__47__data;
    __Vtask_tb_fifo_sync__DOT__step__46__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__46__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__46__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__46__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__46__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__46__data;
    __Vtask_tb_fifo_sync__DOT__step__47__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__47__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__47__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__47__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__47__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__47__data;
    __Vtask_tb_fifo_sync__DOT__step__46__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__46__r = 1U;
    __Vtask_tb_fifo_sync__DOT__step__46__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__46__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__46__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__46__data;
    __Vtask_tb_fifo_sync__DOT__step__47__data = tb_fifo_sync__DOT__payload;
    __Vtask_tb_fifo_sync__DOT__step__47__r = 0U;
    __Vtask_tb_fifo_sync__DOT__step__47__w = 0U;
    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fifo_sync.clk)", 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       51);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                       52);
    vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__47__w;
    vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__47__r;
    vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__47__data;
    __Vtask_tb_fifo_sync__DOT__idle__48__n = 2U;
    __Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__48__n)) {
        __Vtask_tb_fifo_sync__DOT__step__49__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__49__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__49__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__49__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__49__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__49__data;
        __Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__48__unnamedblk1__DOT__i);
    }
    if (tb_fifo_sync__DOT__stress) {
        __Vtask_tb_fifo_sync__DOT__push__50__data = 1U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 2U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 3U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 4U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 5U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 6U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 7U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__push__50__data = 8U;
        tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__51__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__51__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__51__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__51__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__51__data;
        __Vtask_tb_fifo_sync__DOT__step__52__data = __Vtask_tb_fifo_sync__DOT__push__50__data;
        __Vtask_tb_fifo_sync__DOT__step__52__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__52__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__52__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__52__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__52__data;
        __Vtask_tb_fifo_sync__DOT__step__53__data = 0x63U;
        __Vtask_tb_fifo_sync__DOT__step__53__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__53__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__53__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__53__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__53__data;
        __Vtask_tb_fifo_sync__DOT__step__54__data = 0x62U;
        __Vtask_tb_fifo_sync__DOT__step__54__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__54__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__54__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__54__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__54__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__56__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__56__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__56__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__56__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__56__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__56__data;
        __Vtask_tb_fifo_sync__DOT__step__57__data = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__57__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__57__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__57__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__57__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__57__data;
        __Vtask_tb_fifo_sync__DOT__step__58__data = 0U;
        __Vtask_tb_fifo_sync__DOT__step__58__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__58__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__58__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__58__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__58__data;
        __Vtask_tb_fifo_sync__DOT__step__59__data = 0U;
        __Vtask_tb_fifo_sync__DOT__step__59__r = 1U;
        __Vtask_tb_fifo_sync__DOT__step__59__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__59__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__59__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__59__data;
        __Vtask_tb_fifo_sync__DOT__step__60__data = 0x4dU;
        __Vtask_tb_fifo_sync__DOT__step__60__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__60__w = 1U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__60__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__60__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__60__data;
        __Vtask_tb_fifo_sync__DOT__reset_pulse__61__n = 1U;
        __Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i = 0U;
        while ((__Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i 
                < __Vtask_tb_fifo_sync__DOT__reset_pulse__61__n)) {
            co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_fifo_sync.clk)", 
                                                               "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                               82);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                               83);
            vlSelf->tb_fifo_sync__DOT__rst_n = 0U;
            vlSelf->tb_fifo_sync__DOT__wr_en = 0U;
            vlSelf->tb_fifo_sync__DOT__rd_en = 0U;
            __Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__reset_pulse__61__unnamedblk2__DOT__i);
        }
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           88);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           89);
        vlSelf->tb_fifo_sync__DOT__rst_n = 1U;
    }
    while ((vlSelf->tb_fifo_sync__DOT__sampled < vlSelf->tb_fifo_sync__DOT__cycles)) {
        if (tb_fifo_sync__DOT__stress) {
            if ((1U | ((((0U == VL_MODDIV_III(32, ([&]() {
                                                tb_fifo_sync__DOT__lfsr 
                                                    = 
                                                    ((IData)(0x3039U) 
                                                     + 
                                                     ((IData)(0x41c64e6dU) 
                                                      * tb_fifo_sync__DOT__lfsr));
                                                __Vfunc_tb_fifo_sync__DOT__rnd__62__Vfuncout 
                                                    = 
                                                    VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__62__Vfuncout), (IData)(5U))) 
                         | (1U == VL_MODDIV_III(32, 
                                                ([&]() {
                                                tb_fifo_sync__DOT__lfsr 
                                                    = 
                                                    ((IData)(0x3039U) 
                                                     + 
                                                     ((IData)(0x41c64e6dU) 
                                                      * tb_fifo_sync__DOT__lfsr));
                                                __Vfunc_tb_fifo_sync__DOT__rnd__63__Vfuncout 
                                                    = 
                                                    VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__63__Vfuncout), (IData)(5U)))) 
                        | (2U == VL_MODDIV_III(32, 
                                               ([&]() {
                                            tb_fifo_sync__DOT__lfsr 
                                                = ((IData)(0x3039U) 
                                                   + 
                                                   ((IData)(0x41c64e6dU) 
                                                    * tb_fifo_sync__DOT__lfsr));
                                            __Vfunc_tb_fifo_sync__DOT__rnd__64__Vfuncout 
                                                = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                        }(), __Vfunc_tb_fifo_sync__DOT__rnd__64__Vfuncout), (IData)(5U)))) 
                       | (3U == VL_MODDIV_III(32, ([&]() {
                                        tb_fifo_sync__DOT__lfsr 
                                            = ((IData)(0x3039U) 
                                               + ((IData)(0x41c64e6dU) 
                                                  * tb_fifo_sync__DOT__lfsr));
                                        __Vfunc_tb_fifo_sync__DOT__rnd__65__Vfuncout 
                                            = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                    }(), __Vfunc_tb_fifo_sync__DOT__rnd__65__Vfuncout), (IData)(5U)))))) {
                if ((0U == VL_MODDIV_III(32, ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__66__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__66__Vfuncout), (IData)(5U)))) {
                    __Vtask_tb_fifo_sync__DOT__step__67__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__68__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__68__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__67__r 
                        = (1U & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__69__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__69__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__67__w 
                        = (1U & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__70__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__70__Vfuncout));
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__67__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__67__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__67__data;
                    __Vtask_tb_fifo_sync__DOT__step__71__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__72__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__72__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__71__r 
                        = (1U & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__73__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__73__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__71__w 
                        = (1U & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__74__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__74__Vfuncout));
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__71__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__71__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__71__data;
                } else if ((1U == VL_MODDIV_III(32, 
                                                ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__75__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__75__Vfuncout), (IData)(5U)))) {
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                    __Vtask_tb_fifo_sync__DOT__step__76__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__77__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__76__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__76__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__76__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__76__data;
                } else if ((2U == VL_MODDIV_III(32, 
                                                ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__78__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__78__Vfuncout), (IData)(5U)))) {
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                    __Vtask_tb_fifo_sync__DOT__step__79__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__80__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__79__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__79__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__79__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__79__data;
                } else if ((3U == VL_MODDIV_III(32, 
                                                ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__81__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__81__Vfuncout), (IData)(5U)))) {
                    __Vtask_tb_fifo_sync__DOT__step__82__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__83__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__83__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__82__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__82__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__82__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__82__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__82__data;
                    __Vtask_tb_fifo_sync__DOT__reset_pulse__84__n 
                        = ((IData)(1U) + (1U & ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__85__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__85__Vfuncout)));
                    __Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i = 0U;
                    while ((__Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i 
                            < __Vtask_tb_fifo_sync__DOT__reset_pulse__84__n)) {
                        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge tb_fifo_sync.clk)", 
                                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                           82);
                        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                           nullptr, 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           83);
                        vlSelf->tb_fifo_sync__DOT__rst_n = 0U;
                        vlSelf->tb_fifo_sync__DOT__wr_en = 0U;
                        vlSelf->tb_fifo_sync__DOT__rd_en = 0U;
                        __Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__reset_pulse__84__unnamedblk2__DOT__i);
                    }
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       88);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       89);
                    vlSelf->tb_fifo_sync__DOT__rst_n = 1U;
                } else {
                    __Vtask_tb_fifo_sync__DOT__step__86__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__87__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__87__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__86__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__86__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__86__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__86__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__86__data;
                    __Vtask_tb_fifo_sync__DOT__step__88__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__89__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__89__Vfuncout));
                    __Vtask_tb_fifo_sync__DOT__step__88__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__88__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__88__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__88__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__88__data;
                }
            }
        } else if ((1U | (((((0U == VL_MODDIV_III(32, 
                                                  ([&]() {
                                                tb_fifo_sync__DOT__lfsr 
                                                    = 
                                                    ((IData)(0x3039U) 
                                                     + 
                                                     ((IData)(0x41c64e6dU) 
                                                      * tb_fifo_sync__DOT__lfsr));
                                                __Vfunc_tb_fifo_sync__DOT__rnd__90__Vfuncout 
                                                    = 
                                                    VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__90__Vfuncout), (IData)(6U))) 
                             | (1U == VL_MODDIV_III(32, 
                                                    ([&]() {
                                                tb_fifo_sync__DOT__lfsr 
                                                    = 
                                                    ((IData)(0x3039U) 
                                                     + 
                                                     ((IData)(0x41c64e6dU) 
                                                      * tb_fifo_sync__DOT__lfsr));
                                                __Vfunc_tb_fifo_sync__DOT__rnd__91__Vfuncout 
                                                    = 
                                                    VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__91__Vfuncout), (IData)(6U)))) 
                            | (2U == VL_MODDIV_III(32, 
                                                   ([&]() {
                                            tb_fifo_sync__DOT__lfsr 
                                                = ((IData)(0x3039U) 
                                                   + 
                                                   ((IData)(0x41c64e6dU) 
                                                    * tb_fifo_sync__DOT__lfsr));
                                            __Vfunc_tb_fifo_sync__DOT__rnd__92__Vfuncout 
                                                = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                        }(), __Vfunc_tb_fifo_sync__DOT__rnd__92__Vfuncout), (IData)(6U)))) 
                           | (3U == VL_MODDIV_III(32, 
                                                  ([&]() {
                                        tb_fifo_sync__DOT__lfsr 
                                            = ((IData)(0x3039U) 
                                               + ((IData)(0x41c64e6dU) 
                                                  * tb_fifo_sync__DOT__lfsr));
                                        __Vfunc_tb_fifo_sync__DOT__rnd__93__Vfuncout 
                                            = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                    }(), __Vfunc_tb_fifo_sync__DOT__rnd__93__Vfuncout), (IData)(6U)))) 
                          | (4U == VL_MODDIV_III(32, 
                                                 ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__94__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__94__Vfuncout), (IData)(6U)))))) {
            if ((0U == VL_MODDIV_III(32, ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__95__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__95__Vfuncout), (IData)(6U)))) {
                if ((8U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__push__96__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__97__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__97__Vfuncout));
                    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__96__data;
                    __Vtask_tb_fifo_sync__DOT__step__98__data 
                        = __Vtask_tb_fifo_sync__DOT__push__96__data;
                    __Vtask_tb_fifo_sync__DOT__step__98__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__98__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__98__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__98__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__98__data;
                    __Vtask_tb_fifo_sync__DOT__step__99__data 
                        = __Vtask_tb_fifo_sync__DOT__push__96__data;
                    __Vtask_tb_fifo_sync__DOT__step__99__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__99__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__99__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__99__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__99__data;
                }
            } else if ((1U == VL_MODDIV_III(32, ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__100__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__100__Vfuncout), (IData)(6U)))) {
                if ((0U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__step__102__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__102__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__102__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__102__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__102__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__102__data;
                    __Vtask_tb_fifo_sync__DOT__step__103__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__103__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__103__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__103__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__103__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__103__data;
                }
            } else if ((2U == VL_MODDIV_III(32, ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__104__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__104__Vfuncout), (IData)(6U)))) {
                if (((0U != (IData)(vlSelf->tb_fifo_sync__DOT__count)) 
                     & (8U != (IData)(vlSelf->tb_fifo_sync__DOT__count)))) {
                    __Vtask_tb_fifo_sync__DOT__push_pop__105__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__106__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__106__Vfuncout));
                    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push_pop__105__data;
                    __Vtask_tb_fifo_sync__DOT__step__107__data 
                        = __Vtask_tb_fifo_sync__DOT__push_pop__105__data;
                    __Vtask_tb_fifo_sync__DOT__step__107__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__107__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__107__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__107__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__107__data;
                    __Vtask_tb_fifo_sync__DOT__step__108__data 
                        = __Vtask_tb_fifo_sync__DOT__push_pop__105__data;
                    __Vtask_tb_fifo_sync__DOT__step__108__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__108__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__108__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__108__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__108__data;
                }
            } else if ((3U == VL_MODDIV_III(32, ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__109__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__109__Vfuncout), (IData)(6U)))) {
                if ((8U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__push__110__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout));
                    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__112__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__112__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__113__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__113__data;
                }
                if ((8U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__push__110__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout));
                    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__112__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__112__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__113__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__113__data;
                }
                if ((8U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__push__110__data 
                        = (0xffU & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__111__Vfuncout));
                    tb_fifo_sync__DOT__payload = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__112__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__112__w = 1U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__112__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__112__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__data 
                        = __Vtask_tb_fifo_sync__DOT__push__110__data;
                    __Vtask_tb_fifo_sync__DOT__step__113__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__113__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__113__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__113__data;
                }
            } else if ((4U == VL_MODDIV_III(32, ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__114__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__114__Vfuncout), (IData)(6U)))) {
                if ((0U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__step__116__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__116__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__116__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__116__data;
                    __Vtask_tb_fifo_sync__DOT__step__117__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__117__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__117__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__117__data;
                }
                if ((0U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__step__116__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__116__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__116__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__116__data;
                    __Vtask_tb_fifo_sync__DOT__step__117__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__117__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__117__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__117__data;
                }
                if ((0U != (IData)(vlSelf->tb_fifo_sync__DOT__count))) {
                    __Vtask_tb_fifo_sync__DOT__step__116__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__116__r = 1U;
                    __Vtask_tb_fifo_sync__DOT__step__116__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__116__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__116__data;
                    __Vtask_tb_fifo_sync__DOT__step__117__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__117__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__117__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__117__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__117__data;
                }
            } else {
                if ((0U == (3U & ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__118__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__118__Vfuncout)))) {
                    __Vtask_tb_fifo_sync__DOT__reset_pulse__119__n 
                        = ((IData)(1U) + (1U & ([&]() {
                                    tb_fifo_sync__DOT__lfsr 
                                        = ((IData)(0x3039U) 
                                           + ((IData)(0x41c64e6dU) 
                                              * tb_fifo_sync__DOT__lfsr));
                                    __Vfunc_tb_fifo_sync__DOT__rnd__120__Vfuncout 
                                        = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                                }(), __Vfunc_tb_fifo_sync__DOT__rnd__120__Vfuncout)));
                    __Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i = 0U;
                    while ((__Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i 
                            < __Vtask_tb_fifo_sync__DOT__reset_pulse__119__n)) {
                        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge tb_fifo_sync.clk)", 
                                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                           82);
                        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                           nullptr, 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           83);
                        vlSelf->tb_fifo_sync__DOT__rst_n = 0U;
                        vlSelf->tb_fifo_sync__DOT__wr_en = 0U;
                        vlSelf->tb_fifo_sync__DOT__rd_en = 0U;
                        __Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__reset_pulse__119__unnamedblk2__DOT__i);
                    }
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       88);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       89);
                    vlSelf->tb_fifo_sync__DOT__rst_n = 1U;
                }
                __Vtask_tb_fifo_sync__DOT__idle__121__n 
                    = ((IData)(1U) + (3U & ([&]() {
                                tb_fifo_sync__DOT__lfsr 
                                    = ((IData)(0x3039U) 
                                       + ((IData)(0x41c64e6dU) 
                                          * tb_fifo_sync__DOT__lfsr));
                                __Vfunc_tb_fifo_sync__DOT__rnd__122__Vfuncout 
                                    = VL_SHIFTR_III(32,32,32, tb_fifo_sync__DOT__lfsr, 0x10U);
                            }(), __Vfunc_tb_fifo_sync__DOT__rnd__122__Vfuncout)));
                __Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i = 0U;
                while ((__Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i 
                        < __Vtask_tb_fifo_sync__DOT__idle__121__n)) {
                    __Vtask_tb_fifo_sync__DOT__step__123__data 
                        = tb_fifo_sync__DOT__payload;
                    __Vtask_tb_fifo_sync__DOT__step__123__r = 0U;
                    __Vtask_tb_fifo_sync__DOT__step__123__w = 0U;
                    co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge tb_fifo_sync.clk)", 
                                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                                       51);
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                       52);
                    vlSelf->tb_fifo_sync__DOT__wr_en 
                        = __Vtask_tb_fifo_sync__DOT__step__123__w;
                    vlSelf->tb_fifo_sync__DOT__rd_en 
                        = __Vtask_tb_fifo_sync__DOT__step__123__r;
                    vlSelf->tb_fifo_sync__DOT__din 
                        = __Vtask_tb_fifo_sync__DOT__step__123__data;
                    __Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__121__unnamedblk1__DOT__i);
                }
            }
        }
    }
    __Vtask_tb_fifo_sync__DOT__idle__124__n = 2U;
    __Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i 
            < __Vtask_tb_fifo_sync__DOT__idle__124__n)) {
        __Vtask_tb_fifo_sync__DOT__step__125__data 
            = tb_fifo_sync__DOT__payload;
        __Vtask_tb_fifo_sync__DOT__step__125__r = 0U;
        __Vtask_tb_fifo_sync__DOT__step__125__w = 0U;
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           51);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           52);
        vlSelf->tb_fifo_sync__DOT__wr_en = __Vtask_tb_fifo_sync__DOT__step__125__w;
        vlSelf->tb_fifo_sync__DOT__rd_en = __Vtask_tb_fifo_sync__DOT__step__125__r;
        vlSelf->tb_fifo_sync__DOT__din = __Vtask_tb_fifo_sync__DOT__step__125__data;
        __Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_sync__DOT__idle__124__unnamedblk1__DOT__i);
    }
    VL_FCLOSE_I(vlSelf->tb_fifo_sync__DOT__fd); VL_FINISH_MT("/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 178, "");
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h4e81690b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fifo_sync.clk)", 
                                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                                           183);
        co_await vlSelf->__VdlySched.delay(0x1f40ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           184);
        if (VL_UNLIKELY((vlSelf->tb_fifo_sync__DOT__sampled 
                         < vlSelf->tb_fifo_sync__DOT__cycles))) {
            VL_FWRITEF(vlSelf->tb_fifo_sync__DOT__fd,"%0#,%0#,%0#,%0#,%0#,%0#,%0#,%0#\n",
                       1,vlSelf->tb_fifo_sync__DOT__rst_n,
                       1,(IData)(vlSelf->tb_fifo_sync__DOT__wr_en),
                       1,vlSelf->tb_fifo_sync__DOT__rd_en,
                       8,(IData)(vlSelf->tb_fifo_sync__DOT__din),
                       8,vlSelf->tb_fifo_sync__DOT__dut__DOT__mem
                       [vlSelf->tb_fifo_sync__DOT__dut__DOT__rd_ptr],
                       1,(8U == (IData)(vlSelf->tb_fifo_sync__DOT__count)),
                       1,(0U == (IData)(vlSelf->tb_fifo_sync__DOT__count)),
                       4,(IData)(vlSelf->tb_fifo_sync__DOT__count));
            vlSelf->tb_fifo_sync__DOT__sampled = ((IData)(1U) 
                                                  + vlSelf->tb_fifo_sync__DOT__sampled);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 
                                           37);
        vlSelf->tb_fifo_sync__DOT__clk = (1U & (~ (IData)(vlSelf->tb_fifo_sync__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_fifo_sync___024root___act_comb__TOP__0(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo_sync__DOT__dut__DOT__push = ((8U 
                                                  != (IData)(vlSelf->tb_fifo_sync__DOT__count)) 
                                                 & (IData)(vlSelf->tb_fifo_sync__DOT__wr_en));
    vlSelf->tb_fifo_sync__DOT__dut__DOT__pop = ((0U 
                                                 != (IData)(vlSelf->tb_fifo_sync__DOT__count)) 
                                                & (IData)(vlSelf->tb_fifo_sync__DOT__rd_en));
}

void Vtb_fifo_sync___024root___eval_act(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fifo_sync___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fifo_sync___024root___nba_sequent__TOP__0(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __Vdlyvval__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    __Vdlyvset__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSelf->tb_fifo_sync__DOT__rst_n) {
        if (vlSelf->tb_fifo_sync__DOT__dut__DOT__pop) {
            vlSelf->tb_fifo_sync__DOT__dut__DOT__rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__rd_ptr)));
        }
        if (vlSelf->tb_fifo_sync__DOT__dut__DOT__push) {
            __Vdlyvval__tb_fifo_sync__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_fifo_sync__DOT__din;
            __Vdlyvset__tb_fifo_sync__DOT__dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_fifo_sync__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_fifo_sync__DOT__dut__DOT__wr_ptr;
            vlSelf->tb_fifo_sync__DOT__dut__DOT__wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__wr_ptr)));
        }
        vlSelf->tb_fifo_sync__DOT__count = (0xfU & 
                                            ((2U == 
                                              (((IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__push) 
                                                << 1U) 
                                               | (IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__pop)))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSelf->tb_fifo_sync__DOT__count))
                                              : ((1U 
                                                  == 
                                                  (((IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__push) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->tb_fifo_sync__DOT__dut__DOT__pop)))
                                                  ? 
                                                 ((IData)(vlSelf->tb_fifo_sync__DOT__count) 
                                                  - (IData)(1U))
                                                  : (IData)(vlSelf->tb_fifo_sync__DOT__count))));
    } else {
        vlSelf->tb_fifo_sync__DOT__dut__DOT__rd_ptr = 0U;
        vlSelf->tb_fifo_sync__DOT__dut__DOT__wr_ptr = 0U;
        vlSelf->tb_fifo_sync__DOT__count = 0U;
    }
    if (__Vdlyvset__tb_fifo_sync__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_fifo_sync__DOT__dut__DOT__mem[__Vdlyvdim0__tb_fifo_sync__DOT__dut__DOT__mem__v0] 
            = __Vdlyvval__tb_fifo_sync__DOT__dut__DOT__mem__v0;
    }
}

void Vtb_fifo_sync___024root___eval_nba(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo_sync___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo_sync___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_fifo_sync___024root___timing_resume(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4e81690b__0.resume("@(posedge tb_fifo_sync.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fifo_sync___024root___timing_commit(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4e81690b__0.commit("@(posedge tb_fifo_sync.clk)");
    }
}

void Vtb_fifo_sync___024root___eval_triggers__act(Vtb_fifo_sync___024root* vlSelf);

bool Vtb_fifo_sync___024root___eval_phase__act(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo_sync___024root___eval_triggers__act(vlSelf);
    Vtb_fifo_sync___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_fifo_sync___024root___timing_resume(vlSelf);
        Vtb_fifo_sync___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fifo_sync___024root___eval_phase__nba(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fifo_sync___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__nba(Vtb_fifo_sync___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__act(Vtb_fifo_sync___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo_sync___024root___eval(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fifo_sync___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fifo_sync___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 22, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_fifo_sync___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_fifo_sync___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fifo_sync___024root___eval_debug_assertions(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
