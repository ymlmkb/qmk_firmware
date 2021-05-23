#include QMK_KEYBOARD_H
#include "ymlmkb.h"

#define _BASE  0
#define _RAISE 1
#define _LOWER 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    Y_CPY, Y_PRV_GS, Y_NXT_GS,
    Y_PST, Y_PRV_VI, Y_NXT_VI
  ),

  [_RAISE] = LAYOUT(
    KC_TRNS, Y_SCL_GS, Y_TOG_GS,
    _______, Y_DET_GS,  Y_NEW_GS
  ),

  [_LOWER] = LAYOUT(
    _______, _______,  Y_SCU_VI,
    KC_TRNS, Y_REW_VI, Y_SCD_VI
  ),

};
