// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_H__
#define __conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
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


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_ram) {
        ram[0] = "0b00000";
        ram[1] = "0b00000";
        ram[2] = "0b00000";
        ram[3] = "0b00001";
        ram[4] = "0b00001";
        ram[5] = "0b00001";
        ram[6] = "0b00010";
        ram[7] = "0b00010";
        ram[8] = "0b00010";
        ram[9] = "0b00011";
        ram[10] = "0b00011";
        ram[11] = "0b00011";
        ram[12] = "0b00100";
        ram[13] = "0b00100";
        ram[14] = "0b00100";
        ram[15] = "0b00101";
        ram[16] = "0b00101";
        ram[17] = "0b00101";
        ram[18] = "0b00110";
        ram[19] = "0b00110";
        ram[20] = "0b00110";
        ram[21] = "0b00111";
        ram[22] = "0b00111";
        ram[23] = "0b00111";
        ram[24] = "0b01000";
        ram[25] = "0b01000";
        ram[26] = "0b01000";
        ram[27] = "0b01001";
        ram[28] = "0b01001";
        ram[29] = "0b01001";
        ram[30] = "0b01010";
        ram[31] = "0b01010";
        ram[32] = "0b01010";
        ram[33] = "0b01011";
        ram[34] = "0b01011";
        ram[35] = "0b01011";
        ram[36] = "0b01100";
        ram[37] = "0b01100";
        ram[38] = "0b01100";
        ram[39] = "0b01101";
        ram[40] = "0b01101";
        ram[41] = "0b01101";
        ram[42] = "0b01110";
        ram[43] = "0b01110";
        ram[44] = "0b01110";
        ram[45] = "0b01111";
        ram[46] = "0b01111";
        ram[47] = "0b01111";
        ram[48] = "0b10000";
        ram[49] = "0b10000";
        ram[50] = "0b10000";
        ram[51] = "0b10001";
        ram[52] = "0b10001";
        ram[53] = "0b10001";
        ram[54] = "0b10010";
        ram[55] = "0b10010";
        ram[56] = "0b10010";
        ram[57] = "0b10011";
        ram[58] = "0b10011";
        ram[59] = "0b10011";
        ram[60] = "0b10100";
        ram[61] = "0b10100";
        ram[62] = "0b10100";
        ram[63] = "0b10101";
        ram[64] = "0b10101";
        ram[65] = "0b10101";
        ram[66] = "0b10110";
        ram[67] = "0b10110";
        ram[68] = "0b10110";
        ram[69] = "0b10111";
        ram[70] = "0b10111";
        ram[71] = "0b10111";
        ram[72] = "0b11000";
        ram[73] = "0b11000";
        ram[74] = "0b11000";
        ram[75] = "0b11001";
        ram[76] = "0b11001";
        ram[77] = "0b11001";
        ram[78] = "0b11010";
        ram[79] = "0b11010";
        ram[80] = "0b11010";
        ram[81] = "0b11011";
        ram[82] = "0b11011";
        ram[83] = "0b11011";
        ram[84] = "0b11100";
        ram[85] = "0b11100";
        ram[86] = "0b11100";
        ram[87] = "0b11101";
        ram[88] = "0b11101";
        ram[89] = "0b11101";
        ram[90] = "0b11110";
        ram[91] = "0b11110";
        ram[92] = "0b11110";
        ram[93] = "0b11111";
        ram[94] = "0b11111";
        ram[95] = "0b11111";


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


SC_MODULE(conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7) {
meminst = new conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_ram("conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_32u_config2_s_outidx7() {
    delete meminst;
}


};//endmodule
#endif
