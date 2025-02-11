/*
Copyright 2021 keebnewb

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1

#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)

#define KC_SPFN LT(_FN,KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_tsangan(
        KC_ESC,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
        KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(2),
        KC_LALT,  KC_LCTL,  KC_LGUI,                            KC_SPFN,                                      KC_RGUI, KC_RCTL, KC_RALT
    ),

    [1] = LAYOUT_60_tsangan(
        KC_GRV,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        _______,  _______,  KC_UP,   _______, KC_MHME, KC_MEND, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,  KC_LEFT,  KC_DOWN, KC_RGHT, KC_HOME, KC_END,  _______, _______, _______, _______, _______, _______,         _______,
        _______,  _______,  _______, _______, KC_PGUP, KC_PGDN, _______, _______, _______, _______, _______,          _______, _______,
        _______,  RESET,    _______,                            _______,                                     _______, _______, _______
    ),
    [2] = LAYOUT_60_tsangan(
        KC_GRV,  KC_F1,    KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
        RGB_TOG,  RGB_RMOD, RGB_MOD, RGB_SAD, RGB_SAI, RGB_VAI, RGB_VAD, RGB_HUI, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, KC_CLR,
        _______,  KC_VOLD,  KC_VOLU, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT,         _______,
        BL_TOGG,  BL_DEC,   BL_INC,  KC_CALC, KC_MPLY, KC_MNXT, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN,          _______, _______,
        _______,  RESET,    _______,                            _______,                                     KC_STOP, _______, _______
    ),
};
