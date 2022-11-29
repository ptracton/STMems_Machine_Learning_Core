/*
 ******************************************************************************
 * @file    lsm6dsrx_activity_recognition_for_wrist.h
 * @author  MEMS Software Solutions Team
 * @brief   This file contains the configuration for lsm6dsrx_activity_recognition_for_wrist.
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
#ifndef LSM6DSRX_ACTIVITY_RECOGNITION_FOR_WRIST_H
#define LSM6DSRX_ACTIVITY_RECOGNITION_FOR_WRIST_H

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
const ucf_line_t lsm6dsrx_activity_recognition_for_wrist[] = {
  {.address = 0x10, .data = 0x00,},
  {.address = 0x11, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x00,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xEA,},
  {.address = 0x09, .data = 0xB4,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xF2,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x02, .data = 0x11,},
  {.address = 0x08, .data = 0xFA,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0xDC,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x09, .data = 0xE8,},
  {.address = 0x09, .data = 0x03,},
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0x3C,},
  {.address = 0x09, .data = 0x07,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x3B,},
  {.address = 0x09, .data = 0xBE,},
  {.address = 0x09, .data = 0x35,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x2F,},
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
  {.address = 0x02, .data = 0x31,},
  {.address = 0x08, .data = 0xDC,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x11,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x40,},
  {.address = 0x02, .data = 0x09,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0xE2,},
  {.address = 0x09, .data = 0x45,},
  {.address = 0x09, .data = 0x3B,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x2D,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x0F,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x06,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x90,},
  {.address = 0x09, .data = 0x29,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFC,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x0E,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA8,},
  {.address = 0x09, .data = 0x2C,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xDB,},
  {.address = 0x09, .data = 0x56,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0F,},
  {.address = 0x09, .data = 0x55,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA0,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x2B,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x1F,},
  {.address = 0x09, .data = 0x22,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x55,},
  {.address = 0x09, .data = 0x16,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x80,},
  {.address = 0x09, .data = 0x4B,},
  {.address = 0x09, .data = 0x13,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x45,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xB9,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x15,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xBE,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x2E,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xFB,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x1A,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x19,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x59,},
  {.address = 0x09, .data = 0x57,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x1B,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x6B,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x1E,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0C,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x72,},
  {.address = 0x09, .data = 0x3D,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x72,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xAB,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x19,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x27,},
  {.address = 0x09, .data = 0x42,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x25,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xF3,},
  {.address = 0x09, .data = 0x57,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x46,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x1B,},
  {.address = 0x09, .data = 0x3D,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x34,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x58,},
  {.address = 0x09, .data = 0x26,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xE9,},
  {.address = 0x09, .data = 0x3B,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x68,},
  {.address = 0x09, .data = 0x56,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x92,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x52,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x4D,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x54,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x3C,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xF8,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x36,},
  {.address = 0x09, .data = 0x58,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x32,},
  {.address = 0x09, .data = 0x5A,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xA0,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x5C,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0x2F,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xDD,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x2C,},
  {.address = 0x09, .data = 0x2F,},
  {.address = 0x09, .data = 0x31,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xB7,},
  {.address = 0x09, .data = 0x3D,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x33,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4F,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x68,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x60,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x6A,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xE4,},
  {.address = 0x09, .data = 0x57,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xE0,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x3A,},
  {.address = 0x09, .data = 0x6E,},
  {.address = 0x09, .data = 0x20,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xF8,},
  {.address = 0x09, .data = 0x3D,},
  {.address = 0x09, .data = 0x38,},
  {.address = 0x09, .data = 0x02,},
  {.address = 0x09, .data = 0x30,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xD3,},
  {.address = 0x09, .data = 0x56,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x72,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x49,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC3,},
  {.address = 0x09, .data = 0x3F,},
  {.address = 0x09, .data = 0x3D,},
  {.address = 0x09, .data = 0x78,},
  {.address = 0x09, .data = 0x04,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x01,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x18,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x42,},
  {.address = 0x09, .data = 0x7C,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xED,},
  {.address = 0x09, .data = 0x42,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x7E,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xC0,},
  {.address = 0x09, .data = 0x48,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x02, .data = 0x29,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x4C,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x82,},
  {.address = 0x09, .data = 0x1C,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x44,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0xF5,},
  {.address = 0x09, .data = 0x39,},
  {.address = 0x09, .data = 0x43,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x28,},
  {.address = 0x09, .data = 0x0A,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x9D,},
  {.address = 0x09, .data = 0x43,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x88,},
  {.address = 0x09, .data = 0x10,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x40,},
  {.address = 0x09, .data = 0x49,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x8A,},
  {.address = 0x09, .data = 0x24,},
  {.address = 0x09, .data = 0x09,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x4E,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x08,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x0B,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x04, .data = 0x00,},
  {.address = 0x05, .data = 0x10,},
  {.address = 0x03, .data = 0x02,},
  {.address = 0x02, .data = 0x01,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x5E, .data = 0x02,},
  {.address = 0x01, .data = 0x80,},
  {.address = 0x0D, .data = 0x01,},
  {.address = 0x60, .data = 0x15,},
  {.address = 0x01, .data = 0x00,},
  {.address = 0x10, .data = 0x2C,},
  {.address = 0x11, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* LSM6DSRX_ACTIVITY_RECOGNITION_FOR_WRIST_H */

