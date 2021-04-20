/* Copyright 2017 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1

#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)

#define KC_SPFN LT(_FN,KC_SPC)

// Fillers to make layering more clears
#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = LAYOUT_all(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_PSCR, KC_SLCK, KC_PAUS, \
      KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_INS,  KC_HOME, KC_PGUP, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_DEL,  KC_END,  KC_PGDN, \
      KC_LCTL, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,                   KC_UP, \
      KC_LALT, KC_LGUI, KC_LGUI,                 KC_SPFN,                         KC_LGUI, KC_RGUI,______,   KC_LALT,                   KC_LEFT, KC_DOWN, KC_RGHT),

     [_FN] = LAYOUT_all(
      ______, ______,  ______,  ______,  ______,  ______,  ______, ______, ______, ______, ______, ______, ______,                    ______, ______, ______, \
      ______, KC_MUTE,KC_VOLD, KC_VOLU,  KC_MPRV,KC_MPLY,  KC_MNXT,  KC_7,   KC_8,   KC_9,   KC_0, ______, ______, RESET, RESET,      BL_TOGG,BL_INC, BL_DEC, \
      ______, ______,   KC_UP,  ______,  KC_MHME,KC_MEND, ______,    KC_4,   KC_5,   KC_6, KC_ENT, ______, ______, ______,            BL_BRTG, RGB_TOG, ______, \
      KC_CAPS,KC_LEFT,KC_DOWN, KC_RGHT,  KC_HOME, KC_END,  ______,   KC_1,   KC_2,   KC_3, KC_ENT, ______, ______, \
      ______, ______, ______,   ______,  ______, ______,  ______,  ______, ______, ______, ______, ______, ______, ______,                         ______, \
      ______, ______, ______,          ______,                     ______, ______, ______, ______,                                      ______, ______, ______),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
