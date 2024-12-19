// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┐
     * │esc │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │  \ │
     * ├────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼────┤
     * │tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │bksp│
     * ├────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼────┤
     * │caps│ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ent │
     * ├────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼────┤
     * │LSHT│ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │RSHT│
     * └────┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴────┘
     *          │app│alt│gui│spc│spc│ctl│fn │mut│         
     *          └───┼───┼───┼───┼───┼───┼───┼───┘
     *              │grv│lft│up │dwn│rgt│dqo│
     *              └───┴───┴───┴───┴───┴───┘
     */
    /*  module4fix
    [-] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
                          _______, _______, _______, _______, _______, _______, _______, _______, 
                                   _______, _______, _______, _______, _______, _______
    ) 
    */
    [0] = LAYOUT(
        KC_ESC,   KC_1,       KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,          KC_9,    KC_0,    KC_BSLS, 
		KC_TAB,   KC_Q,       KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,          KC_O,    KC_P,    KC_BSPC, 
		KC_CAPS,  LT(3, KC_A),KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,          KC_L,    KC_SCLN, KC_ENT, 
		KC_LSFT,  KC_Z,       KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,       KC_DOT,  KC_SLSH, KC_LSFT, 
		                    KC_APP, KC_LALT, KC_LGUI, LT(2, KC_SPC), KC_SPC, KC_LCTL, LT(1, KC_ESC), KC_MUTE,
	 	                            KC_GRV,  KC_LEFT, KC_UP,KC_DOWN, KC_RGHT, KC_QUOT
    ),
    [1] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, 
        _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______, _______, _______, _______, 
                          _______, _______, _______, _______, _______, _______, _______, _______, 
                                   KC_F11,  KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_F12
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    KC_ASTR, _______, 
        _______, _______, _______, _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    KC_PLUS, _______, 
        _______, _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    KC_MINS, KC_EQL, 
        _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, KC_SLSH, _______, 
                          _______, _______, _______, _______, _______, _______, _______, _______, 
                          KC_MCTL, KC_KB_VOLUME_DOWN, KC_BRIU, KC_BRID, KC_KB_VOLUME_UP, KC_LPAD
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MINS, KC_EQL, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
                          _______, _______, _______, _______, _______, _______, _______, _______, 
                                   _______, _______, _______, _______, _______, _______
    ) 
};