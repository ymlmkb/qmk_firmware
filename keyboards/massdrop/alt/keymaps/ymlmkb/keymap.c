#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _FUNC 1

#define _LYOUT LAYOUT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = _LYOUT(
    QK_GESC,   KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,      KC_BSPC,  KC_GRV,  \
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,    KC_BSLS,  KC_DEL,  \
    KC_LCTL,     KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,               KC_ENT,  KC_PGUP, \
    KC_LSFT,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,               KC_UP,  KC_PGDN, \
    MO(_FUNC),     KC_LALT,   KC_LCMD,                         KC_SPC,                          KC_RCMD,   MO(_FUNC),                       KC_LEFT, KC_DOWN,  KC_RGHT
  ),
  [_FUNC] = _LYOUT(
    MD_BOOT,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,      _______,  _______,  \
    RGB_MOD,    RGB_VAI,   RGB_HUI,   RGB_SAI,   RGB_SPI,   RGB_TOG,   _______,   _______,   _______,   _______,   _______,   KC_HOME,   KC_END,     _______,  _______,  \
    KC_CAPS,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,  _______,  \
    _______,      _______,   _______,   Y_CPY,     Y_PST,     _______,   _______,   _______,   _______,   _______,   _______,   _______,             Y_SCL_GS, _______,  \
    KC_TRNS,       Y_PRV_VI,  Y_NXT_VI,                        _______,                         _______,   KC_TRNS,                        Y_PRV_GS, Y_TOG_GS, Y_NXT_GS
  ),
};
