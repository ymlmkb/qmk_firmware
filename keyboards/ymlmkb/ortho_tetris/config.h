#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Your Mom Loves My Keyboard
#define PRODUCT         ortho_tetris
#define DESCRIPTION     A custom keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { C7, C6, B7, F0, F1, F4 }
#define MATRIX_COL_PINS { D1, D3, D2, D5, B5, B4, D7, D4, D6, B1, B0, E6, F7, F6, F5 }
#define UNUSED_PINS     { D0, B2, B3, B6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
