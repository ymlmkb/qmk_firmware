#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE  0
#define _RAISE 1
#define _LOWER 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    KC_V,     KC_DOT,   Y_WB_VI,
    Y_REW_VI, Y_PRV_VI, Y_NXT_VI
  ),

};

// KC_MPLY
// KC_MFFD
// KC_MRWD
// KC__MUTE
// KC__VOLUP
// KC__VOLDOWN
