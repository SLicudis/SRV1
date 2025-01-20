// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcyclonev_top_tb.h for the primary calling header

#include "Vcyclonev_top_tb__pch.h"
#include "Vcyclonev_top_tb___024root.h"

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_static__TOP(Vcyclonev_top_tb___024root* vlSelf);
VL_ATTR_COLD void Vcyclonev_top_tb___024root____Vm_traceActivitySetAll(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_static(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcyclonev_top_tb___024root___eval_static__TOP(vlSelf);
    Vcyclonev_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_static__TOP(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst = 0U;
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_initial__TOP(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_initial(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcyclonev_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_initial__TOP(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 256, 0, std::string{"/mnt/e/Programacion/SystemVerilog/RISC-V/SRV1/projects/TERASIC_Cyclone_V_GX_Starter_Kit/programs/led_counter/program.hex"}
                 ,  &(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_final(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__stl(Vcyclonev_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcyclonev_top_tb___024root___eval_phase__stl(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_settle(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcyclonev_top_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/cyclonev_top_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcyclonev_top_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__stl(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcyclonev_top_tb___024root___stl_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_stl(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcyclonev_top_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcyclonev_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<SData/*12:0*/, 128> Vcyclonev_top_tb__ConstPool__TABLE_h1310cbbc_0;

VL_ATTR_COLD void Vcyclonev_top_tb___024root___stl_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((0U == (7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                      >> 0xcU)))) {
        if ((2U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)) {
            if ((1U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)) {
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 1U;
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                    = (0xffU & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer);
            } else {
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 2U;
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                    = (0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                  << 8U));
            }
        } else if ((1U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 4U;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                = (0xff0000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                << 0x10U));
        } else {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 8U;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                = (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                   << 0x18U);
        }
    } else if ((1U == (7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                             >> 0xcU)))) {
        if ((2U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 3U;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                = ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                               << 8U)) | (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                                   >> 8U)));
        } else {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 0xcU;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                = ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                    << 0x18U) | (0xff0000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                              << 8U)));
        }
    } else if ((2U == (7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                             >> 0xcU)))) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 0xfU;
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
            = ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                << 0x18U) | ((0xff0000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                           << 8U)) 
                             | ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                            >> 8U)) 
                                | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                                   >> 0x18U))));
    } else {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = 0U;
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out = 0U;
    }
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst 
        = (1U & ((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst)) 
                 | ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0) 
                    & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1))));
    __Vtableidx1 = (0x7fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                             >> 0x18U));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word 
        = Vcyclonev_top_tb__ConstPool__TABLE_h1310cbbc_0
        [__Vtableidx1];
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req 
        = ((~ (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                >> 2U) & (((((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 0xfU))) 
                            & (IData)((1U != (0x81U 
                                              & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))) 
                           | (((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                         >> 7U)) == 
                               (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                         >> 0x14U))) 
                              & (IData)((2U != (0x82U 
                                                & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))) 
                          & (0U != (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                             >> 7U)))))) 
           & (IData)(vlSelfRef.clk_en));
    vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 = ((0xff0000U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                       >> 8U)) 
                                                   | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                      >> 0x18U)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod 
        = ((4U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
            ? 0U : (7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                          >> 0xcU)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5 
        = ((1U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                  >> 0x1eU)) && (((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                      >> 2U)) & (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 0xcU))))
                                  ? 1U : (1U & (~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                                   >> 1U)))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0 
        = (1U & ((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                     >> 2U)) & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                >> 0xeU)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm 
        = ((0x20U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
            ? ((0x10U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
                ? 0U : ((8U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
                         ? 0U : (0xfffff000U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer)))
            : ((0x10U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
                ? ((8U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
                    ? (((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff800U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                       >> 1U)) | (0x7feU 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 0x14U))))
                    : (((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 7U))))))
                : ((8U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
                    ? (((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                          >> 0x14U)))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
        = ((0U != (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                   >> 0xeU)) ? 0U : (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3) 
                                      << 0x18U) | (
                                                   ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0)))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
        = ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
            << 0x18U) | vlSelfRef.__VdfgRegularize_hd87f99a1_3_0);
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode 
        = (1U & (((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                  & ((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                         >> 2U)) & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0xdU))) | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5)));
    if ((2U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer)) {
        if ((1U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer)) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte 
                = (0xffU & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in);
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word 
                = ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                               << 8U)) | (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                   >> 8U)));
        } else {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte 
                = (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                            >> 8U));
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word 
                = ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                               << 8U)) | (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                   >> 8U)));
        }
    } else if ((1U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer)) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte 
            = (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                        >> 0x10U));
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word 
            = ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                           >> 8U)) | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                      >> 0x18U));
    } else {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte 
            = (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                        >> 0x18U));
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word 
            = ((0xff00U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                           >> 8U)) | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                      >> 0x18U));
    }
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in 
        = ((4U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))
            ? ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))
                ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer 
                   << 0xcU) : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer 
                               << 2U)) : ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))
                                           ? ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                                   ? 
                                                  ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                          << 8U)) 
                                                      | ((0xff00U 
                                                          & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                             >> 8U)) 
                                                         | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                            >> 0x18U))))
                                                   : 
                                                  ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                          << 8U)) 
                                                      | ((0xff00U 
                                                          & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                             >> 8U)) 
                                                         | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                            >> 0x18U)))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                                   ? 
                                                  (((- (IData)((IData)(
                                                                       (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word) 
                                                                         >> 0xfU) 
                                                                        & (~ 
                                                                           ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer) 
                                                                            >> 2U)))))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word))
                                                   : 
                                                  (((- (IData)((IData)(
                                                                       (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte) 
                                                                         >> 7U) 
                                                                        & (~ 
                                                                           ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer) 
                                                                            >> 2U)))))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte))))
                                           : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2 
        = ((0U == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer))
            ? 0U : (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                     & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                        == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                     ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                     : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                          == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                         & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                         ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                         : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
        = ((0U == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer))
            ? 0U : (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                     & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                        == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                     ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                     : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                          == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                         & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                         ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                         : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b 
        = ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
            ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm
            : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2);
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp 
        = (1U & (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                  >> 6U) | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                             >> 7U) & (((0U == (3U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0xdU)))
                                         ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
                                            == vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                         : ((2U == 
                                             (3U & 
                                              (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0xdU)))
                                             ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 0xdU)))
                                                 ? 
                                                VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                                 : 
                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                 >> 0xcU)))) 
                                       ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                          >> 0xcU)))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
        = ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
            ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer 
               << 2U) : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1);
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a)) 
                             + ((QData)((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b 
                                                 ^ 
                                                 (- (IData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode)))))) 
                                + (QData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode)))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a 
        = ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
        = VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)
                                                                  ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a
                                                                  : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a)))), vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b);
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift 
        = (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result) 
            << 0x1fU) | ((0x40000000U & ((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                  >> 1U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((IData)(
                                                    (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                     >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((IData)(
                                                       (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                        >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((IData)(
                                                         (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                          >> 4U)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                >> 5U)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                 >> 6U)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((IData)(
                                                     (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                      >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((IData)(
                                                        (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                         >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((IData)(
                                                           (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                            >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                               >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                  >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                     >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                        >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(
                                                                          (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                           >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(
                                                                             (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                              >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result 
        = ((4U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
            ? ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                ? ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                    ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                       & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b)
                    : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                       | vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b))
                : ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                    ? (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result)
                    : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                       ^ vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b)))
            : ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                ? ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                    ? (1U & (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
                                     >> 0x20U))) : 
                   (1U & (((~ ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                ^ vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b) 
                               >> 0x1fU)) & ((IData)(
                                                     (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
                                                      >> 0x1fU)) 
                                             ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                                >> 0x1fU))) 
                          ^ (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
                                     >> 0x1fU))))) : 
               ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod))
                 ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift
                 : (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub))));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_address 
        = (0x3fffffffU & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result, 2U)
                           : ((IData)(1U) + vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc)));
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___eval_triggers__stl(Vcyclonev_top_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcyclonev_top_tb___024root___eval_phase__stl(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcyclonev_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcyclonev_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__ico(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__act(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__nba(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcyclonev_top_tb___024root____Vm_traceActivitySetAll(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root___ctor_var_reset(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->sync_rst = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0 = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1 = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__boot_rst = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__sync_rst = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core_data_out = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask = VL_RAND_RESET_I(4);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core_data_in = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0 = VL_RAND_RESET_I(8);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1 = VL_RAND_RESET_I(8);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2 = VL_RAND_RESET_I(8);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3 = VL_RAND_RESET_I(8);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__led_reg = VL_RAND_RESET_I(18);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__inst_address = VL_RAND_RESET_I(30);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__inst_req = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__inst_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2 = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc = VL_RAND_RESET_I(30);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer = VL_RAND_RESET_I(13);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer = VL_RAND_RESET_I(30);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer = VL_RAND_RESET_I(5);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer = VL_RAND_RESET_I(5);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer = VL_RAND_RESET_I(5);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer = VL_RAND_RESET_I(5);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer = VL_RAND_RESET_I(30);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod = VL_RAND_RESET_I(3);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5 = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub = VL_RAND_RESET_Q(33);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result = VL_RAND_RESET_Q(64);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0 = VL_RAND_RESET_I(1);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer = VL_RAND_RESET_I(20);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer = VL_RAND_RESET_I(3);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer = VL_RAND_RESET_I(5);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer = VL_RAND_RESET_I(3);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer = VL_RAND_RESET_I(32);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer = VL_RAND_RESET_I(30);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte = VL_RAND_RESET_I(8);
    vlSelf->cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_hd87f99a1_3_0 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
