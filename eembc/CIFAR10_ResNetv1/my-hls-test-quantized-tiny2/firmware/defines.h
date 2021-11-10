#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 32
#define N_INPUT_2_1 32
#define N_INPUT_3_1 3
#define OUT_HEIGHT_2 32
#define OUT_WIDTH_2 32
#define N_FILT_2 32
#define OUT_HEIGHT_20 35
#define OUT_WIDTH_20 35
#define N_CHAN_20 32
#define OUT_HEIGHT_5 32
#define OUT_WIDTH_5 32
#define N_FILT_5 4
#define OUT_HEIGHT_21 35
#define OUT_WIDTH_21 35
#define N_CHAN_21 4
#define OUT_HEIGHT_8 32
#define OUT_WIDTH_8 32
#define N_FILT_8 32
#define OUT_HEIGHT_22 32
#define OUT_WIDTH_22 32
#define N_CHAN_22 32
#define OUT_HEIGHT_11 8
#define OUT_WIDTH_11 8
#define N_FILT_11 32
#define OUT_HEIGHT_23 11
#define OUT_WIDTH_23 11
#define N_CHAN_23 32
#define OUT_HEIGHT_14 8
#define OUT_WIDTH_14 8
#define N_FILT_14 32
#define N_SIZE_1_17 2048
#define N_LAYER_18 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_ufixed<8,0> input_1_default_t;
typedef nnet::array<ap_ufixed<8,0>, 3*1> input_t;
typedef ap_fixed<9,6> q_conv2d_batchnorm_default_t;
typedef nnet::array<ap_fixed<9,6>, 32*1> layer2_t;
typedef ap_fixed<8,3> weight2_t;
typedef ap_fixed<8,3> bias2_t;
typedef ap_fixed<9,6> q_activation_default_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer4_t;
typedef ap_fixed<8,6> model_default_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer20_t;
typedef ap_fixed<9,6> q_conv2d_batchnorm_1_default_t;
typedef nnet::array<ap_fixed<9,6>, 4*1> layer5_t;
typedef ap_fixed<8,3> weight5_t;
typedef ap_fixed<8,3> bias5_t;
typedef ap_fixed<9,6> q_activation_1_default_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 4*1> layer7_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 4*1> layer21_t;
typedef ap_fixed<9,6> q_conv2d_batchnorm_2_default_t;
typedef nnet::array<ap_fixed<9,6>, 32*1> layer8_t;
typedef ap_fixed<8,3> weight8_t;
typedef ap_fixed<8,3> bias8_t;
typedef ap_fixed<9,6> q_activation_2_default_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer10_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer22_t;
typedef ap_fixed<9,6> q_conv2d_batchnorm_3_default_t;
typedef nnet::array<ap_fixed<9,6>, 32*1> layer11_t;
typedef ap_fixed<8,3> weight11_t;
typedef ap_fixed<8,3> bias11_t;
typedef ap_fixed<9,6> q_activation_3_default_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer13_t;
typedef nnet::array<ap_fixed<8,3,AP_RND,AP_SAT>, 32*1> layer23_t;
typedef ap_fixed<9,6> q_conv2d_batchnorm_4_default_t;
typedef nnet::array<ap_fixed<9,6>, 32*1> layer14_t;
typedef ap_fixed<8,3> weight14_t;
typedef ap_fixed<8,3> bias14_t;
typedef ap_fixed<8,6> q_activation_5_default_t;
typedef nnet::array<ap_fixed<8,6>, 32*1> layer16_t;
typedef ap_fixed<8,6> q_dense_default_t;
typedef nnet::array<ap_fixed<8,6>, 10*1> layer18_t;
typedef ap_fixed<8,3> weight18_t;
typedef ap_fixed<8,3> bias18_t;

#endif
