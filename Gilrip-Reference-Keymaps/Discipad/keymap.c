/* Copyright 2019 COSEYFANNITUTTI
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

#define _BL 0
#define _FN 1
#define KC_ETFN LT(_FN,KC_ENT)
#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_numpad_5x4(
      KC_NLCK, KC_PGUP, KC_PGDN, KC_BSPC, 
      KC_P7,   KC_P8,   KC_P9,            
      KC_P4,   KC_P5,   KC_P6,   KC_TAB, 
      KC_P1,   KC_P2,   KC_P3,            
      KC_P0,   KC_PDOT,          KC_ETFN  ),
  [_FN] = LAYOUT_numpad_5x4(
      KC_DEL,    KC_TRNS,   KC_TRNS, KC_TRNS, 
      KC_HOME,   KC_SPC,    KC_END,            
      KC_MHME,   KC_UP,     KC_MEND, KC_TAB, 
      KC_LEFT,   KC_DOWN,   KC_RGHT,            
      KC_TRNS,              KC_TRNS, KC_ENT)
};
