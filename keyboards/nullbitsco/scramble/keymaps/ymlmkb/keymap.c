#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE  0
#define _RAISE 1
#define _LOWER 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    LT(1, KC__MUTE), KC__VOLUP,   KC_MPLY,
    KC_MRWD,         KC__VOLDOWN, KC_MFFD
  ),

  [_RAISE] = LAYOUT(
    KC_TRNS, Y_PRV_VI, Y_NXT_VI,
    Y_PST,   Y_PRV_GS, Y_NXT_GS
  ),

};

// KC_MPLY
// KC_MFFD
// KC_MRWD
// KC__MUTE
// KC__VOLUP
// KC__VOLDOWN
