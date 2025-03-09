// Copyright 2023 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "custom_keycodes.h"
// #include "layer_names.h"

enum my_layers {
    _COLEMAK,
    _SYM,
    _NAV,
    _MEDIA_FN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                                          KC_J,    KC_L,    KC_U,   KC_Y , KC_SCLN,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
		   KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                                          KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
           KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                                          KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         MO(_NAV),  KC_SPC, KC_LCTL, KC_LALT,                                     KC_LGUI,  KC_ENT, KC_LSFT, MO(_SYM)
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_SYM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
        KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                                                       KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        KC_LALT, KC_LCTL,  KC_GRV, _______,  KC_DQT,                                                       KC_UNDS, _______, _______, KC_RCTL, KC_LALT,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        KC_LABK, KC_LPRN, KC_LCBR, KC_LBRC,KC_TILDE,                                                       KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_RABK,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                     _______, _______, _______, _______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_NAV] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______,                                                       _______, KC_PGDN,   KC_UP, KC_PGUP, _______,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_RALT,                                                       KC_HOME, KC_LEFT, KC_DOWN,KC_RIGHT,  KC_END,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______,                                                       _______, _______, _______, _______, _______,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                      KC_ESC, _______,  KC_DEL,_______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    ),

    [_MEDIA_FN] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┐                                                     ┌────────┬────────┬────────┬────────┬────────┐
        KC_CAPS,   KC_F6,   KC_F5,   KC_F4, _______,                                                       _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
         KC_F11,   KC_F3,   KC_F2,   KC_F1,  KC_F10,                                                       _______, KC_BRIU, KC_VOLU, KC_MNXT, KC_MPLY,
    //├────────┼────────┼────────┼────────┼────────┤                                                     ├────────┼────────┼────────┼────────┼────────┤
         KC_F12,   KC_F9,   KC_F8,   KC_F7, _______,                                                       _______, KC_BRID, KC_VOLD, KC_MPRV, KC_MUTE,
    //└────────┴────────┼────────┼────────┼────────┼────────┐                                   ┌────────┼────────┼────────┼────────┴────────┴────────┘
                         _______,  _______, _______, _______,                                     _______, _______, _______, _______
    //                  └────────┴────────┴────────┴────────┘                                   └────────┴────────┴────────┴────────┘
    )
};
// clang-format on


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

// tri-layer feature for switching to _MEDIA_FN layer
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYM, _NAV, _MEDIA_FN);
}

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
