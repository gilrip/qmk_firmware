#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)

#define KC_SPFN LT(_FN1,KC_SPC)
#define KC_DEFN LT(_FN2,KC_DEL)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_DEFN,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                    KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI ,                           KC_SPFN,                             KC_RALT, KC_RGUI, MO(_FN1), MO(_FN2)
  ),

  [_FN1] = LAYOUT_60_ansi(
    KC_GRV, KC_MUTE,   KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______,   KC_TRNS,
    _______, _______,  KC_UP,   _______, KC_MHME, KC_MEND, _______, _______, _______, _______, _______, _______, _______,  KC_BSLS,
    _______, KC_LEFT,  KC_DOWN, KC_RGHT, KC_HOME, KC_END,  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______,  _______
  ),
  [_FN2] = LAYOUT_60_ansi(
    KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_TRNS,
    RGB_TOG, RGB_MOD, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    BL_INC,  BL_DEC,  BL_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_GRV,  _______, _______,                            _______,                            _______, _______, _______,  _______
  )
};
