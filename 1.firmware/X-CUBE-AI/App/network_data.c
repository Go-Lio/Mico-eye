/**
  ******************************************************************************
  * @file    network_data.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Oct 16 01:15:11 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */
#include "network_data.h"
#include "ai_platform_interface.h"

AI_API_DECLARE_BEGIN
ai_buffer g_network_data_map_activations[AI_NETWORK_DATA_ACTIVATIONS_COUNT] = {
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 229888, 1, 1),
    229888, NULL, NULL),    /* heap_overlay_pool */
  };
ai_buffer g_network_data_map_weights[AI_NETWORK_DATA_WEIGHTS_COUNT] = {
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 432, 1, 1),
    432, NULL, s_network_conv2d_2_weights_array_u64),   /* conv2d_2_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_conv2d_2_bias_array_u64),   /* conv2d_2_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 144, 1, 1),
    144, NULL, s_network_conv2d_3_weights_array_u64),   /* conv2d_3_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_conv2d_3_bias_array_u64),   /* conv2d_3_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_conv2d_4_weights_array_u64),   /* conv2d_4_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_conv2d_4_bias_array_u64),   /* conv2d_4_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_5_weights_array_u64),   /* conv2d_5_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_5_bias_array_u64),   /* conv2d_5_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 432, 1, 1),
    432, NULL, s_network_conv2d_7_weights_array_u64),   /* conv2d_7_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_7_bias_array_u64),   /* conv2d_7_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_8_weights_array_u64),   /* conv2d_8_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_conv2d_8_bias_array_u64),   /* conv2d_8_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_9_weights_array_u64),   /* conv2d_9_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_9_bias_array_u64),   /* conv2d_9_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 432, 1, 1),
    432, NULL, s_network_conv2d_10_weights_array_u64),   /* conv2d_10_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_10_bias_array_u64),   /* conv2d_10_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_11_weights_array_u64),   /* conv2d_11_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_conv2d_11_bias_array_u64),   /* conv2d_11_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_13_weights_array_u64),   /* conv2d_13_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_13_bias_array_u64),   /* conv2d_13_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 432, 1, 1),
    432, NULL, s_network_conv2d_15_weights_array_u64),   /* conv2d_15_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_conv2d_15_bias_array_u64),   /* conv2d_15_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_16_weights_array_u64),   /* conv2d_16_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_conv2d_16_bias_array_u64),   /* conv2d_16_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_conv2d_17_weights_array_u64),   /* conv2d_17_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_17_bias_array_u64),   /* conv2d_17_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 864, 1, 1),
    864, NULL, s_network_conv2d_18_weights_array_u64),   /* conv2d_18_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_18_bias_array_u64),   /* conv2d_18_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_conv2d_19_weights_array_u64),   /* conv2d_19_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_conv2d_19_bias_array_u64),   /* conv2d_19_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_conv2d_21_weights_array_u64),   /* conv2d_21_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_21_bias_array_u64),   /* conv2d_21_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 864, 1, 1),
    864, NULL, s_network_conv2d_22_weights_array_u64),   /* conv2d_22_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_22_bias_array_u64),   /* conv2d_22_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_conv2d_23_weights_array_u64),   /* conv2d_23_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_conv2d_23_bias_array_u64),   /* conv2d_23_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_conv2d_25_weights_array_u64),   /* conv2d_25_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_25_bias_array_u64),   /* conv2d_25_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 864, 1, 1),
    864, NULL, s_network_conv2d_27_weights_array_u64),   /* conv2d_27_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_conv2d_27_bias_array_u64),   /* conv2d_27_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2304, 1, 1),
    2304, NULL, s_network_conv2d_28_weights_array_u64),   /* conv2d_28_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_conv2d_28_bias_array_u64),   /* conv2d_28_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_29_weights_array_u64),   /* conv2d_29_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_29_bias_array_u64),   /* conv2d_29_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1296, 1, 1),
    1296, NULL, s_network_conv2d_30_weights_array_u64),   /* conv2d_30_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_30_bias_array_u64),   /* conv2d_30_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_31_weights_array_u64),   /* conv2d_31_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_conv2d_31_bias_array_u64),   /* conv2d_31_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_33_weights_array_u64),   /* conv2d_33_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_33_bias_array_u64),   /* conv2d_33_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1296, 1, 1),
    1296, NULL, s_network_conv2d_34_weights_array_u64),   /* conv2d_34_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_34_bias_array_u64),   /* conv2d_34_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_35_weights_array_u64),   /* conv2d_35_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_conv2d_35_bias_array_u64),   /* conv2d_35_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_37_weights_array_u64),   /* conv2d_37_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_37_bias_array_u64),   /* conv2d_37_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1296, 1, 1),
    1296, NULL, s_network_conv2d_38_weights_array_u64),   /* conv2d_38_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_38_bias_array_u64),   /* conv2d_38_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_39_weights_array_u64),   /* conv2d_39_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_conv2d_39_bias_array_u64),   /* conv2d_39_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_conv2d_41_weights_array_u64),   /* conv2d_41_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_41_bias_array_u64),   /* conv2d_41_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1296, 1, 1),
    1296, NULL, s_network_conv2d_42_weights_array_u64),   /* conv2d_42_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_conv2d_42_bias_array_u64),   /* conv2d_42_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 4608, 1, 1),
    4608, NULL, s_network_conv2d_43_weights_array_u64),   /* conv2d_43_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_conv2d_43_bias_array_u64),   /* conv2d_43_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_conv2d_44_weights_array_u64),   /* conv2d_44_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_44_bias_array_u64),   /* conv2d_44_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_conv2d_45_weights_array_u64),   /* conv2d_45_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_45_bias_array_u64),   /* conv2d_45_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_conv2d_46_weights_array_u64),   /* conv2d_46_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_conv2d_46_bias_array_u64),   /* conv2d_46_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_conv2d_48_weights_array_u64),   /* conv2d_48_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_48_bias_array_u64),   /* conv2d_48_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_conv2d_49_weights_array_u64),   /* conv2d_49_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_49_bias_array_u64),   /* conv2d_49_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_conv2d_50_weights_array_u64),   /* conv2d_50_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_conv2d_50_bias_array_u64),   /* conv2d_50_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_conv2d_52_weights_array_u64),   /* conv2d_52_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_52_bias_array_u64),   /* conv2d_52_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_conv2d_54_weights_array_u64),   /* conv2d_54_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_conv2d_54_bias_array_u64),   /* conv2d_54_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 10752, 1, 1),
    10752, NULL, s_network_conv2d_55_weights_array_u64),   /* conv2d_55_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_conv2d_55_bias_array_u64),   /* conv2d_55_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18816, 1, 1),
    18816, NULL, s_network_conv2d_56_weights_array_u64),   /* conv2d_56_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_56_bias_array_u64),   /* conv2d_56_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3024, 1, 1),
    3024, NULL, s_network_conv2d_57_weights_array_u64),   /* conv2d_57_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_57_bias_array_u64),   /* conv2d_57_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18816, 1, 1),
    18816, NULL, s_network_conv2d_58_weights_array_u64),   /* conv2d_58_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_conv2d_58_bias_array_u64),   /* conv2d_58_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18816, 1, 1),
    18816, NULL, s_network_conv2d_60_weights_array_u64),   /* conv2d_60_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_60_bias_array_u64),   /* conv2d_60_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3024, 1, 1),
    3024, NULL, s_network_conv2d_61_weights_array_u64),   /* conv2d_61_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_61_bias_array_u64),   /* conv2d_61_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18816, 1, 1),
    18816, NULL, s_network_conv2d_62_weights_array_u64),   /* conv2d_62_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_conv2d_62_bias_array_u64),   /* conv2d_62_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18816, 1, 1),
    18816, NULL, s_network_conv2d_64_weights_array_u64),   /* conv2d_64_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_64_bias_array_u64),   /* conv2d_64_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3024, 1, 1),
    3024, NULL, s_network_conv2d_65_weights_array_u64),   /* conv2d_65_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_conv2d_65_bias_array_u64),   /* conv2d_65_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 37632, 1, 1),
    37632, NULL, s_network_conv2d_66_weights_array_u64),   /* conv2d_66_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 448, 1, 1),
    448, NULL, s_network_conv2d_66_bias_array_u64),   /* conv2d_66_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 143360, 1, 1),
    143360, NULL, s_network_conv2d_67_weights_array_u64),   /* conv2d_67_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5120, 1, 1),
    5120, NULL, s_network_conv2d_67_bias_array_u64),   /* conv2d_67_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2560, 1, 1),
    2560, NULL, s_network_dense_69_weights_array_u64),   /* dense_69_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 8, 1, 1),
    8, NULL, s_network_dense_69_bias_array_u64),   /* dense_69_bias_array */
  };


