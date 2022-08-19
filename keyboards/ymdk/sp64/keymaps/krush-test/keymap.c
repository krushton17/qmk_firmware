#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8
#define _LAYER9 9
#define _LAYER10 10
#define _LAYER11 11

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
    LAYER8,
    LAYER9,
    LAYER10,
    LAYER11,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(1), KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER1] = LAYOUT(EEP_RST, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, DF(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(4), KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END),

[_LAYER2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(3), KC_MPLY, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT),

[_LAYER3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), RGB_TOG, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD),

[_LAYER4] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC, KC_COMM, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_PERC, KC_DLR, KC_EQL, KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PDOT, KC_ENT, KC_LSFT, KC_BSLS, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_SLSH, KC_RSFT, KC_UP, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, TG(5), TO(0), KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_TAB, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_HASH, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL, KC_PERC, KC_P4, KC_P5, KC_P6, KC_COMM, KC_NO, KC_ENT, KC_LPRN, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC, KC_DLR, KC_P1, KC_P2, KC_P3, KC_DOT, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO),

[_LAYER6] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, MO(8), MO(7), KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER7] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, TO(10), DF(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DYN_REC_START1, DYN_REC_STOP, DYN_MACRO_PLAY1, KC_TRNS, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_TRNS, KC_TRNS, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, LCTL(KC_DEL), KC_TRNS, KC_TRNS, KC_TRNS, TG(9), KC_TRNS, LCTL(KC_BSPC), KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END),

[_LAYER8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(9), KC_MPLY, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT),

[_LAYER9] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(6), RGB_TOG, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD),

[_LAYER10] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC, KC_COMM, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_PERC, KC_DLR, KC_EQL, KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PDOT, KC_ENT, KC_LSFT, KC_BSLS, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_SLSH, KC_RSFT, KC_UP, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, TG(11), TO(6), KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER11] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_HASH, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL, KC_PERC, KC_P4, KC_P5, KC_P6, KC_COMM, KC_NO, KC_ENT, KC_LPRN, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC, KC_DLR, KC_P1, KC_P2, KC_P3, KC_DOT, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO) 

};


// # if defined RGBLIGHT_LAYERS

// Light LEDs in cyan when keyboard layer 0 is active
const rgblight_segment_t PROGMEM rgb_layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    // {0, 12, 70, 180, 167}
    {0, 12, HSV_KR_TEAL}    // defined in config.h. will this even work?
);
// Light LEDs in orange when keyboard layer 1 is active
const rgblight_segment_t PROGMEM rgb_layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    // {0, 12, 13, 255, 167}
    {0, 12, HSV_KR_ORANGE}
);
// Light LEDs in cool blue when keyboard layer 2 is active
const rgblight_segment_t PROGMEM rgb_layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    // {0, 12, 140, 100, 167}
    {0, 12, HSV_KR_COOL_BLUE}
);
// mauve
const rgblight_segment_t PROGMEM rgb_layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    // {0, 12, 236, 90, 165}
    {0, 12, HSV_KR_MAUVE}
);
// white
const rgblight_segment_t PROGMEM rgb_layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 255, 255, 165}
);
// red
const rgblight_segment_t PROGMEM rgb_layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_RED}
);
// why doesn't this one work?? maybe eeprom?
const rgblight_segment_t PROGMEM rgb_layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 236, 100, 165}
);
// ! max 8 layers, and the rest of these are redundant anyway!
// // Light LEDs in orange when keyboard layer 1 is active
// const rgblight_segment_t PROGMEM rgb_layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {0, 12, 13, 255, 167}
//     {0, 12, HSV_KR_ORANGE}
// );
// // same as layer 2
// const rgblight_segment_t PROGMEM rgb_layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {0, 12, 140, 100, 167}
//     {0, 12, HSV_KR_COOL_BLUE}
// );
// // same as layer 3
// const rgblight_segment_t PROGMEM rgb_layer_9[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {0, 12, 236, 90, 165}
//     {0, 12, HSV_KR_MAUVE}
// );
// // same as layer 4
// const rgblight_segment_t PROGMEM rgb_layer_10[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 12, 255, 255, 165}
// );
// // same as layer 5
// const rgblight_segment_t PROGMEM rgb_layer_11[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 12, HSV_RED}
// );

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_0,    // Overrides caps lock layer
    rgb_layer_1,    // Overrides other layers
    rgb_layer_2,
    rgb_layer_3,
    rgb_layer_4,
    rgb_layer_5,
    rgb_layer_6
    // rgb_layer_7,
    // rgb_layer_8,
    // rgb_layer_9,
    // rgb_layer_10,
    // rgb_layer_11
    // my_capslock_layer,
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}



layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _LAYER0));
    return state;
}


// ? for these, can we use the same rgb layer for multiple keyboard layers? like if 7 is like 1, can we just use rgb layer 1 for keymap layer 7?
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LAYER1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _LAYER2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _LAYER3));
    rgblight_set_layer_state(4, layer_state_cmp(state, _LAYER4));
    rgblight_set_layer_state(5, layer_state_cmp(state, _LAYER5));
    // ! there's something about these lines that really messed up the lighting in a weird way
    // rgblight_set_layer_state(1, layer_state_cmp(state, _LAYER6));
    // rgblight_set_layer_state(2, layer_state_cmp(state, _LAYER7));
    // rgblight_set_layer_state(3, layer_state_cmp(state, _LAYER8));
    // rgblight_set_layer_state(4, layer_state_cmp(state, _LAYER9));
    // rgblight_set_layer_state(5, layer_state_cmp(state, _LAYER10));
    // rgblight_set_layer_state(6, layer_state_cmp(state, _LAYER11));
    return state;
}


// #endif