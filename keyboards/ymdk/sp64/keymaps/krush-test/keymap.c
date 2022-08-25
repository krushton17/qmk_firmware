#include QMK_KEYBOARD_H

// this is how QMK Configurator does things...

// #define _LAYER0 0
// #define _LAYER1 1
// #define _LAYER2 2
// #define _LAYER3 3
// #define _LAYER4 4
// #define _LAYER5 5
// #define _LAYER6 6
// #define _LAYER7 7
// #define _LAYER8 8
// #define _LAYER9 9
// #define _LAYER10 10
// #define _LAYER11 11

// do these do anything?
// enum custom_keycodes {
//     LAYER0 = SAFE_RANGE,
//     LAYER1,
//     LAYER2,
//     LAYER3,
//     LAYER4,
//     LAYER5,
//     LAYER6,
//     LAYER7,
//     LAYER8,
//     LAYER9,
//     LAYER10,
//     LAYER11,
// };

enum layer_names {
    _L0_BASE,
    _L1_FN,
    _L2_MEDIA,
    _L3_RGB,
    _L4_NUMRW,
    _L5_NUMPD,
    _L6_BASE2,
    _L7_FN2,
    _L8_MEDIA,
    _L9_RGB,
    _L10_NUMRW,
    _L11_NUMPD
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_L0_BASE] = LAYOUT(
    /* L1:   [esc]-> */ QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,  /* <-[6] */
    /* R1:     [7]-> */ KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,  /* <-[t] */
    /* R2:     [Y]-> */ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,  /* <-[G] */
    /* R3:     [H]-> */ KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,  /* <-[B] */
    /* R4:     [N]-> */ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, MO(_L2_MEDIA), MO(_L1_FN),  /* <-[fn] */
    /* R5: [space]-> */ KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),

[_L1_FN] = LAYOUT(
    /* L1:   [esc]-> */ EEP_RST, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,  /* <-[6] */
    /* R1:     [7]-> */ KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,  /* <-[backspace] */
    /* L2:   [tab]-> */ DF(_L6_BASE2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[t] */
    /* R2:     [Y]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[G] */
    /* R3:     [H]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[enter] */
    /* L4: [shift]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[B] */
    /* R4:     [N]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[fn] */
    /* R5: [space]-> */ TO(_L4_NUMRW), KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END /* <-[right] */
    ),

[_L2_MEDIA] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[G] */
    /* R3:     [H]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[enter] */
    /* L4: [shift]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[B] */
    /* R4:     [N]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_MUTE,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L3_RGB),  /* <-[fn] */
    /* R5: [space]-> */ KC_MPLY, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT /* <-[right] */
    ),

[_L3_RGB] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, KC_NO,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[G] */
    /* R3:     [H]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[enter] */
    /* L4: [shift]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[B] */
    /* R4:     [N]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L0_BASE),  /* <-[fn] */
    /* R5: [space]-> */ RGB_TOG, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD /* <-[right] */
    ),

[_L4_NUMRW] = LAYOUT(
    /* L1:   [esc]-> */ KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC,  /* <-[t] */
    /* R2:     [Y]-> */ KC_COMM, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_PERC, KC_DLR, KC_EQL,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5,  /* <-[G] */
    /* R3:     [H]-> */ KC_6, KC_7, KC_8, KC_9, KC_0, KC_PDOT, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_BSLS, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT,  /* <-[B] */
    /* R4:     [N]-> */ KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, TG(_L5_NUMPD), TO(_L0_BASE),  /* <-[fn] */
    /* R5: [space]-> */ KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),

[_L5_NUMPD] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_NO,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_HASH, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL,  /* <-[G] */
    /* R3:     [H]-> */ KC_PERC, KC_P4, KC_P5, KC_P6, KC_COMM, KC_NO, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LPRN, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC,  /* <-[B] */
    /* R4:     [N]-> */ KC_DLR, KC_P1, KC_P2, KC_P3, KC_DOT, KC_RPRN, KC_NO, KC_NO,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L0_BASE),  /* <-[fn] */
    /* R5: [space]-> */ KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO /* <-[right] */
    ),

[_L6_BASE2] = LAYOUT(
    /* L1:   [esc]-> */ QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,  /* <-[6] */
    /* R1:     [7]-> */ KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,  /* <-[t] */
    /* R2:     [Y]-> */ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,  /* <-[G] */
    /* R3:     [H]-> */ KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,  /* <-[B] */
    /* R4:     [N]-> */ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, MO(_L8_MEDIA), MO(_L7_FN2),  /* <-[fn] */
    /* R5: [space]-> */ KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),

