#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Your Mom Loves My Keyboard
#define PRODUCT         wasdv2-teensy
#define DESCRIPTION     A custom keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { C6, C7, D5, D4, D6, D7 }
#define MATRIX_COL_PINS { F1, F5, F4, F6, F7, B6, B5, B4, D3, D2, D1, F0, D0, B7, B3, B2, B1, B0 }
#define UNUSED_PINS     { E6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
