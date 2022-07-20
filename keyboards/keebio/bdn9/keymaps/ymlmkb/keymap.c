#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE  0
#define _YRGB1 1
#define _YRGB2 2
#define _YRGB3 3
#define _YRST  4

enum encoder_names {
  _LEFT,
  _RIGHT,
  _MIDDLE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    MO(_YRGB1), MO(_YRGB2), MO(_YRGB3),
    Y_QB_VI,    Y_WB_VI,    Y_WQB_VI,
    Y_REW_VI,   Y_PRV_VI,   Y_NXT_VI
  ),

  [_YRGB1] = LAYOUT(
    KC_TRNS, RGB_TOG, RGB_TOG,
    _______, _______, _______,
    _______, _______, _______
  ),

  [_YRGB2] = LAYOUT(
    RGB_TOG, KC_TRNS, _______,
    _______, _______, _______,
    _______, _______, _______
  ),

  [_YRGB3] = LAYOUT(
    RGB_TOG, _______, KC_TRNS,
    _______, _______, _______,
    _______, _______, _______
  ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {

  if (IS_LAYER_ON(_BASE)) {
    if (index == _LEFT) {
      if (clockwise) {
/*
        tap_code16(S(KC_SCLN));
        tap_code(KC_N);
        tap_code(KC_ENT);
*/
        tap_code16(C(KC_LEFT));
      } else {
/*
        tap_code16(S(KC_SCLN));
        tap_code16(S(KC_N));
        tap_code(KC_ENT);
*/
        tap_code16(C(KC_RGHT));
      }
    }
    else if (index == _MIDDLE) {
      if (clockwise) {
        tap_code16(C(KC_TAB));
      } else {
        tap_code16(RCS(KC_TAB));
      }
    }
    else if (index == _RIGHT) {
      if (clockwise) {
        tap_code16(A(KC_TAB));
      } else {
        tap_code16(LSA(KC_TAB));
      }
    }
  }

  if (IS_LAYER_ON(_YRGB1)) {
    if (index == _LEFT) {
      if (clockwise) {
        rgb_matrix_step();
      } else {
        rgb_matrix_step_reverse();
      }
    }
    else if (index == _MIDDLE) {
      if (clockwise) {
        rgb_matrix_increase_val();
      } else {
        rgb_matrix_decrease_val();
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

  if (IS_LAYER_ON(_YRGB2)) {
    if (index == _MIDDLE) {
      if (clockwise) {
        rgb_matrix_increase_hue();
      } else {
        rgb_matrix_decrease_hue();
      }
    }
  }

  if (IS_LAYER_ON(_YRGB3)) {
    if (index == _RIGHT) {
      if (clockwise) {
        rgb_matrix_increase_sat();
      } else {
        rgb_matrix_decrease_sat();
      }
    }
  }

  return false;
}
