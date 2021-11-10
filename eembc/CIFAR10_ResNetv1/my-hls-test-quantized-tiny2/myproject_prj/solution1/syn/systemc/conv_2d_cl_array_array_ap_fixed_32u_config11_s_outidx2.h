// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_H__
#define __conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
  static const unsigned AddressRange = 16384;
  static const unsigned AddressWidth = 14;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_ram) {
        for (unsigned i = 0; i < 512 ; i = i + 1) {
            ram[i] = "0b00000";
        }
        for (unsigned i = 512; i < 1024 ; i = i + 1) {
            ram[i] = "0b00001";
        }
        for (unsigned i = 1024; i < 1536 ; i = i + 1) {
            ram[i] = "0b00010";
        }
        for (unsigned i = 1536; i < 2048 ; i = i + 1) {
            ram[i] = "0b00011";
        }
        for (unsigned i = 2048; i < 2560 ; i = i + 1) {
            ram[i] = "0b00100";
        }
        for (unsigned i = 2560; i < 3072 ; i = i + 1) {
            ram[i] = "0b00101";
        }
        for (unsigned i = 3072; i < 3584 ; i = i + 1) {
            ram[i] = "0b00110";
        }
        for (unsigned i = 3584; i < 4096 ; i = i + 1) {
            ram[i] = "0b00111";
        }
        for (unsigned i = 4096; i < 4608 ; i = i + 1) {
            ram[i] = "0b01000";
        }
        for (unsigned i = 4608; i < 5120 ; i = i + 1) {
            ram[i] = "0b01001";
        }
        for (unsigned i = 5120; i < 5632 ; i = i + 1) {
            ram[i] = "0b01010";
        }
        for (unsigned i = 5632; i < 6144 ; i = i + 1) {
            ram[i] = "0b01011";
        }
        for (unsigned i = 6144; i < 6656 ; i = i + 1) {
            ram[i] = "0b01100";
        }
        for (unsigned i = 6656; i < 7168 ; i = i + 1) {
            ram[i] = "0b01101";
        }
        for (unsigned i = 7168; i < 7680 ; i = i + 1) {
            ram[i] = "0b01110";
        }
        for (unsigned i = 7680; i < 8192 ; i = i + 1) {
            ram[i] = "0b01111";
        }
        for (unsigned i = 8192; i < 8704 ; i = i + 1) {
            ram[i] = "0b10000";
        }
        for (unsigned i = 8704; i < 9216 ; i = i + 1) {
            ram[i] = "0b10001";
        }
        for (unsigned i = 9216; i < 9728 ; i = i + 1) {
            ram[i] = "0b10010";
        }
        for (unsigned i = 9728; i < 10240 ; i = i + 1) {
            ram[i] = "0b10011";
        }
        for (unsigned i = 10240; i < 10752 ; i = i + 1) {
            ram[i] = "0b10100";
        }
        for (unsigned i = 10752; i < 11264 ; i = i + 1) {
            ram[i] = "0b10101";
        }
        for (unsigned i = 11264; i < 11776 ; i = i + 1) {
            ram[i] = "0b10110";
        }
        for (unsigned i = 11776; i < 12288 ; i = i + 1) {
            ram[i] = "0b10111";
        }
        for (unsigned i = 12288; i < 12800 ; i = i + 1) {
            ram[i] = "0b11000";
        }
        for (unsigned i = 12800; i < 13312 ; i = i + 1) {
            ram[i] = "0b11001";
        }
        for (unsigned i = 13312; i < 13824 ; i = i + 1) {
            ram[i] = "0b11010";
        }
        for (unsigned i = 13824; i < 14336 ; i = i + 1) {
            ram[i] = "0b11011";
        }
        for (unsigned i = 14336; i < 14848 ; i = i + 1) {
            ram[i] = "0b11100";
        }
        for (unsigned i = 14848; i < 15360 ; i = i + 1) {
            ram[i] = "0b11101";
        }
        for (unsigned i = 15360; i < 15872 ; i = i + 1) {
            ram[i] = "0b11110";
        }
        for (unsigned i = 15872; i < 16384 ; i = i + 1) {
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


SC_MODULE(conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 16384;
static const unsigned AddressWidth = 14;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2) {
meminst = new conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_ram("conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2() {
    delete meminst;
}


};//endmodule
#endif
