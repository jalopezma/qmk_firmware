/* Copyright 2019 Jose Lopez
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
/*
 * To being able to use the spanish Ñ and the accent (tilde) this header must be included
 */
#include "keymap_spanish.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)
#define ____ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( \
    KC_ESC,  KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,   \
    KC_TAB,  KC_A,  KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   ES_SCLN,KC_QUOT,   \
    KC_LSFT, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,               KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,   \
                    ____,   ____,                                               ____,   ____,                      \
                                    ADJUST, KC_SPC,             KC_ENT, ADJUST,                                    \
                                    KC_LALT,LOWER,              RAISE,  KC_RALT,                                   \
                                    KC_LGUI,KC_LCTL,            KC_RCTL,KC_RGUI                                    \
  ),
  [_LOWER] = LAYOUT( \
    KC_TILD, KC_EXLM,KC_AT, KC_HASH,KC_DLR, KC_PERC,            KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,    \
    ____,    KC_F1,  KC_F2, KC_F3,  KC_F4,  KC_F5,              KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,   \
    ____,    KC_F7,  KC_F8, KC_F8,  KC_F10, KC_F11,             KC_F12,S(KC_NUHS),S(KC_NUBS),____,KC_NUBS,____,    \
                    ____,   ____,                                               ____,   ____,                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____                                       \
  ),
  [_RAISE] = LAYOUT( \
    KC_GRV,  KC_1,   KC_2,  KC_3,   KC_4,   KC_5,               KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,    \
    ____,    ____,   ____,  KC_HOME,KC_END, ____,               ____,   KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_BSLS,   \
    ____,    ____,   ____,  ____,   ____,   ____,               KC_NUHS,KC_NUBS,____,   ____,   ____,   ____,      \
                     ____,  ____,                                               ____,   ____,                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____                                       \
  ),
  [_ADJUST] = LAYOUT( \
    ____,    RESET,  ____,  AU_ON,  AU_OFF, AG_NORM,            AG_SWAP,____,   ____,   ____,   ____,   KC_DEL,    \
    ____,    ____,   KC_MPLY,KC_MUTE,____,  ____,               KC_LEFT,KC_DOWN,KC_UP, KC_RIGHT,ES_NTIL,____,      \
    ____,    ____,   KC_VOLD,KC_VOLU,____,  ____,               ES_ACUT,____,   ____,   ____,   ____,   ____,      \
                     ____,  ____,                                               ____,   ____,                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____,                                      \
                                    ____,   ____,               ____,   ____                                       \
  ),
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
