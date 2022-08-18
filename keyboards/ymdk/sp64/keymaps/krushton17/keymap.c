#include QMK_KEYBOARD_H

enum layer_names {
    BASE, // default layer
    _FN,  // function layer
    _FX,  // media keys
    _RGB  // lighting
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ┌-----┬-----┬-----┬-----┬-----┬-----┬-----┐    ┌-----┬-----┬-----┬-----┬-----┬-----┬----------┐
 * │ Esc │  1  │  2  │  3  │  4  │  5  │  6  │    │  7  │  8  │  9  │  0  │  -  │  =  │ BkSp     │
 * ├-----┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┘ ┌--┴-----┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬-------┤
 * │ Tab    │  Q  │  W  │  E  │  R  │  T  │    │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │ \     │
 * ├--------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴-------┤
 * │ Caps    │  A  │  S  │  D  │  F  │  G  │    │  H  │  J  │  K  │  L  │  ;  │  '  │ Enter      │
 * ├---------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬-----┬-----┤
 * │ LShift   │  Z  │  X  │  C  │  V  │  B  │    │  N  │  M  │  <  │  >  │  ?  │ Sft │ Up  │ Fn  │
 * ├------┬---┴-┬---┴--┬--┴-----┴----┬┴----┬┘   ┌┴-----┴-----┴--┬--┴----┬┴-----┼-----┼-----┼-----┤
 * │ Ctrl │ Win │ Alt  │             │ Fn  │    │               │ Alt   │ Win  │ Lft │ Dwn │ Rgt │
 * └------┴-----┴------┴-------------┴-----┘    └---------------┴-------┴------┴-----┴-----┴-----┘
 */
[BASE] = LAYOUT(
  QK_GESC, KC_1,    KC_2,    KC_3,     KC_4,    KC_5,     KC_6,               KC_7, KC_8,    KC_9,    KC_0,      KC_MINUS,    KC_EQUAL,    KC_BSPACE,
  KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,               KC_Y,     KC_U, KC_I,    KC_O,    KC_P,      KC_LBRACKET, KC_RBRACKET, KC_BSLS,
  KC_CAPS, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,               KC_H,     KC_J, KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,                 KC_ENTER,
  KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,               KC_N,     KC_M, KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,     KC_UP,       KC_DEL,
  KC_LCTL, KC_LGUI, KC_LALT, MO(_FX),           MO(_FN),            KC_SPACE,       KC_RALT, KC_RCTL,            KC_LEFT,     KC_DOWN,     KC_RIGHT
  ),
/* Function
 *
 * ┌-----┬-----┬-----┬-----┬-----┬-----┬-----┐    ┌-----┬-----┬-----┬-----┬-----┬-----┬----------┐
 * │     │ F1  │  F2 │ F3  │ F4  │ F5  │ F6  │    │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │          │
 * ├-----┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┘ ┌--┴-----┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬-------┤
 * │        │     │     │     │     │     │    │     │     │     │     │     │     │     │       │
 * ├--------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴-------┤
 * │         │     │     │     │     │     │    │     │     │     │     │     │     │            │
 * ├---------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬-----┬-----┤
 * │          │     │     │     │     │     │    │     │     │     │     │     │     │     │     │
 * ├------┬---┴-┬---┴--┬--┴-----┴----┬┴----┬┘   ┌┴-----┴-----┴--┬--┴----┬┴-----┼-----┼-----┼-----┤
 * │      │     │      │             │     │    │               │       │      │     │     │     │
 * └------┴-----┴------┴-------------┴-----┘    └---------------┴-------┴------┴-----┴-----┴-----┘
 */
[_FN] = LAYOUT(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,          _______,
  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
  _______, _______, _______, _______,          _______,        _______,          _______, _______,          KC_HOME, KC_PGDN, KC_END
  ),
/* Media
 *
 * ┌-----┬-----┬-----┬-----┬-----┬-----┬-----┐    ┌-----┬-----┬-----┬-----┬-----┬-----┬----------┐
 * │     │     │     │     │     │     │     │    │     │     │     │     │     │     │          │
 * ├-----┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┘ ┌--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬--┴--┬-------┤
 * │        │     │     │     │     │     │    │     │     │     │     │     │     │     │       │
 * ├--------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴-------┤
 * │         │     │     │     │     │     │    │     │     │     │     │     │     │            │
 * ├---------┴┬----┴┬----┴┬----┴┬----┴┬----┴┐   └┬----┴┬----┴┬----┴┬----┴┬----┴┬----┴┬-----┬-----┤
 * │          │     │     │     │     │     │    │     │     │     │     │     │     │     │     │
 * ├------┬---┴-┬---┴--┬--┴-----┴----┬┴----┬┘   ┌┴-----┴-----┴--┬--┴----┬┴-----┼-----┼-----┼-----┤
 * │      │     │      │             │     │    │               │       │      │     │     │     │
 * └------┴-----┴------┴-------------┴-----┘    └---------------┴-------┴------┴-----┴-----┴-----┘
 */
[_FX] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______,
  _______, _______, _______, _______,          TO(_RGB), KC_MPLY,          _______, _______,          KC_MPRV, KC_VOLD, KC_MNXT
  ),

[_RGB] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, RGB_SAI, RGB_VAI,
  _______, _______, _______, _______,          _______, _______,          RGB_TOG, _______,          RGB_HUD, RGB_SAD, RGB_VAD
  ),
};

// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 12, HSV_RED},       // Light 12 LEDs, starting with LED 0
// );
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM rgb_layer_base[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 72, 234, 167}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM rgb_layer_fn[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 13, 255, 128}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM rgb_layer_fx[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 128, 240, 183}
);
const rgblight_segment_t PROGMEM rgb_layer_rgb[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 236, 207, 165}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_base,    // Overrides caps lock layer
    rgb_layer_fn,    // Overrides other layers
    rgb_layer_fx,     // Overrides other layers
    rgb_layer_rgb
    // my_capslock_layer,
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}


layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _FN));
    rgblight_set_layer_state(2, layer_state_cmp(state, _FX));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RGB));
    return state;
}


// this one didn't work, but that's fine--i don't really need it anyway
// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(3, led_state.caps_lock);
//     return true;
// }