/**
  ******************************************************************************
  * @file    network_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Oct 16 01:15:11 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_DATA_PARAMS_H
#define NETWORK_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_NETWORK_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_data_weights_params[1]))
*/

#define AI_NETWORK_DATA_CONFIG               (NULL)


#define AI_NETWORK_DATA_ACTIVATIONS_SIZES \
  { 229888, }
#define AI_NETWORK_DATA_ACTIVATIONS_SIZE     (229888)
#define AI_NETWORK_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_DATA_ACTIVATION_1_SIZE    (229888)



#define AI_NETWORK_DATA_WEIGHTS_SIZES \
  { 432, 64, 144, 64, 128, 32, 384, 192, 432, 192, 384, 32, 384, 192, 432, 192, 384, 32, 384, 192, 432, 192, 768, 64, 1536, 384, 864, 384, 1536, 64, 1536, 384, 864, 384, 1536, 64, 1536, 384, 864, 384, 2304, 96, 3456, 576, 1296, 576, 3456, 96, 3456, 576, 1296, 576, 3456, 96, 3456, 576, 1296, 576, 3456, 96, 3456, 576, 1296, 576, 4608, 128, 6144, 768, 1728, 768, 6144, 128, 6144, 768, 1728, 768, 6144, 128, 6144, 768, 1728, 768, 10752, 224, 18816, 1344, 3024, 1344, 18816, 224, 18816, 1344, 3024, 1344, 18816, 224, 18816, 1344, 3024, 1344, 37632, 448, 143360, 5120, 2560, 8, }
