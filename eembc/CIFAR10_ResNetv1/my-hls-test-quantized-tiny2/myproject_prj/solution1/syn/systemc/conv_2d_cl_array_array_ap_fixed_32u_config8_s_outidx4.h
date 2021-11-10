// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_H__
#define __conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
  static const unsigned AddressRange = 2048;
  static const unsigned AddressWidth = 11;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_ram) {
        for (unsigned i = 0; i < 64 ; i = i + 1) {
            ram[i] = "0b00000";
        }
        for (unsigned i = 64; i < 128 ; i = i + 1) {
            ram[i] = "0b00001";
        }
        for (unsigned i = 128; i < 192 ; i = i + 1) {
            ram[i] = "0b00010";
        }
        for (unsigned i = 192; i < 256 ; i = i + 1) {
            ram[i] = "0b00011";
        }
        for (unsigned i = 256; i < 320 ; i = i + 1) {
            ram[i] = "0b00100";
        }
        for (unsigned i = 320; i < 384 ; i = i + 1) {
            ram[i] = "0b00101";
        }
        for (unsigned i = 384; i < 448 ; i = i + 1) {
            ram[i] = "0b00110";
        }
        for (unsigned i = 448; i < 512 ; i = i + 1) {
            ram[i] = "0b00111";
        }
        for (unsigned i = 512; i < 576 ; i = i + 1) {
            ram[i] = "0b01000";
        }
        for (unsigned i = 576; i < 640 ; i = i + 1) {
            ram[i] = "0b01001";
        }
        for (unsigned i = 640; i < 704 ; i = i + 1) {
            ram[i] = "0b01010";
        }
        for (unsigned i = 704; i < 768 ; i = i + 1) {
            ram[i] = "0b01011";
        }
        for (unsigned i = 768; i < 832 ; i = i + 1) {
            ram[i] = "0b01100";
        }
        for (unsigned i = 832; i < 896 ; i = i + 1) {
            ram[i] = "0b01101";
        }
        for (unsigned i = 896; i < 960 ; i = i + 1) {
            ram[i] = "0b01110";
        }
        for (unsigned i = 960; i < 1024 ; i = i + 1) {
            ram[i] = "0b01111";
        }
        for (unsigned i = 1024; i < 1088 ; i = i + 1) {
            ram[i] = "0b10000";
        }
        for (unsigned i = 1088; i < 1152 ; i = i + 1) {
            ram[i] = "0b10001";
        }
        for (unsigned i = 1152; i < 1216 ; i = i + 1) {
            ram[i] = "0b10010";
        }
        for (unsigned i = 1216; i < 1280 ; i = i + 1) {
            ram[i] = "0b10011";
        }
        for (unsigned i = 1280; i < 1344 ; i = i + 1) {
            ram[i] = "0b10100";
        }
        for (unsigned i = 1344; i < 1408 ; i = i + 1) {
            ram[i] = "0b10101";
        }
        for (unsigned i = 1408; i < 1472 ; i = i + 1) {
            ram[i] = "0b10110";
        }
        for (unsigned i = 1472; i < 1536 ; i = i + 1) {
            ram[i] = "0b10111";
        }
        for (unsigned i = 1536; i < 1600 ; i = i + 1) {
            ram[i] = "0b11000";
        }
        for (unsigned i = 1600; i < 1664 ; i = i + 1) {
            ram[i] = "0b11001";
        }
        for (unsigned i = 1664; i < 1728 ; i = i + 1) {
            ram[i] = "0b11010";
        }
        for (unsigned i = 1728; i < 1792 ; i = i + 1) {
            ram[i] = "0b11011";
        }
        for (unsigned i = 1792; i < 1856 ; i = i + 1) {
            ram[i] = "0b11100";
        }
        for (unsigned i = 1856; i < 1920 ; i = i + 1) {
            ram[i] = "0b11101";
        }
        for (unsigned i = 1920; i < 1984 ; i = i + 1) {
            ram[i] = "0b11110";
        }
        for (unsigned i = 1984; i < 2048 ; i = i + 1) {
            ram[i] = "0b11111";
        }


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


SC_MODULE(conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 2048;
static const unsigned AddressWidth = 11;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4) {
meminst = new conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_ram("conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4() {
    delete meminst;
}


};//endmodule
#endif
