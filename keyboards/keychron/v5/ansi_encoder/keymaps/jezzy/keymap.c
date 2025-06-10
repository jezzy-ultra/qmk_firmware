#include "keycodes.h"
#include QMK_KEYBOARD_H

// clang-format off

enum layers{
  QWERTY,
  CLMKDH,  // Colemak Mod-DH
  FN
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_ansi_98(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_DEL,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        MO(FN),   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT,  KC_PENT),
    [CLMKDH] = LAYOUT_ansi_98(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,
        _______,  KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  _______,    _______,  _______,            _______,  _______,  _______,
        _______,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     _______,              _______,            _______,  _______,  _______,  _______,
        _______,            KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_K,     KC_H,     _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______),
    [FN] = LAYOUT_ansi_98(
        QK_BOOT,            _______,  _______,  DB_TOGG,  _______,  EE_CLR,   _______,  _______,  _______,  QK_RBT,   _______,    _______,  _______,            KC_PSCR,  KC_SCRL,  KC_PAUS,  RM_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  KC_INS,             KC_NUM,   RM_SPDD,  RM_SPDU,  _______,
        _______,  KC_ESC,   KC_UP,    KC_ENT,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            RM_HUEU,  RM_SATU,  RM_VALU,
        _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,              _______,            RM_HUED,  RM_SATD,  RM_VALD,  _______,
        _______,            KC_DEL,   KC_BSPC,  KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  KC_PGUP,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_APP,     _______,  KC_HOME,  KC_PGDN,  KC_END,   _______,  NK_TOGG,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [QWERTY]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [CLMKDH]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [FN]       = { ENCODER_CCW_CW(RM_PREV, RM_NEXT)},
};
#endif // ENCODER_MAP_ENABLE
