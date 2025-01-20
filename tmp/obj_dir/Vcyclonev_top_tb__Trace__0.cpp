// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcyclonev_top_tb__Syms.h"


void Vcyclonev_top_tb___024root__trace_chg_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcyclonev_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vcyclonev_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcyclonev_top_tb___024root*>(voidSelf);
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcyclonev_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcyclonev_top_tb___024root__trace_chg_0_sub_0(Vcyclonev_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__led_reg),18);
        bufp->chgBit(oldp+1,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff0));
        bufp->chgBit(oldp+2,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__rst_ff1));
        bufp->chgBit(oldp+3,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__boot_rst));
        bufp->chgBit(oldp+4,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__sync_rst));
        bufp->chgIData(oldp+5,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer 
                                >> 2U)),30);
        bufp->chgIData(oldp+6,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out),32);
        bufp->chgCData(oldp+7,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_mask),4);
        bufp->chgBit(oldp+8,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                                    >> 1U))));
        bufp->chgIData(oldp+10,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in),32);
        bufp->chgCData(oldp+11,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[0]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[1]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[2]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[3]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[4]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[5]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[6]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[7]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[8]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[9]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[10]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[11]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[12]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[13]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[14]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[15]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[16]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[17]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[18]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[19]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[20]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[21]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[22]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[23]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[24]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[25]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[26]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[27]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[28]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[29]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[30]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram0[31]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[0]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[1]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[2]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[3]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[4]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[5]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[6]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[7]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[8]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[9]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[10]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[11]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[12]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[13]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[14]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[15]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[16]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[17]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[18]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[19]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[20]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[21]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[22]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[23]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[24]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[25]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[26]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[27]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[28]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[29]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[30]),8);
        bufp->chgCData(oldp+74,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram1[31]),8);
        bufp->chgCData(oldp+75,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[0]),8);
        bufp->chgCData(oldp+76,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[1]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[2]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[3]),8);
        bufp->chgCData(oldp+79,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[4]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[5]),8);
        bufp->chgCData(oldp+81,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[6]),8);
        bufp->chgCData(oldp+82,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[7]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[8]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[9]),8);
        bufp->chgCData(oldp+85,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[10]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[11]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[12]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[13]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[14]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[15]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[16]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[17]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[18]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[19]),8);
        bufp->chgCData(oldp+95,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[20]),8);
        bufp->chgCData(oldp+96,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[21]),8);
        bufp->chgCData(oldp+97,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[22]),8);
        bufp->chgCData(oldp+98,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[23]),8);
        bufp->chgCData(oldp+99,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[24]),8);
        bufp->chgCData(oldp+100,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[25]),8);
        bufp->chgCData(oldp+101,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[26]),8);
        bufp->chgCData(oldp+102,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[27]),8);
        bufp->chgCData(oldp+103,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[28]),8);
        bufp->chgCData(oldp+104,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[29]),8);
        bufp->chgCData(oldp+105,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[30]),8);
        bufp->chgCData(oldp+106,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram2[31]),8);
        bufp->chgCData(oldp+107,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[0]),8);
        bufp->chgCData(oldp+108,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[1]),8);
        bufp->chgCData(oldp+109,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[2]),8);
        bufp->chgCData(oldp+110,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[3]),8);
        bufp->chgCData(oldp+111,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[4]),8);
        bufp->chgCData(oldp+112,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[5]),8);
        bufp->chgCData(oldp+113,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[6]),8);
        bufp->chgCData(oldp+114,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[7]),8);
        bufp->chgCData(oldp+115,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[8]),8);
        bufp->chgCData(oldp+116,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[9]),8);
        bufp->chgCData(oldp+117,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[10]),8);
        bufp->chgCData(oldp+118,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[11]),8);
        bufp->chgCData(oldp+119,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[12]),8);
        bufp->chgCData(oldp+120,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[13]),8);
        bufp->chgCData(oldp+121,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[14]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[15]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[16]),8);
        bufp->chgCData(oldp+124,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[17]),8);
        bufp->chgCData(oldp+125,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[18]),8);
        bufp->chgCData(oldp+126,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[19]),8);
        bufp->chgCData(oldp+127,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[20]),8);
        bufp->chgCData(oldp+128,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[21]),8);
        bufp->chgCData(oldp+129,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[22]),8);
        bufp->chgCData(oldp+130,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[23]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[24]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[25]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[26]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[27]),8);
        bufp->chgCData(oldp+135,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[28]),8);
        bufp->chgCData(oldp+136,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[29]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[30]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__data_ram3[31]),8);
        bufp->chgCData(oldp+139,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0),8);
        bufp->chgCData(oldp+140,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1),8);
        bufp->chgCData(oldp+141,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2),8);
        bufp->chgCData(oldp+142,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3),8);
        bufp->chgIData(oldp+143,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer3) 
                                   << 0x18U) | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer2) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer1) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__ram_buffer0))))),32);
        bufp->chgIData(oldp+144,(((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                   << 0x18U) | ((0xff0000U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                       >> 8U)) 
                                                   | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_out 
                                                      >> 0x18U))))),32);
        bufp->chgIData(oldp+145,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_address),30);
        bufp->chgIData(oldp+146,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer),32);
        bufp->chgIData(oldp+147,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__fetch_stage__DOT__pc),30);
        bufp->chgIData(oldp+148,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in),32);
        bufp->chgIData(oldp+149,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer),32);
        bufp->chgSData(oldp+150,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer),13);
        bufp->chgIData(oldp+151,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1),32);
        bufp->chgIData(oldp+152,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2),32);
        bufp->chgIData(oldp+153,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__pc_buffer),30);
        bufp->chgIData(oldp+154,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result 
                                  >> 2U)),30);
        bufp->chgBit(oldp+155,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__pc_jmp));
        bufp->chgIData(oldp+156,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer),32);
        bufp->chgCData(oldp+157,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer),5);
        bufp->chgIData(oldp+158,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer),32);
        bufp->chgIData(oldp+159,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inc_pc_buffer),30);
        bufp->chgIData(oldp+160,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__regfile_rs2_buffer),32);
        bufp->chgCData(oldp+161,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+162,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+163,((IData)((1U != (0x81U 
                                               & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))));
        bufp->chgBit(oldp+164,((IData)((2U != (0x82U 
                                               & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))))));
        bufp->chgBit(oldp+165,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__ctr_buffer) 
                                 >> 2U) & (((((0x1fU 
                                               & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
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
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                    >> 0x14U))) 
                                               & (IData)(
                                                         (2U 
                                                          != 
                                                          (0x82U 
                                                           & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                                  >> 7U)))))));
        bufp->chgIData(oldp+166,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_u_imm_buffer),20);
        bufp->chgCData(oldp+167,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer),3);
        bufp->chgCData(oldp+168,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer),5);
        bufp->chgCData(oldp+169,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer),3);
        bufp->chgIData(oldp+170,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer),32);
        bufp->chgIData(oldp+171,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inc_pc_buffer),30);
        bufp->chgIData(oldp+172,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in),32);
        bufp->chgBit(oldp+173,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer))));
        bufp->chgSData(oldp+174,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__decoder_ctr_word),13);
        bufp->chgCData(oldp+175,((0x7fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_rom_buffer 
                                           >> 0x18U))),7);
        bufp->chgCData(oldp+176,((0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_3_0 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+177,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__adjusted_inst_in 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+178,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[0]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[1]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[2]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[3]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[4]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[5]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[6]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[7]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[8]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[9]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[10]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[11]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[12]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[13]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[14]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[15]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[16]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[17]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[18]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[19]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[20]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[21]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[22]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[23]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[24]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[25]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[26]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[27]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[28]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[29]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[30]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__memory[31]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer),32);
        bufp->chgIData(oldp+211,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer),32);
        bufp->chgIData(oldp+212,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer),32);
        bufp->chgCData(oldp+213,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer),5);
        bufp->chgBit(oldp+214,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag));
        bufp->chgCData(oldp+215,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer),5);
        bufp->chgCData(oldp+216,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer),5);
        bufp->chgBit(oldp+217,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                 == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))));
        bufp->chgBit(oldp+218,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                 == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))));
        bufp->chgIData(oldp+219,(((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                    == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                   & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                   ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                   : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer)),32);
        bufp->chgIData(oldp+220,(((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                    == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                   & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                   ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                   : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer)),32);
        bufp->chgBit(oldp+221,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                   == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))));
        bufp->chgBit(oldp+222,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                   == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))));
        bufp->chgIData(oldp+223,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                   & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                      == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                                   ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                                   : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_address_buffer) 
                                        == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                       & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                       ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                       : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs1_buffer))),32);
        bufp->chgIData(oldp+224,((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__ctr_buffer) 
                                   & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                      == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__rd_addr_buffer)))
                                   ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_data_in
                                   : ((((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_address_buffer) 
                                        == (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_address_buffer)) 
                                       & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__written_flag))
                                       ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__write_buffer
                                       : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__regfile__DOT__rs2_buffer))),32);
        bufp->chgBit(oldp+225,((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                      >> 1U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                      >> 2U))));
        bufp->chgCData(oldp+228,((7U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+229,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                      >> 6U))));
        bufp->chgBit(oldp+230,((1U & ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                      >> 7U))));
        bufp->chgCData(oldp+231,((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+232,((7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+233,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+234,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+235,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
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
        bufp->chgIData(oldp+236,((0xfffff000U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer)),32);
        bufp->chgIData(oldp+237,((((- (IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff800U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                    >> 1U)) 
                                                | (0x7feU 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+238,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_imm),32);
        bufp->chgIData(oldp+239,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a),32);
        bufp->chgIData(oldp+240,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b),32);
        bufp->chgCData(oldp+241,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_mod),3);
        bufp->chgIData(oldp+242,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_result),32);
        bufp->chgBit(oldp+243,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_fn7_bit5));
        bufp->chgBit(oldp+244,((1U & ((0U == (3U & 
                                              (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                               >> 0xdU)))
                                       ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
                                          == vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                       : ((2U == (3U 
                                                  & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                     >> 0xdU)))
                                           ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                           : ((3U == 
                                               (3U 
                                                & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0xdU)))
                                               ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                               : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                  >> 0xcU)))))));
        bufp->chgBit(oldp+245,((1U & (((0U == (3U & 
                                               (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                >> 0xdU)))
                                        ? (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1 
                                           == vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                        : ((2U == (3U 
                                                   & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                      >> 0xdU)))
                                            ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                            : ((3U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                    >> 0xdU)))
                                                ? VL_LTS_III(32, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs1, vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__regfile_rs2)
                                                : (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                                   >> 0xcU)))) 
                                      ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+246,((1U & ((~ (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                      & ((~ ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer) 
                                             >> 2U)) 
                                         & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+247,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__sub_mode));
        bufp->chgQData(oldp+248,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub),33);
        bufp->chgBit(oldp+250,((1U & ((~ ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                           ^ vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_b) 
                                          >> 0x1fU)) 
                                      & ((IData)((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__int_add_sub 
                                                  >> 0x1fU)) 
                                         ^ (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a 
                                            >> 0x1fU))))));
        bufp->chgIData(oldp+251,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a),32);
        bufp->chgIData(oldp+252,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__left_shift),32);
        bufp->chgIData(oldp+253,(((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)
                                   ? vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_a
                                   : vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__reversed_a)),32);
        bufp->chgQData(oldp+254,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu__DOT__barrel_shifter_result),64);
        bufp->chgCData(oldp+256,((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                           >> 7U))),5);
        bufp->chgBit(oldp+257,((((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                           >> 7U)) 
                                 == (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                              >> 0xfU))) 
                                & (IData)((1U != (0x81U 
                                                  & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))));
        bufp->chgBit(oldp+258,((((0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                           >> 7U)) 
                                 == (0x1fU & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__inst_out_buffer 
                                              >> 0x14U))) 
                                & (IData)((2U != (0x82U 
                                                  & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__decode_stage__DOT__ctr_word_out_buffer)))))));
        bufp->chgCData(oldp+259,((7U & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__inst_buffer 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+260,((3U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__execute_stage__DOT__alu_buffer)),2);
        bufp->chgIData(oldp+261,(((2U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                   ? ((1U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))
                                       ? ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                    >> 8U)) 
                                                | (vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                                   >> 0x18U))))
                                       : ((vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core_data_in 
                                           << 0x18U) 
                                          | ((0xff0000U 
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
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word))
                                       : (((- (IData)((IData)(
                                                              (((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte) 
                                                                >> 7U) 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer) 
                                                                   >> 2U)))))) 
                                           << 8U) | (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte))))),32);
        bufp->chgCData(oldp+262,((3U & vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__alu_buffer)),2);
        bufp->chgCData(oldp+263,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_byte),8);
        bufp->chgSData(oldp+264,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__writeback_stage__DOT__input_adj__DOT__adj_word),16);
        bufp->chgCData(oldp+265,((3U & (IData)(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__core__DOT__memory_stage__DOT__inst_fn3_buffer))),2);
    }
    bufp->chgBit(oldp+266,(vlSelfRef.clk));
    bufp->chgBit(oldp+267,(vlSelfRef.clk_en));
    bufp->chgBit(oldp+268,(vlSelfRef.sync_rst));
    bufp->chgSData(oldp+269,(((IData)(vlSelfRef.clk_en) 
                              << 9U)),10);
    bufp->chgBit(oldp+270,(vlSelfRef.cyclonev_top_tb__DOT__toplevel__DOT__inst_req));
}

void Vcyclonev_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcyclonev_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vcyclonev_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcyclonev_top_tb___024root*>(voidSelf);
    Vcyclonev_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
