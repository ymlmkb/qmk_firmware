#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    G(KC_C), KC_UP,   G(KC_V),
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
};
