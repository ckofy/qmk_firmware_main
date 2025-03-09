// Copyright 2023 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "custom_keycodes.h"
// #include "layer_names.h"

enum my_layers {
    _COLEMAK,
    _SYM,
    _NAV,
    _ADJ,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                                          KC_J,    KC_L,    KC_U,   KC_Y , KC_SCLN,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
		   KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                                          KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
   LSFT_T(KC_Z),    KC_X,    KC_C,    KC_D,    KC_V,                                                          KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         MO(_NAV),  KC_SPC, KC_LCTL, KC_LALT,                                     KC_LGUI,KC_ENT,OSM(MOD_LSFT),MO(_SYM)
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_SYM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
        KC_AMPR, KC_PERC, KC_HASH, KC_LPRN, KC_EXLM,                                                       KC_ASTR, KC_RPRN,   KC_AT,  KC_DLR, KC_CIRC,       
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
		   KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                                                          KC_8,    KC_0,    KC_2,    KC_4,    KC_6,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
         KC_GRV, KC_LBRC, KC_RBRC, KC_UNDS,  KC_EQL,                                                       KC_PLUS, KC_MINS, _______, KC_QUOT, KC_BSLS,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                     _______, _______, _______, _______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_NAV] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
         KC_TAB, KC_LGUI,LCTL(KC_E),KC_CAPS,_______,                                                       KC_PGUP, KC_HOME,   KC_UP,  KC_END,  KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
         KC_ESC, KC_LALT, KC_LSFT, KC_LCTL, _______,                                                       KC_PGDN, KC_LEFT, KC_DOWN,KC_RIGHT, KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
   LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),_______,                                                   KC_INS, _______, _______, _______, _______,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                     KC_ESC, _______, _______,_______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_ADJ] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______,                                                        KC_F11,  KC_F12, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, QK_BOOT,                                                       QK_BOOT, _______, _______,  KC_DQT, KC_PIPE,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                     _______, _______, _______, _______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    )
};
// clang-format on

// tri-layer feature for switching to _ADJ layer
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYM, _NAV, _ADJ);
}

// switching default layer between COLEMAK and QWERTY
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case K_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
                layer_move(_COLEMAK);
            }
            return false;
        case K_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
                layer_move(_QWERTY);
            }
            return false;
    }
    return true;
}
*/

// handling encoder rotation
/*
bool encoder_update_user(uint8_t index, bool clockwise) {
    // left hand
    if (index == 0) {
        if (IS_LAYER_ON(_SYM)) {
            if (clockwise) {
                tap_code_delay(KC_BRIGHTNESS_UP, 10);
            } else {
                tap_code_delay(KC_BRIGHTNESS_DOWN, 10);
            }
        } else {
            if (clockwise) {
                tap_code_delay(KC_VOLU, 10);
            } else {
                tap_code_delay(KC_VOLD, 10);
            }
        }
    }

    // right hand
    if (index == 1) {
         if (IS_LAYER_ON(_NAV)) {
            if (clockwise) {
                tap_code_delay(KC_UP, 10);
            } else {
                tap_code_delay(KC_DOWN, 10);
            }
        } else if (IS_LAYER_ON(_MOUSE)) {
            if (clockwise) {
                tap_code_delay(KC_PGUP, 10);
            } else {
                tap_code_delay(KC_PGDN, 10);
            }
        } else {
            if (clockwise) {
                tap_code_delay(KC_WH_D, 10);
            } else {
                tap_code_delay(KC_WH_U, 10);
            }
        }
    }

    return false;
}
*/
// // handling press of the encoder
// bool dip_switch_update_user(uint8_t index, bool active) {
//     // left hand
//     if (index == 0) {
//         if (active) {
//             tap_code(KC_0);
//         } else {}
//     }

//     // right hand
//     if (index == 1) {
//         if (active) {
//             tap_code(KC_1);
//         } else {}
//     }

//     return true;
// }
