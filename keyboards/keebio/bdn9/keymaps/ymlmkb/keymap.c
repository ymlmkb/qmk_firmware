#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _YRGB 1
#define _YRST 2
#define _SAVE 3

enum encoder_names {
  _LEFT,
  _RIGHT,
  _MIDDLE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    MO(_YRGB),    RGB_TOG,   MO(_YRGB),
    S(C(KC_TAB)), C(KC_TAB), KC_PGUP,
    S(A(KC_TAB)), A(KC_TAB), KC_PGDN
  ),

  [_YRGB] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS,
    MO(_YRST), RGB_TOG, RGB_MOD,
    XXXXXXX,   RGB_SPD, RGB_SPI
  ),

  [_YRST] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_TRNS,   XXXXXXX, XXXXXXX,
    RESET,     XXXXXXX, XXXXXXX
  ),
};

void encoder_update_user(uint8_t index, bool clockwise) {

  if (IS_LAYER_ON(_SAVE)) {
    if (index == _LEFT) {
      if (clockwise) {
        tap_code(KC_MS_WH_UP);
      } else {
        tap_code(KC_MS_WH_DOWN);
      }
    }
    else if (index == _MIDDLE) {
      if (clockwise) {
        tap_code16(S(KC_SCLN));
        tap_code(KC_N);
        tap_code(KC_ENT);
      } else {
        tap_code16(S(KC_SCLN));
        tap_code16(S(KC_N));
        tap_code(KC_ENT);
      }
    }
    else if (index == _RIGHT) {
      if (clockwise) {
        tap_code16(C(KC_A));
        tap_code((KC_N));
      } else {
        tap_code16(C(KC_A));
        tap_code((KC_P));
      }
    }
  }

  if (IS_LAYER_ON(_BASE)) {
    if (index == _LEFT) {
      if (clockwise) {
        rgb_matrix_increase_val();
      } else {
        rgb_matrix_decrease_val();
      }
    }
    else if (index == _MIDDLE) {
      if (clockwise) {
        rgb_matrix_step();
      } else {
        rgb_matrix_step_reverse();
      }
    }
    else if (index == _RIGHT) {
      if (clockwise) {
        rgb_matrix_increase_speed();
      } else {
        rgb_matrix_decrease_speed();
      }
    }
  }

  if (IS_LAYER_ON(_YRGB)) {
    if (index == _LEFT) {
      if (clockwise) {
        rgb_matrix_increase_hue();
      } else {
        rgb_matrix_decrease_hue();
      }
    }
    else if (index == _RIGHT) {
      if (clockwise) {
        rgb_matrix_increase_sat();
      } else {
        rgb_matrix_decrease_sat();
      }
    }
  }

}

// KC_MPLY
// KC_MFFD
// KC_MRWD
// KC__MUTE
// KC__VOLUP
// KC__VOLDOWN