#define AI_NETWORK_DATA_WEIGHTS_SIZE         (412776)
#define AI_NETWORK_DATA_WEIGHTS_COUNT        (106)
#define AI_NETWORK_DATA_WEIGHT_1_SIZE        (432)
#define AI_NETWORK_DATA_WEIGHT_2_SIZE        (64)
#define AI_NETWORK_DATA_WEIGHT_3_SIZE        (144)
#define AI_NETWORK_DATA_WEIGHT_4_SIZE        (64)
#define AI_NETWORK_DATA_WEIGHT_5_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_6_SIZE        (32)
#define AI_NETWORK_DATA_WEIGHT_7_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_8_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_9_SIZE        (432)
#define AI_NETWORK_DATA_WEIGHT_10_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_11_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_12_SIZE        (32)
#define AI_NETWORK_DATA_WEIGHT_13_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_14_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_15_SIZE        (432)
#define AI_NETWORK_DATA_WEIGHT_16_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_17_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_18_SIZE        (32)
#define AI_NETWORK_DATA_WEIGHT_19_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_20_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_21_SIZE        (432)
#define AI_NETWORK_DATA_WEIGHT_22_SIZE        (192)
#define AI_NETWORK_DATA_WEIGHT_23_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_24_SIZE        (64)
#define AI_NETWORK_DATA_WEIGHT_25_SIZE        (1536)
#define AI_NETWORK_DATA_WEIGHT_26_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_27_SIZE        (864)
#define AI_NETWORK_DATA_WEIGHT_28_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_29_SIZE        (1536)
#define AI_NETWORK_DATA_WEIGHT_30_SIZE        (64)
#define AI_NETWORK_DATA_WEIGHT_31_SIZE        (1536)
#define AI_NETWORK_DATA_WEIGHT_32_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_33_SIZE        (864)
#define AI_NETWORK_DATA_WEIGHT_34_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_35_SIZE        (1536)
#define AI_NETWORK_DATA_WEIGHT_36_SIZE        (64)
#define AI_NETWORK_DATA_WEIGHT_37_SIZE        (1536)
#define AI_NETWORK_DATA_WEIGHT_38_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_39_SIZE        (864)
#define AI_NETWORK_DATA_WEIGHT_40_SIZE        (384)
#define AI_NETWORK_DATA_WEIGHT_41_SIZE        (2304)
#define AI_NETWORK_DATA_WEIGHT_42_SIZE        (96)
#define AI_NETWORK_DATA_WEIGHT_43_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_44_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_45_SIZE        (1296)
#define AI_NETWORK_DATA_WEIGHT_46_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_47_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_48_SIZE        (96)
#define AI_NETWORK_DATA_WEIGHT_49_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_50_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_51_SIZE        (1296)
#define AI_NETWORK_DATA_WEIGHT_52_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_53_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_54_SIZE        (96)
#define AI_NETWORK_DATA_WEIGHT_55_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_56_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_57_SIZE        (1296)
#define AI_NETWORK_DATA_WEIGHT_58_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_59_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_60_SIZE        (96)
#define AI_NETWORK_DATA_WEIGHT_61_SIZE        (3456)
#define AI_NETWORK_DATA_WEIGHT_62_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_63_SIZE        (1296)
#define AI_NETWORK_DATA_WEIGHT_64_SIZE        (576)
#define AI_NETWORK_DATA_WEIGHT_65_SIZE        (4608)
#define AI_NETWORK_DATA_WEIGHT_66_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_67_SIZE        (6144)
#define AI_NETWORK_DATA_WEIGHT_68_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_69_SIZE        (1728)
#define AI_NETWORK_DATA_WEIGHT_70_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_71_SIZE        (6144)
#define AI_NETWORK_DATA_WEIGHT_72_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_73_SIZE        (6144)
#define AI_NETWORK_DATA_WEIGHT_74_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_75_SIZE        (1728)
#define AI_NETWORK_DATA_WEIGHT_76_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_77_SIZE        (6144)
#define AI_NETWORK_DATA_WEIGHT_78_SIZE        (128)
#define AI_NETWORK_DATA_WEIGHT_79_SIZE        (6144)
#define AI_NETWORK_DATA_WEIGHT_80_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_81_SIZE        (1728)
#define AI_NETWORK_DATA_WEIGHT_82_SIZE        (768)
#define AI_NETWORK_DATA_WEIGHT_83_SIZE        (10752)
#define AI_NETWORK_DATA_WEIGHT_84_SIZE        (224)
#define AI_NETWORK_DATA_WEIGHT_85_SIZE        (18816)
#define AI_NETWORK_DATA_WEIGHT_86_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_87_SIZE        (3024)
#define AI_NETWORK_DATA_WEIGHT_88_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_89_SIZE        (18816)
#define AI_NETWORK_DATA_WEIGHT_90_SIZE        (224)
#define AI_NETWORK_DATA_WEIGHT_91_SIZE        (18816)
#define AI_NETWORK_DATA_WEIGHT_92_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_93_SIZE        (3024)
#define AI_NETWORK_DATA_WEIGHT_94_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_95_SIZE        (18816)
#define AI_NETWORK_DATA_WEIGHT_96_SIZE        (224)
#define AI_NETWORK_DATA_WEIGHT_97_SIZE        (18816)
#define AI_NETWORK_DATA_WEIGHT_98_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_99_SIZE        (3024)
#define AI_NETWORK_DATA_WEIGHT_100_SIZE        (1344)
#define AI_NETWORK_DATA_WEIGHT_101_SIZE        (37632)
#define AI_NETWORK_DATA_WEIGHT_102_SIZE        (448)
#define AI_NETWORK_DATA_WEIGHT_103_SIZE        (143360)
#define AI_NETWORK_DATA_WEIGHT_104_SIZE        (5120)
#define AI_NETWORK_DATA_WEIGHT_105_SIZE        (2560)
#define AI_NETWORK_DATA_WEIGHT_106_SIZE        (8)



#define AI_NETWORK_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_activations_table[1])

extern ai_handle g_network_activations_table[1 + 2];



#define AI_NETWORK_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_weights_table[1])

extern ai_handle g_network_weights_table[106 + 2];


#endif    /* NETWORK_DATA_PARAMS_H */
