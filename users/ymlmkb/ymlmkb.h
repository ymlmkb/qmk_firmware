#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#define Y_SCU_VI  C(KC_E)
#define Y_SCD_VI  C(KC_Y)
#define Y_CPY     G(KC_C)
#define Y_PST     G(KC_V)

#define Y_CPY_RAW A(S(G(KC_C)))
#define Y_PST_OFC A(S(G(KC_V)))

#define Y_NXT_TAB   C(KC_TAB)
#define Y_PRV_TAB S(C(KC_TAB))

#define Y_NXT_SPC   C(KC_RGHT)
#define Y_PRV_SPC S(C(KC_LEFT))

#define Y_NXT_APP   G(KC_TAB)
#define Y_PRV_APP S(G(KC_TAB))

#define Y_NXT_WND   G(KC_GRV)
#define Y_PRV_WND S(G(KC_GRV))

#define Y_ESC_L1  LT(1, KC_ESC)
#define Y_ESC_L2  LT(2, KC_ESC)
#define Y_ESC_L3  LT(3, KC_ESC)
#define Y_LBR_ALT RALT_T(KC_LBRC)
#define Y_RBR_CTL RCTL_T(KC_RBRC)

enum custom_keycodes {
   MD_BOOT = SAFE_RANGE
  ,Y_PRV_GS
  ,Y_NXT_GS
  ,Y_TOG_GS
  ,Y_SCL_GS
  ,Y_NEW_GS
  ,Y_DET_GS
  ,Y_PRV_VI
  ,Y_NXT_VI
  ,Y_REW_VI
};
