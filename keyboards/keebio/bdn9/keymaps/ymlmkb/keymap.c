#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _FUNC 1
#define _RGB  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    G(KC_C),   G(KC_V), G(KC_PGUP),
    MO(_FUNC), KC_UP,   G(KC_PGDN),
    KC_LEFT,   KC_DOWN, KC_RGHT
  ),

  [_FUNC] = LAYOUT(
    Y_PROFILE, _______, _______,
    KC_TRNS,   _______, MO(_RGB),
    _______,   _______, _______
  ),

  [_RGB] = LAYOUT(
    _______, RGB_TOG, _______,
    KC_TRNS, RGB_MOD, KC_TRNS,
    RGB_VAI, RGB_HUI, RGB_SPI
  ),
};
