#include QMK_KEYBOARD_H

enum layer_names {
    _L0_BASE,
    _L1_FN,
    _L2_MEDIA,
    _L3_RGB,
    _L4_NUMRW,
    _L5_NUMPD
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
    /* L2:   [tab]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_L3_RGB), KC_TRNS,  /* <-[t] */
    /* R2:     [Y]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_L5_NUMPD), DYN_REC_START1, DYN_REC_STOP, DYN_MACRO_PLAY1,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_TRNS,  /* <-[G] */
    /* R3:     [H]-> */ KC_TRNS, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_LALT), OSM(MOD_RGUI), KC_TRNS, KC_TRNS,  /* <-[enter] */
    /* L4: [shift]-> */ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[B] */
    /* R4:     [N]-> */ TO(_L4_NUMRW), TO(_L2_MEDIA), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, LCTL(KC_DEL),  /* <-[del] */
    /* L5:  [ctrl]-> */ QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  /* <-[fn] */
    /* R5: [space]-> */ LCTL(KC_BSPC), KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END /* <-[right] */
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
    /* L5:  [ctrl]-> */ KC_NO, KC_NO, KC_NO, KC_TRNS, TO(_L0_BASE),  /* <-[fn] */
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
    /* L2:   [tab]-> */ KC_TAB, KC_PLUS, KC_MINS, KC_ASTR, KC_SLSH, KC_CIRC,  /* <-[t] */
    /* R2:     [Y]-> */ KC_COMM, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_COMM, KC_COLN, KC_BSLS,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5,  /* <-[G] */
    /* R3:     [H]-> */ KC_6, KC_7, KC_8, KC_9, KC_0, KC_DOT, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_BSLS, KC_LT, KC_LBRC, KC_LPRN, KC_LCBR,  /* <-[B] */
    /* R4:     [N]-> */ KC_RCBR, KC_RPRN, KC_RBRC, KC_GT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, TG(_L5_NUMPD), TO(_L0_BASE),  /* <-[fn] */
    /* R5: [space]-> */ KC_EQUAL, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),

[_L5_NUMPD] = LAYOUT(
    /* L1:   [esc]-> */ KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  /* <-[6] */
    /* R1:     [7]-> */ KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_BSPC,  /* <-[backspace] */
    /* L2:   [tab]-> */ KC_TAB, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO,  /* <-[t] */
    /* R2:     [Y]-> */ KC_COLN, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_LBRC, KC_RBRC, KC_BSLS,  /* <-[f-slash] */
    /* L3:  [caps]-> */ KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL,  /* <-[G] */
    /* R3:     [H]-> */ KC_DOT, KC_4, KC_5, KC_6, KC_COMM, KC_NO, KC_ENT,  /* <-[enter] */
    /* L4: [shift]-> */ KC_LSFT, KC_PLUS, KC_MINS, KC_ASTR, KC_SLSH, KC_CIRC,  /* <-[B] */
    /* R4:     [N]-> */ KC_COMM, KC_1, KC_2, KC_3, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  /* <-[del] */
    /* L5:  [ctrl]-> */ KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, TO(_L0_BASE),  /* <-[fn] */
    /* R5: [space]-> */ KC_P0, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT /* <-[right] */
    ),
};

// # if defined RGBLIGHT_LAYERS

// Light LEDs in cyan when keyboard layer 0 is active
const rgblight_segment_t PROGMEM rgb_layer_base[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_KR_TEAL}
);
// Light LEDs in orange when fn layer is active
const rgblight_segment_t PROGMEM rgb_layer_fn[] = RGBLIGHT_LAYER_SEGMENTS(
    {3, 3, HSV_KR_ORANGE}
);
// Light LEDs in cool blue when keyboard layer 2 is active
const rgblight_segment_t PROGMEM rgb_layer_media[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_KR_COOL_BLUE}
);
// ? the right half always mirrors the left half. not sure if there's a way to change that, maybe with rgblight_set_clipping_range()?
const rgblight_segment_t PROGMEM rgb_layer_rgb[] = RGBLIGHT_LAYER_SEGMENTS(
    {5, 1, HSV_RED},
    {4, 1, HSV_GREEN},
    {3, 1, HSV_BLUE}
);
// this one still doesn't work right???
const rgblight_segment_t PROGMEM rgb_layer_numr[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, HSV_KR_MAUVE}
);
// this one still doesn't work right???
const rgblight_segment_t PROGMEM rgb_layer_nump[] = RGBLIGHT_LAYER_SEGMENTS(
    {3, 3, HSV_KR_MAUVE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_base,
    rgb_layer_fn,
    rgb_layer_media,
    rgb_layer_rgb,
    rgb_layer_numr,
    rgb_layer_nump
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

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1_FN));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2_MEDIA));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3_RGB));
    rgblight_set_layer_state(4, layer_state_cmp(state, _L4_NUMRW));
    rgblight_set_layer_state(5, layer_state_cmp(state, _L5_NUMPD));
    return state;
}

// #endif