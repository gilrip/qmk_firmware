#include QMK_KEYBOARD_H

enum keyboard_layers {
  _BL = 0, // Base Layer
  _FL     // Function Layer
};

// Custom #defined keycodes (shorter macros for readability)
#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)

#define KC_SPFN LT(_FL,KC_SPC)
#define KC_DEFN LT(_FL,KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_aek_103(
    KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,  KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCAP, KC_A,    KC_S,    KC_D,   KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_LSFT,
    KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPFN,                             KC_NO, KC_LGUI, KC_RCTL
  ),
  [_FL] = LAYOUT_aek_103(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, _______, KC_UP,   _______, KC_MHME, KC_MEND, _______, _______, _______, _______, _______, _______, _______, KC_BSLS,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_HOME, KC_END,  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______
  )
};
