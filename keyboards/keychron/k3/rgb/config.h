/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Pablo Ramirez <jp.ramangulo@gmail.com>
 * Copyright 2024 gdx
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3434

#define MANUFACTURER    Keychron
#define PRODUCT         K3 RGB

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5, B6, B7 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }

// Connects each switch in the dip switch to the GPIO pin of the MCU
#define DIP_SWITCH_PINS { D6, D5 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

// polling rate
#define USB_POLLING_INTERVAL_MS 1

/* LED Status indicators */
#define LED_CAPS_LOCK_PIN D4

/* RGB LED Config */
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS { C3, C1, C0, C6, C5, C4, C9, C8, C7, C12, C11, C10, B13, C14, C13, B14, B15, D3 }

#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS

/* RGB Matrix Effects */
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

/* legacy config */
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CUSTOM_SOLID_WHITE
#define RGB_MATRIX_STARTUP_HUE 0 
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL 127 //RGB_MATRIX_MAXIMUM_BRIGHTNESS/2

//#define RGB_MATRIX_SLEEP // turn off effects when suspended
#define RGB_DISABLE_WHEN_USB_SUSPENDED true