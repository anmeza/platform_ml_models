// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_H__
#define __conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 96;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_ram) {
        ram[0] = "0b11011000";
        ram[1] = "0b10000000";
        ram[2] = "0b01001111";
        ram[3] = "0b11001110";
        ram[4] = "0b01111111";
        ram[5] = "0b00001011";
        ram[6] = "0b01010111";
        ram[7] = "0b00011111";
        ram[8] = "0b10000000";
        ram[9] = "0b11111000";
        ram[10] = "0b10100011";
        ram[11] = "0b11010000";
        ram[12] = "0b10111111";
        ram[13] = "0b00011000";
        ram[14] = "0b10110011";
        ram[15] = "0b10000000";
        ram[16] = "0b11011100";
        ram[17] = "0b01111111";
        ram[18] = "0b01111111";
        ram[19] = "0b10000000";
        ram[20] = "0b10000000";
        ram[21] = "0b11111011";
        ram[22] = "0b01111111";
        ram[23] = "0b00010111";
        ram[24] = "0b10111000";
        ram[25] = "0b01010011";
        ram[26] = "0b01111111";
        ram[27] = "0b10000000";
        ram[28] = "0b10010011";
        ram[29] = "0b01111111";
        ram[30] = "0b10000000";
        ram[31] = "0b01111111";
        ram[32] = "0b01100001";
        ram[33] = "0b01111111";
        ram[34] = "0b10000000";
        ram[35] = "0b00010110";
        ram[36] = "0b11000011";
        ram[37] = "0b10000101";
        ram[38] = "0b00100010";
        ram[39] = "0b10000000";
        ram[40] = "0b00111010";
        ram[41] = "0b00100001";
        ram[42] = "0b01111111";
        ram[43] = "0b10000000";
        ram[44] = "0b10011111";
        ram[45] = "0b10000000";
        ram[46] = "0b01111111";
        ram[47] = "0b10000000";
        ram[48] = "0b11000001";
        ram[49] = "0b10011101";
        ram[50] = "0b00111110";
        ram[51] = "0b10011010";
        ram[52] = "0b11101100";
        ram[53] = "0b00100101";
        ram[54] = "0b01110011";
        ram[55] = "0b10000000";
        ram[56] = "0b10011000";
        ram[57] = "0b10101110";
        ram[58] = "0b10000000";
        ram[59] = "0b01111111";
        ram[60] = "0b01111111";
        ram[61] = "0b01101110";
        ram[62] = "0b10101010";
        ram[63] = "0b10000000";
        ram[64] = "0b00011100";
        ram[65] = "0b01111111";
        ram[66] = "0b11000100";
        ram[67] = "0b01111111";
        ram[68] = "0b10000000";
        ram[69] = "0b11111111";
        ram[70] = "0b01111111";
        ram[71] = "0b10000000";
        ram[72] = "0b01111111";
        ram[73] = "0b00010011";
        ram[74] = "0b11110101";
        ram[75] = "0b00011111";
        ram[76] = "0b10111100";
        ram[77] = "0b01111111";
        ram[78] = "0b01111111";
        ram[79] = "0b10000000";
        ram[80] = "0b11011100";
        ram[81] = "0b00010101";
        ram[82] = "0b10000000";
        ram[83] = "0b00000010";
        ram[84] = "0b11001110";
        ram[85] = "0b11010111";
        ram[86] = "0b01111111";
        ram[87] = "0b01101101";
        ram[88] = "0b10000000";
        ram[89] = "0b01111111";
        ram[90] = "0b10000000";
        ram[91] = "0b01111111";
        ram[92] = "0b00000000";
        ram[93] = "0b10000000";
        ram[94] = "0b00000110";
        ram[95] = "0b01111111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V) {
meminst = new conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_ram("conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
