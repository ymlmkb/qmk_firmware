#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#define Y_SCU_VI  C(KC_E)
#define Y_SCD_VI  C(KC_Y)
#define Y_CPY     G(KC_C)
#define Y_PST     G(KC_V)

#define Y_CTAB    C(KC_TAB)
#define Y_SCTAB S(C(KC_TAB))

#define Y_ATAB    A(KC_TAB)
#define Y_SATAB S(A(KC_TAB))

#define Y_NSPC   C(KC_RGHT)
#define Y_PSPC S(C(KC_LEFT))

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
  ,Y_QB_VI
  ,Y_WB_VI
  ,Y_WQB_VI
  ,Y_EE_LIAM
  ,Y_BASH
  ,Y_PROFILE
};
