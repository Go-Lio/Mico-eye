/**
  ******************************************************************************
  * @file    network_data.h
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

#ifndef NETWORK_DATA_H
#define NETWORK_DATA_H
#pragma once

#include "network_config.h"
#include "network_data_params.h"

AI_DEPRECATED
#define AI_NETWORK_DATA_ACTIVATIONS(ptr_)  \
  ai_network_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_NETWORK_DATA_WEIGHTS(ptr_)  \
  ai_network_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_network_conv2d_2_weights_array_u64[54];
extern const ai_u64 s_network_conv2d_2_bias_array_u64[8];
extern const ai_u64 s_network_conv2d_3_weights_array_u64[18];
extern const ai_u64 s_network_conv2d_3_bias_array_u64[8];
extern const ai_u64 s_network_conv2d_4_weights_array_u64[16];
extern const ai_u64 s_network_conv2d_4_bias_array_u64[4];
extern const ai_u64 s_network_conv2d_5_weights_array_u64[48];
extern const ai_u64 s_network_conv2d_5_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_7_weights_array_u64[54];
extern const ai_u64 s_network_conv2d_7_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_8_weights_array_u64[48];
extern const ai_u64 s_network_conv2d_8_bias_array_u64[4];
extern const ai_u64 s_network_conv2d_9_weights_array_u64[48];
extern const ai_u64 s_network_conv2d_9_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_10_weights_array_u64[54];
extern const ai_u64 s_network_conv2d_10_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_11_weights_array_u64[48];
extern const ai_u64 s_network_conv2d_11_bias_array_u64[4];
extern const ai_u64 s_network_conv2d_13_weights_array_u64[48];
extern const ai_u64 s_network_conv2d_13_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_15_weights_array_u64[54];
extern const ai_u64 s_network_conv2d_15_bias_array_u64[24];
extern const ai_u64 s_network_conv2d_16_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_16_bias_array_u64[8];
extern const ai_u64 s_network_conv2d_17_weights_array_u64[192];
extern const ai_u64 s_network_conv2d_17_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_18_weights_array_u64[108];
extern const ai_u64 s_network_conv2d_18_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_19_weights_array_u64[192];
extern const ai_u64 s_network_conv2d_19_bias_array_u64[8];
extern const ai_u64 s_network_conv2d_21_weights_array_u64[192];
extern const ai_u64 s_network_conv2d_21_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_22_weights_array_u64[108];
extern const ai_u64 s_network_conv2d_22_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_23_weights_array_u64[192];
extern const ai_u64 s_network_conv2d_23_bias_array_u64[8];
extern const ai_u64 s_network_conv2d_25_weights_array_u64[192];
extern const ai_u64 s_network_conv2d_25_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_27_weights_array_u64[108];
extern const ai_u64 s_network_conv2d_27_bias_array_u64[48];
extern const ai_u64 s_network_conv2d_28_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_28_bias_array_u64[12];
extern const ai_u64 s_network_conv2d_29_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_29_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_30_weights_array_u64[162];
extern const ai_u64 s_network_conv2d_30_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_31_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_31_bias_array_u64[12];
extern const ai_u64 s_network_conv2d_33_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_33_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_34_weights_array_u64[162];
extern const ai_u64 s_network_conv2d_34_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_35_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_35_bias_array_u64[12];
extern const ai_u64 s_network_conv2d_37_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_37_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_38_weights_array_u64[162];
extern const ai_u64 s_network_conv2d_38_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_39_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_39_bias_array_u64[12];
extern const ai_u64 s_network_conv2d_41_weights_array_u64[432];
extern const ai_u64 s_network_conv2d_41_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_42_weights_array_u64[162];
extern const ai_u64 s_network_conv2d_42_bias_array_u64[72];
extern const ai_u64 s_network_conv2d_43_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_43_bias_array_u64[16];
extern const ai_u64 s_network_conv2d_44_weights_array_u64[768];
extern const ai_u64 s_network_conv2d_44_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_45_weights_array_u64[216];
extern const ai_u64 s_network_conv2d_45_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_46_weights_array_u64[768];
extern const ai_u64 s_network_conv2d_46_bias_array_u64[16];
extern const ai_u64 s_network_conv2d_48_weights_array_u64[768];
extern const ai_u64 s_network_conv2d_48_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_49_weights_array_u64[216];
extern const ai_u64 s_network_conv2d_49_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_50_weights_array_u64[768];
extern const ai_u64 s_network_conv2d_50_bias_array_u64[16];
extern const ai_u64 s_network_conv2d_52_weights_array_u64[768];
extern const ai_u64 s_network_conv2d_52_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_54_weights_array_u64[216];
extern const ai_u64 s_network_conv2d_54_bias_array_u64[96];
extern const ai_u64 s_network_conv2d_55_weights_array_u64[1344];
extern const ai_u64 s_network_conv2d_55_bias_array_u64[28];
extern const ai_u64 s_network_conv2d_56_weights_array_u64[2352];
extern const ai_u64 s_network_conv2d_56_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_57_weights_array_u64[378];
extern const ai_u64 s_network_conv2d_57_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_58_weights_array_u64[2352];
extern const ai_u64 s_network_conv2d_58_bias_array_u64[28];
extern const ai_u64 s_network_conv2d_60_weights_array_u64[2352];
extern const ai_u64 s_network_conv2d_60_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_61_weights_array_u64[378];
extern const ai_u64 s_network_conv2d_61_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_62_weights_array_u64[2352];
extern const ai_u64 s_network_conv2d_62_bias_array_u64[28];
extern const ai_u64 s_network_conv2d_64_weights_array_u64[2352];
extern const ai_u64 s_network_conv2d_64_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_65_weights_array_u64[378];
extern const ai_u64 s_network_conv2d_65_bias_array_u64[168];
extern const ai_u64 s_network_conv2d_66_weights_array_u64[4704];
extern const ai_u64 s_network_conv2d_66_bias_array_u64[56];
extern const ai_u64 s_network_conv2d_67_weights_array_u64[17920];
extern const ai_u64 s_network_conv2d_67_bias_array_u64[640];
extern const ai_u64 s_network_dense_69_weights_array_u64[320];
extern const ai_u64 s_network_dense_69_bias_array_u64[1];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* NETWORK_DATA_H */

