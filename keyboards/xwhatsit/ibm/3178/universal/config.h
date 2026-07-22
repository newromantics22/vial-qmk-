/*
Copyright 2020 Purdea Andrei

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x0481
#define PRODUCT_ID 0x0002
#define DEVICE_VER 0x0001
#define MANUFACTURER Tom Wong-Cornall/Purdea Andrei/kmnov2017/listofoptions
#define PRODUCT IBM 3178
#define DESCRIPTION QMK firmware for the IBM 3178 keyboard using a 'universal' xwhatsit controller PCB

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif

/* Controller target: SMD / wcass Model F */
#define CONTROLLER_IS_XWHATSIT_MODEL_F_OR_WCASS_MODEL_F
//#define CONTROLLER_IS_XWHATSIT_BEAMSPRING_REV_4
//#define CONTROLLER_IS_THROUGH_HOLE_BEAMSPRING
//#define CONTROLLER_IS_THROUGH_HOLE_MODEL_F

#define CAPSENSE_KEYBOARD_SETTLE_TIME_US 8
#define CAPSENSE_DAC_SETTLE_TIME_US 8
#define CAPSENSE_HARDCODED_SAMPLE_TIME 3

#define CAPSENSE_CAL_ENABLED 1
//#define CAPSENSE_CAL_ENABLED 0
#define CAPSENSE_CAL_DEBUG 1
// #define CAPSENSE_CAL_DEBUG 0
#define CAPSENSE_CAL_INIT_REPS 16
#define CAPSENSE_CAL_EACHKEY_REPS 16
#define CAPSENSE_CAL_BINS 5
#define CAPSENSE_CAL_THRESHOLD_OFFSET 96

#if !CAPSENSE_CAL_ENABLED
#define CAPSENSE_HARDCODED_THRESHOLD 130
#endif

#define CAPSENSE_KEYMAP_COL_TO_PHYSICAL_COL(col) (4+(col))

// By default we set up for support of xwhatsit's solenoid driver board.
// Comment out HAPTIC_ENABLE_PIN if you don't have an enable pin:
//#define HAPTIC_ENABLE_PIN D3
// We disable haptic feedbeck during USB low power conditions:
#define HAPTIC_OFF_IN_LOW_POWER 1
// Change this if you are using a different pin for the solenoid:
//#define SOLENOID_PIN D2
// If you are not using a solenoid then comment out the above, and also in rules.mk, remove "HAPTIC_ENABLE += SOLENOID"
// You can also tune the following for your solenoid:
#define SOLENOID_DEFAULT_DWELL 4
#define SOLENOID_MIN_DWELL 4
//#define SOLENOID_MAX_DWELL 100
#define NO_HAPTIC_MOD

// The following definitions are compatible with the Model F SMD controllers
// from here: https://deskthority.net/viewtopic.php?f=7&t=24597 supporting the
// AT lock lights header
#define LED_NUM_LOCK_PIN D7
#define LED_CAPS_LOCK_PIN E6
#define LED_SCROLL_LOCK_PIN B6

#include "../../../post_config.h"
