/*
 ******************************************************************************
 * @file    lsm6dsv32x_activity_recognition_for_wrist.h
 * @author  MEMS Software Solutions Team
 * @brief   This file contains the configuration for lsm6dsv32x_activity_recognition_for_wrist.
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
#ifndef LSM6DSV32X_ACTIVITY_RECOGNITION_FOR_WRIST_H
#define LSM6DSV32X_ACTIVITY_RECOGNITION_FOR_WRIST_H

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
const ucf_line_t lsm6dsv32x_activity_recognition_for_wrist[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0x8C,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x98,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x02, .data = 0x21,},
  {.address = 0x08, .data = 0x14,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA6,},
  {.address = 0x09, .data = 0xBE,},
  {.address = 0x09, .data = 0x7A,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x10,},
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
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x18,},
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
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x10,},
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
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x18,},
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
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x21,},
  {.address = 0x08, .data = 0xB4,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x21,},
  {.address = 0x08, .data = 0xC0,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x43,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x88,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x87,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0xB3,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x8B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x2D,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x64,},
  {.address = 0x09, .data = 0xC8,},
  {.address = 0x09, .data = 0x27,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x71,},
  {.address = 0x09, .data = 0xCA,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x2A,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xA0,},
  {.address = 0x09, .data = 0xEE,},
  {.address = 0x09, .data = 0x32,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0xED,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x0D,},
  {.address = 0x09, .data = 0x87,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0xC8,},
  {.address = 0x09, .data = 0xF6,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xAA,},
  {.address = 0x09, .data = 0x67,},
  {.address = 0x09, .data = 0x2F,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0x63,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xAA,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0xF4,},
  {.address = 0x09, .data = 0xC8,},
  {.address = 0x09, .data = 0x7D,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xEA,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0x77,},
  {.address = 0x09, .data = 0x32,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0xC5,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0xC8,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x63,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xCA,},
  {.address = 0x09, .data = 0x0E,},
  {.address = 0x09, .data = 0x54,},
  {.address = 0x09, .data = 0x54,},
  {.address = 0x09, .data = 0xC2,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0xE8,},
  {.address = 0x09, .data = 0xFF,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0x61,},
  {.address = 0x09, .data = 0x2F,},
  {.address = 0x09, .data = 0x81,},
  {.address = 0x09, .data = 0xC3,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x5B,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xA2,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xA7,},
  {.address = 0x09, .data = 0xDD,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0xB1,},
  {.address = 0x09, .data = 0xCA,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x1E,},
  {.address = 0x09, .data = 0x88,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0xD4,},
  {.address = 0x09, .data = 0xC6,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x14,},
  {.address = 0x09, .data = 0xE7,},
  {.address = 0x09, .data = 0x58,},
  {.address = 0x09, .data = 0x56,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0xE6,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0xEA,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x4F,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0xBF,},
  {.address = 0x09, .data = 0x3E,},
  {.address = 0x09, .data = 0x21,},
  {.address = 0x09, .data = 0xC3,},
  {.address = 0x09, .data = 0xDC,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x26,},
  {.address = 0x09, .data = 0x8A,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xA9,},
  {.address = 0x09, .data = 0xB9,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x51,},
  {.address = 0x09, .data = 0xCA,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x2F,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xE1,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x2C,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0xA1,},
  {.address = 0x09, .data = 0x69,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0xEA,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x2A,},
  {.address = 0x09, .data = 0x89,},
  {.address = 0x09, .data = 0x5A,},
  {.address = 0x09, .data = 0x41,},
  {.address = 0x09, .data = 0x84,},
  {.address = 0x09, .data = 0xE4,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x50,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0xA7,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0xEA,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x10,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x0D, .data = 0x01,},
  {.address = 0x60, .data = 0x15,},
  {.address = 0x45, .data = 0x02,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x15, .data = 0x00,},
  {.address = 0x17, .data = 0x06,},
  {.address = 0x10, .data = 0x04,},
  {.address = 0x11, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSV32X_ACTIVITY_RECOGNITION_FOR_WRIST_H */
