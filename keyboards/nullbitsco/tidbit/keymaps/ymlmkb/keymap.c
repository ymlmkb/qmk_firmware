#include QMK_KEYBOARD_H
#include "ymlmkb.h"

//#define _BASE 0
//#define _FUNC 1
//#define _RGB  2

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
    ___,     ___,     KC_LCMD, KC_LSFT,  KC_TAB,  KC_BSPC,
    ___,     ___,     G(KC_X), G(KC_C),  G(KC_V), KC_PGUP,
    ___,     ___,     C(KC_A), KC_UP,    C(KC_N), KC_PGDN,
    ___,     ___,     KC_LEFT, KC_DOWN,  KC_RGHT, LT(_RGB,KC_ENTER)
    ),

    [_FUNC] = LAYOUT(
                   ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___
    ),

    [_RGB] = LAYOUT(
                       ___,     ___,     ___,
    ___, ___, ___,     ___,     ___,     ___,
    ___, ___, ___,     ___,     ___,     ___,
    ___, ___, ___,     RGB_SAI, ___,     ___,
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

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    G(KC_C),   G(KC_V), KC_PGUP,
    MO(_FUNC), KC_UP,   KC_PGDN,
    KC_LEFT,   KC_DOWN, KC_RGHT
  ),

  [_FUNC] = LAYOUT(
    Y_PROFILE, _______,    _______,
    KC_TRNS,   G(KC_PGUP), MO(_RGB),
    _______,   G(KC_PGDN), _______
  ),

  [_RGB] = LAYOUT(
    _______, RGB_TOG, _______,
    KC_TRNS, RGB_MOD, KC_TRNS,
    RGB_VAI, RGB_HUI, RGB_SPI
  ),
};


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

bool encoder_update_user(uint8_t index, bool clockwise) {

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

  return true;
}

// KC_MPLY
// KC_MFFD
// KC_MRWD
// KC__MUTE
// KC__VOLUP
// KC__VOLDOWN
*/
