#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _FUNC 1

#define _LYOUT LAYOUT_ortho_5x15

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE] = _LYOUT(
    KC_GESC,   KC_LCMD, KC_C, KC_L, KC_U, KC_M, KC_P, KC_RCMD, KC_GESC, KC_MINS, KC_EQL,            KC_PGUP, KC_1, KC_2, Y_ID75_M1,
    KC_TAB,    KC_LALT, KC_S, KC_H, KC_R, KC_E, KC_D, KC_RALT, KC_TAB,  KC_BSLS, KC_GRV,            KC_PGDN, KC_3, KC_4, Y_ID75_M2,
    KC_ENT,    KC_LCTL, KC_B, KC_A, KC_T, KC_O, KC_N, KC_RCTL, KC_ENT,  KC_SCLN, KC_LBRC,           KC_RBRC, KC_5, KC_6, Y_ID75_M3,
    KC_BSPC,   KC_LSFT, KC_F, KC_I, KC_G, KC_J, KC_K, KC_RSFT, KC_BSPC, KC_QUOT, KC_COMM,           KC_DOT,  KC_7, KC_8, Y_ID75_M4,
    MO(_FUNC), KC_SPC,  KC_V, KC_W, KC_X, KC_Y, KC_Z, KC_SPC,  KC_Q,    KC_SLSH, LT(_FUNC,KC_HOME), KC_END,  KC_9, KC_0, Y_ID75_M5
  ),

 [_FUNC] = _LYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_CAPS, Y_QB_VI, Y_WB_VI, Y_WQB_VI,_______, _______, KC_CAPS, _______, _______, _______, _______, _______, _______, _______,
    KC_DEL,  _______, Y_PRV_VI,KC_UP,   Y_NXT_VI,_______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______, _______,
    KC_TRNS, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_DOT,  _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______
  )

};
