#include QMK_KEYBOARD_H
#include "ymlmkb.h"

enum layers {
    _BASE = 0
};

enum encoder_names {
  _ENC1,
  _ENC2,
  _ENC3,
  _ENC4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
                                 Y_PRF1,   Y_PRF2,  Y_PRF3,
    _______, _______, KC_MUTE,   G(KC_X),  G(KC_C), G(KC_V),
    _______, _______, RGB_TOG,   Y_NBRD,   Y_BRD,   KC_PGUP,
    _______, _______, RGB_TOG,   KC_DOT,   KC_UP,   KC_PGDN,
    _______, _______, RGB_TOG,   KC_LEFT,  KC_DOWN, KC_RGHT
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {

  if (index == _ENC1) {
    if (clockwise) {
      tap_code(KC_VOLD);
    } else {
      tap_code(KC_VOLU);
    }
  }

  if (index == _ENC2) {
    if (clockwise) {
      rgblight_step();
    } else {
      rgblight_step_reverse();
    }
  }

  if (index == _ENC3) {
    if (clockwise) {
      rgblight_increase_hue();
    } else {
      rgblight_decrease_hue();
    }
  }

  if (index == _ENC4) {
    if (clockwise) {
      rgblight_increase_val();
    } else {
      rgblight_decrease_val();
    }
  }

  return true;
}
