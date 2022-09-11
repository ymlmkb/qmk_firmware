#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _CODE 1

#define _LYOUT LAYOUT_ortho_5x15

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE] = _LYOUT(
    KC_ESC,  KC_1,    KC_2,           KC_3,            KC_4,           KC_5,           KC_6,       KC_7,        KC_8,         KC_9,             KC_0,             KC_MINS,      KC_EQL,  KC_GRV,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,           KC_E,            KC_R,           KC_T,           KC_Y,       KC_U,        KC_I,         KC_O,             KC_P,             KC_BSLS,      KC_LBRC, KC_RBRC, KC_DEL,
    KC_ENT,  KC_A,    KC_S,           KC_D,            KC_F,           KC_G,           KC_H,       KC_J,        KC_K,         KC_L,             KC_SCLN,          KC_QUOT,      Y_SATAB, KC_ENT,  Y_ATAB,
    Y_CPY,   KC_UP,   KC_Z,           KC_X,            KC_C,           KC_V,           KC_B,       KC_N,        KC_M,         KC_COMM,          KC_DOT,           KC_SLSH,      Y_SCTAB, KC_UP,   Y_CTAB,
    KC_LEFT, KC_DOWN, KC_RGHT, LT(_CODE,KC_SLSH), LCTL_T(KC_SPC), LALT_T(KC_SPC), LCMD_T(KC_SPC),  KC_SPC, RCMD_T(KC_BSPC), RALT_T(KC_BSPC), RCTL_T(KC_BSPC), LT(_CODE,KC_ENT), KC_LEFT, KC_DOWN, KC_RGHT
  ),

 [_CODE] = _LYOUT(
    MD_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  Y_QB_VI,  Y_WB_VI,  Y_WQB_VI, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    KC_LCMD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_CAPS,  _______,  _______,  _______,  _______,  _______,
    Y_PST,    KC_PGUP,  _______,  _______,  _______,  _______,  Y_BASH,   _______,  _______,  _______,  _______,  _______,  _______,  Y_CPY,    _______,
    KC_HOME,  KC_PGDN,  KC_END,   KC_TRNS,  Y_PRV_VI, Y_NXT_VI, _______,  _______,  KC_DEL,   KC_DEL,   KC_DEL,   KC_TRNS,  Y_PRV_GS, Y_PST,    Y_NXT_GS
  ),
};
