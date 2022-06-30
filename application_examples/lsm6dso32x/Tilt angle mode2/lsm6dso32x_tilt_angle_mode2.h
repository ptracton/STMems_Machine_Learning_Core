/*
 ******************************************************************************
 * @file    lsm6dso32x_tilt_angle_mode2.h
 * @author  MEMS Software Solutions Team
 * @brief   This file contains the configuration for lsm6dso32x_tilt_angle_mode2.
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LSM6DSO32X_TILT_ANGLE_MODE2_H
#define LSM6DSO32X_TILT_ANGLE_MODE2_H

#ifdef __cplusplus
  extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#ifndef MEMS_UCF_SHARED_TYPES
#define MEMS_UCF_SHARED_TYPES

/** Common data block definition **/
typedef struct {
  uint8_t address;
  uint8_t data;
} ucf_line_t;

#endif /* MEMS_UCF_SHARED_TYPES */

/** Configuration array generated from Unico Tool **/
const ucf_line_t lsm6dso32x_tilt_angle_mode2[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x52,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xF2,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x56,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x62,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3C,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x56,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x62,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x05,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0xB0,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x32,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x54,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0xB0,},
  {.address = 0x09, .data = 0x76,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0xB0,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0xEF,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xCD,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x0E,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x98,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x09, .data = 0xA5,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0xAB,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x10,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x0D, .data = 0x01,},
  {.address = 0x60, .data = 0x25,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x10, .data = 0x30,},
  {.address = 0x11, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSO32X_TILT_ANGLE_MODE2_H */
