#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
                                KC_Z, KC_X,
        KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D,
              KC_E, KC_F, KC_G, KC_H, KC_I,
                    KC_J, KC_K, KC_L
    )
};
