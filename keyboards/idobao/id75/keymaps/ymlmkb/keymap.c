#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _FUNC 1

#define _LYOUT LAYOUT_ortho_5x15

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE] = _LYOUT(
    KC_GESC, KC_LCTL,   KC_C, KC_L, KC_U, KC_M, KC_P,    KC_RCTL,     KC_GESC, KC_MINS, KC_EQL,  KC_PGUP, KC_1, KC_2, Y_ID75_M1,
    KC_TAB,  KC_LCMD,   KC_S, KC_H, KC_R, KC_E, KC_D,    KC_RCMD,     KC_TAB,  KC_BSLS, KC_GRV,  KC_PGDN, KC_3, KC_4, Y_ID75_M2,
    KC_ENT,  KC_LSFT,   KC_B, KC_A, KC_T, KC_O, KC_N,    KC_RSFT,     KC_ENT,  KC_SCLN, KC_LBRC, KC_RBRC, KC_5, KC_6, Y_ID75_M3,
    KC_BSPC, KC_LALT,   KC_F, KC_I, KC_G, KC_J, KC_K,    KC_RALT,     KC_BSPC, KC_QUOT, KC_COMM, KC_DOT,  KC_7, KC_8, Y_ID75_M4,
    KC_SPC,  MO(_FUNC), KC_V, KC_W, KC_X, KC_Y, KC_Z, LT(_FUNC,KC_Q), KC_SPC,  KC_SLSH, KC_HOME, KC_END,  KC_9, KC_0, Y_ID75_M5
  ),

 [_FUNC] = _LYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_CAPS, _______, _______, _______, _______, _______, KC_CAPS, _______, _______, _______, _______, _______, _______, _______,
    KC_DEL,  _______, _______, KC_UP,   _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______, _______,
    _______, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_TRNS, _______, _______, _______, _______, _______, _______, _______
  )

};
