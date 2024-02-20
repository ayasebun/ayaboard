// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MINUS,   KC_QUOTE,   KC_SPACE,   KC_UP,    KC_A,
        KC_W,   KC_E,   KC_LEFT,   KC_DOWN,    KC_RIGHT,
        KC_SPACE,   KC_SPACE,   KC_SPACE,   KC_SPACE
    )
};