[_L7_FN2] = LAYOUT(
    /* L1:   [esc]-> */ EEP_RST, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,  /* <-[6] */
    /* R1:     [7]-> */ KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, TO(_L10_NUMRW),  /* <-[backspace] */
    /* L2:   [tab]-> */ DF(_L0_BASE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[t] */
    /* R2:     [Y]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DYN_REC_START1, DYN_REC_STOP, DYN_MACRO_PLAY1,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_TRNS, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_TRNS,  /* <-[G] */
    /* R3:     [H]-> */ KC_TRNS, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_TRNS, KC_TRNS,  /* <-[enter] */
    /* L4: [shift]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[B] */
    /* R4:     [N]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, LCTL(KC_DEL),  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[fn] */
    /* R5: [space]-> */ LCTL(KC_BSPC), KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END /* <-[right] */
    ),

[_L8_MEDIA] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[G] */
    /* R3:     [H]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[enter] */
    /* L4: [shift]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[B] */
    /* R4:     [N]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_MUTE,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L9_RGB),  /* <-[fn] */
    /* R5: [space]-> */ KC_MPLY, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT /* <-[right] */
    ),

[_L9_RGB] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, KC_NO,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[G] */
    /* R3:     [H]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[enter] */
    /* L4: [shift]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[B] */
    /* R4:     [N]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L6_BASE2),  /* <-[fn] */
    /* R5: [space]-> */ RGB_TOG, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD /* <-[right] */
    ),

[_L10_NUMRW] = LAYOUT(
    /* L1:   [esc]-> */ KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC,  /* <-[t] */
    /* R2:     [Y]-> */ KC_COMM, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_PERC, KC_DLR, KC_EQL,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5,  /* <-[G] */
    /* R3:     [H]-> */ KC_6, KC_7, KC_8, KC_9, KC_0, KC_PDOT, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_BSLS, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT,  /* <-[B] */
    /* R4:     [N]-> */ KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, TG(_L11_NUMPD), TO(_L6_BASE2),  /* <-[fn] */
    /* R5: [space]-> */ KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),

[_L11_NUMPD] = LAYOUT(
    /* L1:   [esc]-> */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_HASH, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL,  /* <-[G] */
    /* R3:     [H]-> */ KC_PERC, KC_P4, KC_P5, KC_P6, KC_COMM, KC_NO, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LPRN, KC_PLUS, KC_PMNS, KC_PAST, KC_PSLS, KC_CIRC,  /* <-[B] */
    /* R4:     [N]-> */ KC_DLR, KC_P1, KC_P2, KC_P3, KC_DOT, KC_RPRN, KC_NO, KC_NO,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,  /* <-[fn] */
    /* R5: [space]-> */ KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO /* <-[right] */
    ) 

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
    {0, 12, HSV_BLUE}
);
// ! max 8 layers

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_0,
    rgb_layer_1,
    rgb_layer_2,
    rgb_layer_3,
    rgb_layer_4,
    rgb_layer_5,
    rgb_layer_6,
    rgb_layer_1 //,
    // rgb_layer_2,
    // rgb_layer_3,
    // rgb_layer_4,
    // rgb_layer_5
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}



layer_state_t default_layer_state_set_user(layer_state_t state) {
    // rgblight_set_layer_state(i, is_on)	Enable/disable lighting layer i based on value of bool is_on
    rgblight_set_layer_state(0, layer_state_cmp(state, _L0_BASE));
    return state;
}


// ? for these, can we use the same rgb layer for multiple keyboard layers? like if 7 is like 1, can we just use rgb layer 1 for keymap layer 7?
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1_FN));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2_MEDIA));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3_RGB));
    rgblight_set_layer_state(4, layer_state_cmp(state, _L4_NUMRW));
    rgblight_set_layer_state(5, layer_state_cmp(state, _L5_NUMPD));
    rgblight_set_layer_state(6, layer_state_cmp(state, _L6_BASE2));

    // testing recycling layers...
    // ! this works for layer 7, but not 8 or 9. also, rgb layer 6 still acts weird...
    /*
        when you first activate _L6, it uses the default color from the EEPROM (?)
        but if you activate L9 and then go back to L6, it uses rgb_layer_6.
        L9 then uses that default color. L8 just looks like L6.
        this is NOT caused by defining more than 8 layers in rgblight_segment_t*
    */
    rgblight_set_layer_state(7, layer_state_cmp(state, _L7_FN2));
    rgblight_set_layer_state(8, layer_state_cmp(state, _L8_MEDIA));
    rgblight_set_layer_state(9, layer_state_cmp(state, _L9_RGB));
    rgblight_set_layer_state(10, layer_state_cmp(state, _L10_NUMRW));
    rgblight_set_layer_state(11, layer_state_cmp(state, _L11_NUMPD));

    // ! there's something about these lines that really messed up the lighting in a weird way
    // rgblight_set_layer_state(1, layer_state_cmp(state, _L6_BASE2));
    // rgblight_set_layer_state(2, layer_state_cmp(state, _L7_FN2));
    // rgblight_set_layer_state(3, layer_state_cmp(state, _L8_MEDIA));
    // rgblight_set_layer_state(4, layer_state_cmp(state, _L9_RGB));
    // rgblight_set_layer_state(5, layer_state_cmp(state, _L10_NUMRW));
    // rgblight_set_layer_state(6, layer_state_cmp(state, _L11_NUMPD));

    return state;
}


// #endif