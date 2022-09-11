#include QMK_KEYBOARD_H
#include "ymlmkb.h"

enum layers {
    _BASE = 0,
    _FUNC,
    _RGB
};

enum encoder_names {
  _ENC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
                                 RGB_TOG,  Y_PRF1,  Y_PRF2,
    ___,     ___,     KC_LCMD,   KC_LALT,  KC_LCTL, KC_TAB,
    ___,     ___,     G(KC_C),   G(KC_V),  KC_PGUP, KC_BSPC,
    ___,     ___,     MO(_FUNC), KC_UP,    KC_PGDN, KC_ENTER,
    ___,     ___,     KC_LEFT,   KC_DOWN,  KC_RGHT, KC_LSFT
    ),

    [_FUNC] = LAYOUT(
                       ___, ___, ___,
    ___, ___, ___,     ___, ___, ___,
    ___, ___, G(KC_X), ___, ___, KC_DEL,
    ___, ___, KC_TRNS, ___, ___, ___,
    ___, ___, ___,     ___, ___, MO(_RGB)
    ),

    [_RGB] = LAYOUT(
                       ___,     ___,     ___,
    ___, ___, ___,     ___,     ___,     ___,
    ___, ___, ___,     ___,     ___,     ___,
    ___, ___, KC_TRNS, RGB_SAI, ___,     ___,
    ___, ___, RGB_HUD, RGB_SAD, RGB_HUI, KC_TRNS
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {

  if (IS_LAYER_ON(_BASE)) {
    if (index == _ENC) {
      if (clockwise) {
        rgblight_step();
      } else {
        rgblight_step_reverse();
      }
    }
  }

  if (IS_LAYER_ON(_RGB)) {
    if (index == _ENC) {
      if (clockwise) {
        rgblight_increase_val();
      } else {
        rgblight_decrease_val();
      }
    }
  }

  if (IS_LAYER_ON(_FUNC)) {
    if (index == _ENC) {
      if (clockwise) {
        //rgb_matrix_increase_hue();
      } else {
        //rgb_matrix_decrease_hue();
      }
    }
  }

  return true;
}
