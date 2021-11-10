// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_H__
#define __conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 2;
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


   SC_CTOR(conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_ram) {
        for (unsigned i = 0; i < 512 ; i = i + 1) {
            ram[i] = "0b00";
        }
        for (unsigned i = 512; i < 1024 ; i = i + 1) {
            ram[i] = "0b01";
        }
        for (unsigned i = 1024; i < 1536 ; i = i + 1) {
            ram[i] = "0b10";
        }
        for (unsigned i = 1536; i < 2048 ; i = i + 1) {
            ram[i] = "0b11";
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


SC_MODULE(conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5) {


static const unsigned DataWidth = 2;
static const unsigned AddressRange = 2048;
static const unsigned AddressWidth = 11;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_ram* meminst;


SC_CTOR(conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5) {
meminst = new conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_ram("conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_array_ap_fixed_4u_config5_s_outidx5() {
    delete meminst;
}


};//endmodule
#endif
