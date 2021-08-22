#include "ymlmkb.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  static uint32_t key_timer;

  switch (keycode) {

    case MD_BOOT:
      if (record->event.pressed) {
        key_timer = timer_read32();
      } else {
        if (timer_elapsed32(key_timer) >= 2000) {
          reset_keyboard();
        }
      }
      return false;

    case Y_PRV_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") "p" );
      }
      break;

    case Y_NXT_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") "n" );
      }
      break;

    case Y_TOG_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") SS_LCTRL("a") );
      }
      break;

    case Y_SCL_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") SS_TAP(X_ESC) );
      }
      break;

    case Y_NEW_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") "n");
      }
      break;

    case Y_DET_GS:
      if (record->event.pressed) {
        SEND_STRING( SS_LCTRL("a") "d" );
      }
      break;

    case Y_PRV_VI:
      if (record->event.pressed) {
        SEND_STRING( ":N" SS_TAP(X_ENT) );
      }
      break;

    case Y_NXT_VI:
      if (record->event.pressed) {
        SEND_STRING( ":n" SS_TAP(X_ENT) );
      }
      break;

    case Y_REW_VI:
      if (record->event.pressed) {
        SEND_STRING( ":rew" SS_TAP(X_ENT) );
      }
      break;

    case Y_WB_VI:
      if (record->event.pressed) {
        SEND_STRING( ":w!" SS_TAP(X_ENT) );
      }
      break;

    case Y_EE_LIAM:
      if (record->event.pressed) {
        SEND_STRING( "Liam is the coolest guy EVAR!!!" );
      }
      break;

  }

  return true;

};
