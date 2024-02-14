// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Macros maybe idk

enum custom_keycodes {
    // Spacebar Macros utilizing different intervals

    A_SPC2,
    A_SPC5,
    A_SPC10,
    A_SPC20

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MINUS,   KC_QUOTE,   KC_SPACE,   KC_UP,    KC_A,
        KC_W,   KC_E,   KC_LEFT,   KC_DOWN,    KC_RIGHT,
//        KC_SPACE,   KC_SPACE,   KC_SPACE,   KC_SPACE
        A_SPC2, A_SPC5, A_SPC10,    ASPC20
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/* Basic Format

if (record->event.pressed) {
    // What to do when pressed
    SEND_STRING(SS_TAP(X_SPACE));
} else {

    // What to do when let go
}
break;

*/



    switch (keycode) {
        // Surely defining this here is fine w/e idfk hwo to code
        int i = 0
        case A_SPC2:
            if (record->event.pressed) {
            /* Removing this temporarily to see if this works
              SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE));
            break;
            */
                for(i = 1; i <= 2; ++i)
                {
                  SEND_STRING(SS_DELAY(100) SS_TAP(X_SPACE));
                }
            }
            break;

        case A_SPC5:
            if (record->event.pressed) {
                for(i = 1; i <= 5; ++i)
                {
                  SEND_STRING(SS_DELAY(100) SS_TAP(X_SPACE));
                }
            }
            break;

        case A_SPC10:
            if (record->event.pressed) {
                for(i = 1; i <= 10; ++i)
                {
                  SEND_STRING(SS_DELAY(100) SS_TAP(X_SPACE));
                }
            }
            break;

        case A_SPC20:
            if (record->event.pressed) {
                for(i = 1; i <= 20; ++i)
                {
                  SEND_STRING(SS_DELAY(100) SS_TAP(X_SPACE));
                }
            }
            break;

}