/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_activations_buffer_get(const ai_handle ptr)
{
  ai_buffer buf = AI_BUFFER_INIT(
    AI_FLAG_NONE, AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, AI_NETWORK_DATA_ACTIVATIONS_SIZE, 1, AI_NETWORK_DATA_ACTIVATIONS_COUNT),
    AI_NETWORK_DATA_ACTIVATIONS_SIZE,
    NULL, ptr);
  return buf;
}

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_weights_buffer_get(const ai_handle ptr)
{
  ai_buffer buf = AI_BUFFER_INIT(
    AI_FLAG_NONE, AI_BUFFER_FORMAT_U8|AI_BUFFER_FMT_FLAG_CONST,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, AI_NETWORK_DATA_WEIGHTS_SIZE, 1, AI_NETWORK_DATA_WEIGHTS_COUNT),
    AI_NETWORK_DATA_WEIGHTS_SIZE,
    NULL, ptr);
  return buf;
}


/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_data_weights_get(void)
{
  return AI_HANDLE_PTR(g_network_weights_table);

}


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_data_params_get(ai_network_params* params)
{
  if (!params) return false;
  
  const ai_buffer_array map_activations = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_DATA_ACTIVATIONS_COUNT, g_network_data_map_activations);
  
  const ai_buffer_array map_weights = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_DATA_WEIGHTS_COUNT, g_network_data_map_weights);

  return ai_platform_bind_network_params(params, &map_weights, &map_activations);
}


AI_API_DECLARE_END
