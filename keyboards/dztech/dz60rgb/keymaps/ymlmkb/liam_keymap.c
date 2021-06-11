#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE 0
#define _FUNC 1
#define _EEGG 2

#define _LYOUT LAYOUT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = _LYOUT(
    KC_GESC,   KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,      KC_BSPC,   \
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,    KC_BSLS,   \
    KC_CAPS,     KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,         KC_ENT,         \
    KC_LSFT,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_RSFT,                KC_UP,   LT(_EEGG, KC_SLSH), \
    KC_LCTL,       KC_LWIN,   KC_LALT,                         KC_SPC,                          MO(_FUNC), KC_GRV,                 KC_LEFT, KC_DOWN,  KC_RGHT
  ),
  [_FUNC] = _LYOUT(
    _______,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,      KC_DEL,    \
    RGB_MOD,    RGB_VAI,   RGB_HUI,   RGB_SAI,   RGB_SPI,   RGB_TOG,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______,   \
    _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,         _______,        \
    _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                KC_PGUP,  _______, \
    _______,       _______,   _______,                         _______,                         KC_TRNS,   _______,                KC_HOME,  KC_PGDN,  KC_END
  ),
  [_EEGG] = _LYOUT(
    MD_BOOT,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,     _______,   \
    _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______,   \
    _______,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   Y_EE_LIAM, _______,   _______,         _______,        \
    _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                _______,  KC_TRNS, \
    _______,       _______,   _______,                         _______,                         _______,   _______,                _______,  _______,  _______
  ),
};

// KC_MPLY
// KC_MFFD
// KC_MRWD
// KC__MUTE
// KC__VOLUP
// KC__VOLDOWN
