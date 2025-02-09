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

#define KC_MHME LGUI(KC_LEFT)
#define KC_MEND LGUI(KC_RGHT)
#define KC_SPFN LT(_FL,KC_SPC)
#define KC_DELFN LT(_ML,KC_DEL)

#define _BL 0
#define _FL 1
#define _ML 2

  /* Qwerty
   * .---------------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |Backslash|DelFN|
   * |---------------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  | Bksp |     |
   * |---------------------------------------------------------------------------------------------+
   * | CTRL    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter   | PgUp|
   * |---------------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  |  U  | Pgdn|
   * |---------------------------------------------------------------------------------------------+
   * | Ctrl |  Alt |  Win   |              Space                | RAlt |    |LGUI|  L |  D  |  R   |
   * '---------------------------------------------------------------------------------------------'
   */

  /* FnLayer
   * .---------------------------------------------------------------------------------------------.
   * | ` ~ |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE |PNTSC|
   * |---------------------------------------------------------------------------------------------+
   * | Tab    |     | UP  |     |MHME | MEND|     |     |     |     |     |PAUSE|     | BKSP |     |
   * |---------------------------------------------------------------------------------------------+
   * | CTRL    |LEFT | DOWN|RGHT |HOME | END |     |     |     |     |     | INS |    Enter  | HOME|
   * |---------------------------------------------------------------------------------------------+
   * | Shift     |     |     |     |     |     |     |     |     |     |     |  Shift  |VOLUP| END |
   * |---------------------------------------------------------------------------------------------+
   * | Ctrl |  Alt  |  Win  |                                   | RAlt|    |RCtrl|  L  |VOLDN|  R  |
   * '---------------------------------------------------------------------------------------------'
   */
  /* MLayer
   * .---------------------------------------------------------------------------------------------.
   * |     |MUTE |VOLD |VOLU | MPRT| MPLY| MNXT|     |     |     |     |     |     |         |     |
   * |---------------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     |      |     |
   * |---------------------------------------------------------------------------------------------+
   * | CTRL    |     |     |     |     |     |     |     |     |     |     |     |    Enter  |     |
   * |---------------------------------------------------------------------------------------------+
   * | Shift     |     |     |     |     |     |     |     |     |     |     |  Shift  |     |     |
   * |---------------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |    |     |     |     |     |
   * '---------------------------------------------------------------------------------------------'
   */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_65_ansi(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS,  KC_DELFN,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSPC,  KC_NO,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGUP,
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_PGDN,
      KC_LCTL, KC_LALT, KC_LGUI,                          KC_SPFN,                 KC_RALT,KC_LGUI,   KC_LGUI,  KC_LEFT, KC_DOWN,  KC_RIGHT),

  [_FL] = LAYOUT_65_ansi(
     /* esc      1        2        3        4       5       6       7       8       9         0        -         =     bkspc       `~  */
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_TRNS,   KC_TRNS,
     /*  tab      Q       W        E        R        T      Y        U      I        O        P        [         ]        \      delete*/ 
      KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_MHME,KC_MEND,KC_TRNS,KC_TRNS,KC_INS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_PAUS, KC_TRNS,  KC_TRNS,
     /*  caps     A       S        D        F        G      H        J      K        L        ;        '        enter             pg up*/
      KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_HOME,KC_END, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_INS,            KC_TRNS,
     /* shift             Z         X        C       V       B       N      M        ,        .        /        shift     up      pg dn*/
      KC_LSFT,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS,  KC_RSFT, KC_VOLU,  KC_TRNS,
     /* ctrl     win      alt                              space                    alt      fn       ctrl      left     down     right*/
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLD,  KC_TRNS),
    [_ML] = LAYOUT_65_ansi(
     /* esc      1        2        3        4       5       6       7       8       9         0        -         =     bkspc       `~  */
      KC_TRNS,  KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV,KC_MPLY,KC_MNXT,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,
     /*  tab      Q       W        E        R        T      Y        U      I        O        P        [         ]        \      delete*/ 
      KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_INS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
     /*  caps     A       S        D        F        G      H        J      K        L        ;        '        enter             pg up*/
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS,
     /* shift             Z         X        C       V       B       N      M        ,        .        /        shift     up      pg dn*/
      KC_LSFT,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS,  KC_RSFT, KC_TRNS,  KC_TRNS,
     /* ctrl     win      alt                              space                    alt      fn       ctrl      left     down     right*/
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS)
};
