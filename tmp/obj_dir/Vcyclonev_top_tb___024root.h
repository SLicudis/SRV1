// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcyclonev_top_tb.h for the primary calling header

#ifndef VERILATED_VCYCLONEV_TOP_TB___024ROOT_H_
#define VERILATED_VCYCLONEV_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vcyclonev_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcyclonev_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(clk_en,0,0);
        VL_IN8(sync_rst,0,0);
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__boot_rst;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__sync_rst;
        CData/*3:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask;
        CData/*7:0*/ cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0;
        CData/*7:0*/ cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1;
        CData/*7:0*/ cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2;
        CData/*7:0*/ cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__inst_req;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp;
        CData/*4:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag;
        CData/*4:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer;
        CData/*4:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer;
        CData/*4:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer;
        CData/*2:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode;
        CData/*0:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0;
        CData/*2:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer;
        CData/*4:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer;
        CData/*2:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer;
        CData/*7:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer;
        SData/*12:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word;
        SData/*15:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core_data_out;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core_data_in;
        IData/*17:0*/ cyclonev_top_tb__DOT__toplevel__DOT__led_reg;
        IData/*29:0*/ cyclonev_top_tb__DOT__toplevel__DOT__inst_address;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in;
        IData/*29:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer;
        IData/*29:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer;
        IData/*29:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift;
        IData/*19:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer;
        IData/*31:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer;
        IData/*29:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer;
        IData/*23:0*/ __VdfgRegularize_hd87f99a1_3_0;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        QData/*32:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub;
        QData/*63:0*/ cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result;
        VlUnpacked<CData/*7:0*/, 32> cyclonev_top_tb__DOT__toplevel__DOT__data_ram0;
        VlUnpacked<CData/*7:0*/, 32> cyclonev_top_tb__DOT__toplevel__DOT__data_ram1;
        VlUnpacked<CData/*7:0*/, 32> cyclonev_top_tb__DOT__toplevel__DOT__data_ram2;
        VlUnpacked<CData/*7:0*/, 32> cyclonev_top_tb__DOT__toplevel__DOT__data_ram3;
        VlUnpacked<IData/*31:0*/, 256> cyclonev_top_tb__DOT__toplevel__DOT__inst_rom;
        VlUnpacked<IData/*31:0*/, 32> cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcyclonev_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcyclonev_top_tb___024root(Vcyclonev_top_tb__Syms* symsp, const char* v__name);
    ~Vcyclonev_top_tb___024root();
    VL_UNCOPYABLE(Vcyclonev_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
