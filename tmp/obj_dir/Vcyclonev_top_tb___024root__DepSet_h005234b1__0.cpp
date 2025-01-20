// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcyclonev_top_tb.h for the primary calling header

#include "Vcyclonev_top_tb__pch.h"
#include "Vcyclonev_top_tb___024root.h"

void Vcyclonev_top_tb___024root___ico_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf);

void Vcyclonev_top_tb___024root___eval_ico(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcyclonev_top_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcyclonev_top_tb___024root___ico_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vcyclonev_top_tb___024root___eval_triggers__ico(Vcyclonev_top_tb___024root* vlSelf);

bool Vcyclonev_top_tb___024root___eval_phase__ico(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcyclonev_top_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcyclonev_top_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcyclonev_top_tb___024root___eval_act(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vcyclonev_top_tb___024root___nba_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf);

void Vcyclonev_top_tb___024root___eval_nba(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcyclonev_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<SData/*12:0*/, 128> Vcyclonev_top_tb__ConstPool__TABLE_h1310cbbc_0;

VL_INLINE_OPT void Vcyclonev_top_tb___024root___nba_sequent__TOP__0(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0;
    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0;
    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 = 0;
    CData/*0:0*/ __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 = 0;
    CData/*7:0*/ __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0;
    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0;
    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 = 0;
    CData/*0:0*/ __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 = 0;
    CData/*7:0*/ __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0;
    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0;
    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 = 0;
    CData/*0:0*/ __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 = 0;
    CData/*7:0*/ __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0;
    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0;
    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 = 0;
    CData/*0:0*/ __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 = 0;
    IData/*31:0*/ __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0;
    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0;
    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 = 0;
    // Body
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 = 0U;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 = 0U;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 = 0U;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 = 0U;
    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 = 0U;
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1 
        = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1;
    if (vlSelfRef.clk_en) {
        if ((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                   & (~ (IData)((0U != (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                        >> 0xeU))))))) {
            if ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer))) {
                if ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask))) {
                    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 
                        = (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                    >> 8U));
                    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 
                        = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                    >> 2U));
                    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0 = 1U;
                }
                if ((8U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask))) {
                    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 
                        = (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                           >> 0x18U);
                    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 
                        = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                    >> 2U));
                    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0 = 1U;
                }
                if ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask))) {
                    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 
                        = (0xffU & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out);
                    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 
                        = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                    >> 2U));
                    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0 = 1U;
                }
                if ((4U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask))) {
                    __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 
                        = (0xffU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                    >> 0x10U));
                    __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 
                        = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                    >> 2U));
                    __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0 = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                          >> 1U)))) {
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0 
                    = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0
                    [(0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                               >> 2U))];
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1 
                    = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1
                    [(0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                               >> 2U))];
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2 
                    = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2
                    [(0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                               >> 2U))];
                vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3 
                    = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3
                    [(0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                               >> 2U))];
            }
        }
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom
                [(0xffU & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_address)];
        }
    }
    if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
        if ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))) {
            __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in;
            __VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer;
            __VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0 = 1U;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer;
        }
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer 
            = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
                        >> 0x14U));
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer 
            = (0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 
                        >> 0xfU));
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer 
            = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory
            [(0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 
                       >> 0xfU))];
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer 
            = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory
            [(0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
                       >> 0x14U))];
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag 
            = (1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer));
    }
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst = 1U;
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0 
        = vlSelfRef.sync_rst;
    if ((1U & (~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst)))) {
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2;
        }
        if (vlSelfRef.clk_en) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer;
        }
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer 
                = (0x3fffffffU & ((IData)(1U) + vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer));
        }
        if (vlSelfRef.clk_en) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer 
                = (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                   >> 0xcU);
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer 
                = (7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                         >> 0xcU));
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer 
                = (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                            >> 7U));
        }
    }
    if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__led_reg = 0U;
    } else if (vlSelfRef.clk_en) {
        if ((((0x1000U == (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                           >> 2U)) & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer)) 
             & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                >> 1U))) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__led_reg 
                = ((0x30000U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                << 8U)) | ((0xff00U 
                                            & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                               >> 8U)) 
                                           | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                              >> 0x18U)));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst)))) {
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer;
        }
    }
    if (__VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[__VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0] 
            = __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory__v0;
    }
    if (__VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[__VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0] 
            = __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram0__v0;
    }
    if (__VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[__VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0] 
            = __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram1__v0;
    }
    if (__VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[__VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0] 
            = __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram2__v0;
    }
    if (__VdlySet__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[__VdlyDim0__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0] 
            = __VdlyVal__cyclonev_top_tb__DOT__toplevel__DOT__data_ram3__v0;
    }
    vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 = ((0xff0000U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                       >> 8U)) 
                                                   | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                                      >> 0x18U)));
    if ((1U & (~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst) 
                  | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp))))) {
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc;
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in;
        }
    }
    if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer = 0U;
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer = 0U;
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc = 0x3fffffffU;
    } else {
        if (vlSelfRef.clk_en) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer 
                = (7U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                         >> 2U));
        }
        if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer 
                = (0x1fU & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                            >> 8U));
            vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc 
                = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_address;
        }
    }
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
        = ((0U != (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                   >> 0xeU)) ? 0U : (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3) 
                                      << 0x18U) | (
                                                   ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0)))));
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
    if (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst) 
         | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp))) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer = 0U;
    } else if (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req) {
        vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer 
            = vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word;
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
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
        = ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
            << 0x18U) | vlSelfRef.__VdfgRegularize_hd87f99a1_3_0);
    __Vtableidx1 = (0x7fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                             >> 0x18U));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word 
        = Vcyclonev_top_tb__ConstPool__TABLE_h1310cbbc_0
        [__Vtableidx1];
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst 
        = (1U & ((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst)) 
                 | ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0) 
                    & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1))));
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
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode 
        = (1U & (((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                  & ((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                         >> 2U)) & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                    >> 0xdU))) | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5)));
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b 
        = ((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))
            ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm
            : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2);
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
    vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a)) 
                             + ((QData)((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b 
                                                 ^ 
                                                 (- (IData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode)))))) 
                                + (QData)((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode)))));
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

void Vcyclonev_top_tb___024root___eval_triggers__act(Vcyclonev_top_tb___024root* vlSelf);

bool Vcyclonev_top_tb___024root___eval_phase__act(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcyclonev_top_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcyclonev_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcyclonev_top_tb___024root___eval_phase__nba(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcyclonev_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__ico(Vcyclonev_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__nba(Vcyclonev_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcyclonev_top_tb___024root___dump_triggers__act(Vcyclonev_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcyclonev_top_tb___024root___eval(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcyclonev_top_tb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/cyclonev_top_tb.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcyclonev_top_tb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcyclonev_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/cyclonev_top_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcyclonev_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/../rtl/testbench/cyclonev_top_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcyclonev_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcyclonev_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcyclonev_top_tb___024root___eval_debug_assertions(Vcyclonev_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.clk_en & 0xfeU))) {
        Verilated::overWidthError("clk_en");}
    if (VL_UNLIKELY((vlSelfRef.sync_rst & 0xfeU))) {
        Verilated::overWidthError("sync_rst");}
}
#endif  // VL_DEBUG
