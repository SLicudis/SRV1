// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcyclonev_top_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcyclonev_top_tb::Vcyclonev_top_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcyclonev_top_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clk_en{vlSymsp->TOP.clk_en}
    , sync_rst{vlSymsp->TOP.sync_rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcyclonev_top_tb::Vcyclonev_top_tb(const char* _vcname__)
    : Vcyclonev_top_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcyclonev_top_tb::~Vcyclonev_top_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcyclonev_top_tb___024root___eval_debug_assertions(Vcyclonev_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcyclonev_top_tb___024root___eval_static(Vcyclonev_top_tb___024root* vlSelf);
void Vcyclonev_top_tb___024root___eval_initial(Vcyclonev_top_tb___024root* vlSelf);
void Vcyclonev_top_tb___024root___eval_settle(Vcyclonev_top_tb___024root* vlSelf);
void Vcyclonev_top_tb___024root___eval(Vcyclonev_top_tb___024root* vlSelf);

void Vcyclonev_top_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcyclonev_top_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcyclonev_top_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcyclonev_top_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcyclonev_top_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcyclonev_top_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcyclonev_top_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcyclonev_top_tb::eventsPending() { return false; }

uint64_t Vcyclonev_top_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcyclonev_top_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcyclonev_top_tb___024root___eval_final(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vcyclonev_top_tb::final() {
    Vcyclonev_top_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcyclonev_top_tb::hierName() const { return vlSymsp->name(); }
const char* Vcyclonev_top_tb::modelName() const { return "Vcyclonev_top_tb"; }
unsigned Vcyclonev_top_tb::threads() const { return 1; }
void Vcyclonev_top_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcyclonev_top_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcyclonev_top_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcyclonev_top_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcyclonev_top_tb___024root__trace_init_top(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcyclonev_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcyclonev_top_tb___024root*>(voidSelf);
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcyclonev_top_tb___024root__trace_decl_types(tracep);
    Vcyclonev_top_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_register(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcyclonev_top_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcyclonev_top_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcyclonev_top_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
