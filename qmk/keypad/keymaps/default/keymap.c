#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(   // Debugging layout
                                MAGIC_TOGGLE_NKRO, DF(1),
        KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D,
              KC_E, KC_F, KC_G, KC_H, KC_I,
                    KC_J, KC_K, KC_L
    ),
    [1] = LAYOUT(   // gw2 layout
                                DF(0), DF(2),
        KC_1, KC_2, KC_3, KC_W, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_A, KC_S, KC_D, KC_9, KC_0,
           KC_LCTL, KC_N, KC_H, KC_L, KC_GRAVE,
                    KC_T, KC_J, KC_SPACE
    ),
    [2] = LAYOUT(   // g13 default layout
                                DF(1), DF(2),
        KC_1, KC_2, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_3, KC_4, KC_A, KC_S, KC_D, KC_F, KC_G,
           KC_LSFT, KC_Z, KC_X, KC_C, KC_V,
                KC_LCTL, KC_LALT, KC_SPACE
    ),
};
