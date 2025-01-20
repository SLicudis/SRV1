// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcyclonev_top_tb__Syms.h"


VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_init_sub__TOP__0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cyclonev_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"switches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+272,0,"push_buttons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("toplevel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"async_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"switches",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+272,0,"push_buttons",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"leds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+2,0,"rst_ff0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"boot_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"clk_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"data_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+7,0,"core_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"core_data_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"data_bus_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"data_bus_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"core_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_ram0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_ram1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_ram2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_ram3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+140,0,"ram_buffer0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"ram_buffer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"ram_buffer2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"ram_buffer3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"ram_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"led_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+145,0,"readjusted_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"inst_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+271,0,"inst_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"inst_rom_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"inst_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+271,0,"inst_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"bus_lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"memory_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"data_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+8,0,"data_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"pc_to_decode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+149,0,"adjusted_inst_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"dec_inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"dec_ctr_word_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+152,0,"regfile_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regfile_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"dec_pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+155,0,"pc_target_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+156,0,"pc_jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"exe_inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"exe_ctr_word_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"exe_alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"exe_inc_pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+161,0,"exe_regfile_rs2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"exe_regfile_rs1_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"exe_regfile_rs2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+164,0,"exe_uses_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"exe_uses_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"pipeline_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"mem_inst_u_imm_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+168,0,"mem_inst_fn3_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"mem_rd_addr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+170,0,"mem_ctr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"mem_alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"mem_inc_pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+173,0,"regfile_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"regfile_destination",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+174,0,"regfile_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decode_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+156,0,"invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"regfile_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"regfile_destination",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+174,0,"regfile_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"ctr_word_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+152,0,"regfile_rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regfile_rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+150,0,"inst_out_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"ctr_word_out_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+154,0,"pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+175,0,"decoder_ctr_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->pushPrefix("instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+175,0,"ctr_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+178,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+169,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+152,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+179+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+211,0,"rs1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"rs2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"write_address_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+215,0,"written_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"rs1_address_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+217,0,"rs2_address_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+218,0,"level0_rs1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"level0_rs2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"l0_forward_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"l0_forward_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"level1_rs1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"level1_rs2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"l1_forward_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"l1_forward_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("execute_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"ctr_word_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+152,0,"regfile_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regfile_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+155,0,"pc_target_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+156,0,"pc_jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"ctr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+157,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"inc_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+161,0,"regfile_rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"exe_rs1_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"exe_rs2_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+164,0,"exe_uses_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"exe_uses_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"ctr_alu_asel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"ctr_alu_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"ctr_alu_modsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"ctr_imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+230,0,"ctr_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"ctr_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"inst_fn7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+233,0,"inst_fn3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"inst_i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"inst_s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"inst_b_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"inst_u_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"inst_j_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"ctr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+157,0,"inst_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"alu_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"inc_pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+161,0,"regfile_rs2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"alu_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"alu_mod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+243,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"alu_fn7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"int_branch_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"branch_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"fn3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+244,0,"fn7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"force_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"sub_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+249,0,"int_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+251,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"reversed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"left_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"barrel_shifter_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+255,0,"barrel_shifter_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"jmp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+148,0,"to_pipe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+146,0,"to_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+148,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+146,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"ctr_word_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"alu_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"inc_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+161,0,"regfile_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"exe_regfile_rs1_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"exe_regfile_rs2_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+164,0,"exe_uses_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"exe_uses_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+8,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"bus_lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"memory_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"inst_u_imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+168,0,"inst_fn3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"rd_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+170,0,"ctr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"inc_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+257,0,"inst_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+167,0,"inst_u_imm_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+168,0,"inst_fn3_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"rd_addr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+170,0,"ctr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"alu_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"inc_pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+258,0,"rs1_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"rs2_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("output_adj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+161,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"fn3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+261,0,"addr_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("writeback_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"ctr_word_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+168,0,"fn3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"memory_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"alu_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"inc_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+167,0,"u_type_imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+174,0,"regfile_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+262,0,"adjusted_memory_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("input_adj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"fn3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"addr_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+262,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"adj_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+265,0,"adj_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_init_top(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcyclonev_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcyclonev_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcyclonev_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_register(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcyclonev_top_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcyclonev_top_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcyclonev_top_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcyclonev_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_const_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_const_0\n"); );
    // Init
    Vcyclonev_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcyclonev_top_tb___024root*>(voidSelf);
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcyclonev_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_const_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+272,(0U),4);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_full_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_full_0\n"); );
    // Init
    Vcyclonev_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcyclonev_top_tb___024root*>(voidSelf);
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcyclonev_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcyclonev_top_tb___024root__trace_full_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__led_reg),18);
    bufp->fullBit(oldp+2,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0));
    bufp->fullBit(oldp+3,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1));
    bufp->fullBit(oldp+4,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst));
    bufp->fullBit(oldp+5,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst));
    bufp->fullIData(oldp+6,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                             >> 2U)),30);
    bufp->fullIData(oldp+7,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out),32);
    bufp->fullCData(oldp+8,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask),4);
    bufp->fullBit(oldp+9,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                                  >> 1U))));
    bufp->fullIData(oldp+11,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in),32);
    bufp->fullCData(oldp+12,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[0]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[1]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[2]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[3]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[4]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[5]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[6]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[7]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[8]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[9]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[10]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[11]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[12]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[13]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[14]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[15]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[16]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[17]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[18]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[19]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[20]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[21]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[22]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[23]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[24]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[25]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[26]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[27]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[28]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[29]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[30]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[31]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[0]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[1]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[2]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[3]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[4]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[5]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[6]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[7]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[8]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[9]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[10]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[11]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[12]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[13]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[14]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[15]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[16]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[17]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[18]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[19]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[20]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[21]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[22]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[23]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[24]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[25]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[26]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[27]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[28]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[29]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[30]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[31]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[0]),8);
    bufp->fullCData(oldp+77,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[1]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[2]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[3]),8);
    bufp->fullCData(oldp+80,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[4]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[5]),8);
    bufp->fullCData(oldp+82,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[6]),8);
    bufp->fullCData(oldp+83,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[7]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[8]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[9]),8);
    bufp->fullCData(oldp+86,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[10]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[11]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[12]),8);
    bufp->fullCData(oldp+89,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[13]),8);
    bufp->fullCData(oldp+90,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[14]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[15]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[16]),8);
    bufp->fullCData(oldp+93,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[17]),8);
    bufp->fullCData(oldp+94,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[18]),8);
    bufp->fullCData(oldp+95,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[19]),8);
    bufp->fullCData(oldp+96,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[20]),8);
    bufp->fullCData(oldp+97,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[21]),8);
    bufp->fullCData(oldp+98,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[22]),8);
    bufp->fullCData(oldp+99,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[23]),8);
    bufp->fullCData(oldp+100,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[24]),8);
    bufp->fullCData(oldp+101,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[25]),8);
    bufp->fullCData(oldp+102,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[26]),8);
    bufp->fullCData(oldp+103,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[27]),8);
    bufp->fullCData(oldp+104,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[28]),8);
    bufp->fullCData(oldp+105,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[29]),8);
    bufp->fullCData(oldp+106,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[30]),8);
    bufp->fullCData(oldp+107,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[31]),8);
    bufp->fullCData(oldp+108,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[0]),8);
    bufp->fullCData(oldp+109,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[1]),8);
    bufp->fullCData(oldp+110,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[2]),8);
    bufp->fullCData(oldp+111,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[3]),8);
    bufp->fullCData(oldp+112,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[4]),8);
    bufp->fullCData(oldp+113,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[5]),8);
    bufp->fullCData(oldp+114,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[6]),8);
    bufp->fullCData(oldp+115,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[7]),8);
    bufp->fullCData(oldp+116,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[8]),8);
    bufp->fullCData(oldp+117,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[9]),8);
    bufp->fullCData(oldp+118,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[10]),8);
    bufp->fullCData(oldp+119,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[11]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[12]),8);
    bufp->fullCData(oldp+121,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[13]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[14]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[15]),8);
    bufp->fullCData(oldp+124,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[16]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[17]),8);
    bufp->fullCData(oldp+126,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[18]),8);
    bufp->fullCData(oldp+127,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[19]),8);
    bufp->fullCData(oldp+128,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[20]),8);
    bufp->fullCData(oldp+129,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[21]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[22]),8);
    bufp->fullCData(oldp+131,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[23]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[24]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[25]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[26]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[27]),8);
    bufp->fullCData(oldp+136,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[28]),8);
    bufp->fullCData(oldp+137,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[29]),8);
    bufp->fullCData(oldp+138,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[30]),8);
    bufp->fullCData(oldp+139,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[31]),8);
    bufp->fullCData(oldp+140,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0),8);
    bufp->fullCData(oldp+141,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1),8);
    bufp->fullCData(oldp+142,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2),8);
    bufp->fullCData(oldp+143,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3),8);
    bufp->fullIData(oldp+144,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3) 
                                << 0x18U) | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2) 
                                              << 0x10U) 
                                             | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0))))),32);
    bufp->fullIData(oldp+145,(((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                    >> 8U)) 
                                                | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                   >> 0x18U))))),32);
    bufp->fullIData(oldp+146,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_address),30);
    bufp->fullIData(oldp+147,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer),32);
    bufp->fullIData(oldp+148,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc),30);
    bufp->fullIData(oldp+149,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in),32);
    bufp->fullIData(oldp+150,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer),32);
    bufp->fullSData(oldp+151,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer),13);
    bufp->fullIData(oldp+152,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1),32);
    bufp->fullIData(oldp+153,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2),32);
    bufp->fullIData(oldp+154,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer),30);
    bufp->fullIData(oldp+155,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result 
                               >> 2U)),30);
    bufp->fullBit(oldp+156,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp));
    bufp->fullIData(oldp+157,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer),32);
    bufp->fullCData(oldp+158,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer),5);
    bufp->fullIData(oldp+159,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer),32);
    bufp->fullIData(oldp+160,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer),30);
    bufp->fullIData(oldp+161,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer),32);
    bufp->fullCData(oldp+162,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+163,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+164,((IData)((1U != (0x81U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))));
    bufp->fullBit(oldp+165,((IData)((2U != (0x82U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))));
    bufp->fullBit(oldp+166,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                              >> 2U) & (((((0x1fU & 
                                            (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                  >> 0xfU))) 
                                          & (IData)(
                                                    (1U 
                                                     != 
                                                     (0x81U 
                                                      & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))) 
                                         | (((0x1fU 
                                              & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                    >> 0x14U))) 
                                            & (IData)(
                                                      (2U 
                                                       != 
                                                       (0x82U 
                                                        & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                                     >> 7U)))))));
    bufp->fullIData(oldp+167,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer),20);
    bufp->fullCData(oldp+168,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer),3);
    bufp->fullCData(oldp+169,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer),5);
    bufp->fullCData(oldp+170,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer),3);
    bufp->fullIData(oldp+171,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer),32);
    bufp->fullIData(oldp+172,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer),30);
    bufp->fullIData(oldp+173,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in),32);
    bufp->fullBit(oldp+174,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))));
    bufp->fullSData(oldp+175,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word),13);
    bufp->fullCData(oldp+176,((0x7fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                        >> 0x18U))),7);
    bufp->fullCData(oldp+177,((0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+178,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+179,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[0]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[1]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[2]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[3]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[4]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[5]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[6]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[7]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[8]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[9]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[10]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[11]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[12]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[13]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[14]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[15]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[16]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[17]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[18]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[19]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[20]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[21]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[22]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[23]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[24]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[25]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[26]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[27]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[28]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[29]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[30]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[31]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer),32);
    bufp->fullIData(oldp+212,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer),32);
    bufp->fullIData(oldp+213,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer),32);
    bufp->fullCData(oldp+214,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer),5);
    bufp->fullBit(oldp+215,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag));
    bufp->fullCData(oldp+216,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer),5);
    bufp->fullCData(oldp+217,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer),5);
    bufp->fullBit(oldp+218,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                              == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                             & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))));
    bufp->fullBit(oldp+219,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                              == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                             & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))));
    bufp->fullIData(oldp+220,(((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                 == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer)),32);
    bufp->fullIData(oldp+221,(((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                 == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer)),32);
    bufp->fullBit(oldp+222,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                             & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))));
    bufp->fullBit(oldp+223,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                             & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))));
    bufp->fullIData(oldp+224,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                   == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                                ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                                : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                     == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                    & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                    ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                    : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer))),32);
    bufp->fullIData(oldp+225,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                   == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                                ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                                : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                     == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                    & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                    ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                    : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer))),32);
    bufp->fullBit(oldp+226,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))));
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                   >> 1U))));
    bufp->fullBit(oldp+228,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                   >> 2U))));
    bufp->fullCData(oldp+229,((7U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+230,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                   >> 6U))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                   >> 7U))));
    bufp->fullCData(oldp+232,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+233,((7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+234,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+235,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+236,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+237,((0xfffff000U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer)),32);
    bufp->fullIData(oldp+238,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff800U 
                                              & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                 >> 1U)) 
                                             | (0x7feU 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+239,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm),32);
    bufp->fullIData(oldp+240,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a),32);
    bufp->fullIData(oldp+241,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b),32);
    bufp->fullCData(oldp+242,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod),3);
    bufp->fullIData(oldp+243,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result),32);
    bufp->fullBit(oldp+244,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5));
    bufp->fullBit(oldp+245,((1U & ((0U == (3U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                 >> 0xdU)))
                                    ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
                                       == vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                    : ((2U == (3U & 
                                               (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                >> 0xdU)))
                                        ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                        : ((3U == (3U 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 0xdU)))
                                            ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                            : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0xcU)))))));
    bufp->fullBit(oldp+246,((1U & (((0U == (3U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                  >> 0xdU)))
                                     ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
                                        == vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                     : ((2U == (3U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0xdU)))
                                         ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                         : ((3U == 
                                             (3U & 
                                              (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0xdU)))
                                             ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                             : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                >> 0xcU)))) 
                                   ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+247,((1U & ((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                   & ((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                          >> 2U)) & 
                                      (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                       >> 0xdU))))));
    bufp->fullBit(oldp+248,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode));
    bufp->fullQData(oldp+249,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub),33);
    bufp->fullBit(oldp+251,((1U & ((~ ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                        ^ vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b) 
                                       >> 0x1fU)) & 
                                   ((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
                                             >> 0x1fU)) 
                                    ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                       >> 0x1fU))))));
    bufp->fullIData(oldp+252,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a),32);
    bufp->fullIData(oldp+253,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift),32);
    bufp->fullIData(oldp+254,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)
                                ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a
                                : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a)),32);
    bufp->fullQData(oldp+255,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result),64);
    bufp->fullCData(oldp+257,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                        >> 7U))),5);
    bufp->fullBit(oldp+258,((((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                        >> 7U)) == 
                              (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                        >> 0xfU))) 
                             & (IData)((1U != (0x81U 
                                               & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))));
    bufp->fullBit(oldp+259,((((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                        >> 7U)) == 
                              (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                        >> 0x14U))) 
                             & (IData)((2U != (0x82U 
                                               & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))));
    bufp->fullCData(oldp+260,((7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+261,((3U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)),2);
    bufp->fullIData(oldp+262,(((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                ? ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                    ? ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                            << 8U)) 
                                        | ((0xff00U 
                                            & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                               >> 8U)) 
                                           | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                              >> 0x18U))))
                                    : ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                            << 8U)) 
                                        | ((0xff00U 
                                            & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                               >> 8U)) 
                                           | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                              >> 0x18U)))))
                                : ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                    ? (((- (IData)((IData)(
                                                           (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word) 
                                                             >> 0xfU) 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer) 
                                                                >> 2U)))))) 
                                        << 0x10U) | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word))
                                    : (((- (IData)((IData)(
                                                           (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte) 
                                                             >> 7U) 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer) 
                                                                >> 2U)))))) 
                                        << 8U) | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte))))),32);
    bufp->fullCData(oldp+263,((3U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer)),2);
    bufp->fullCData(oldp+264,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte),8);
    bufp->fullSData(oldp+265,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word),16);
    bufp->fullCData(oldp+266,((3U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))),2);
    bufp->fullBit(oldp+267,(vlSelfRef.clk));
    bufp->fullBit(oldp+268,(vlSelfRef.clk_en));
    bufp->fullBit(oldp+269,(vlSelfRef.sync_rst));
    bufp->fullSData(oldp+270,(((IData)(vlSelfRef.clk_en) 
                               << 9U)),10);
    bufp->fullBit(oldp+271,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req));
}
