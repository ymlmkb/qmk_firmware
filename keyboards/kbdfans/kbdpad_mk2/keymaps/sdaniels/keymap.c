#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_6x4( /* Base */
    KC_ESC,      LGUI_T(KC_TAB),  SGUI_T(KC_TAB),  KC_BSPC, \
    C(G(KC_Z)),  KC_PSLS,         KC_PAST,         KC_PMNS, \
    KC_P7,       KC_P8,           KC_P9,           KC_PPLS, \
    KC_P4,       KC_P5,           KC_P6,           KC_PPLS, \
    KC_P1,       KC_P2,           KC_P3,           KC_PENT, \
    KC_P0,       KC_P0,           KC_PDOT,         KC_PENT  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {
}
