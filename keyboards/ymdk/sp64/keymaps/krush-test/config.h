#pragma once

#define RGBLIGHT_LAYERS

// retain value when switching layers, enabling layers to change only the color. current value is returned by rgblight_get_val().
#define RGBLIGHT_LAYERS_RETAIN_VAL

// ! keep this active to make it light up while connected to a charging station!!
// #undef  RGBLIGHT_SLEEP

// looks like the lightness problem is specific to a low-power port on the laptop, not a general problem that really needs to be solved!
// #undef  RGBLIGHT_LIMIT_VAL
// #define RGBLIGHT_LIMIT_VAL      167

// equivalent to HSV_KR_TEAL
#define RGBLIGHT_DEFAULT_HUE    70
#define RGBLIGHT_DEFAULT_SAT    180
#define RGBLIGHT_DEFAULT_VAL    167

// define custom colors for use in color layers
#define HSV_KR_TEAL         70, 180, 167
#define HSV_KR_ORANGE       13, 255, 167
#define HSV_KR_COOL_BLUE    140, 100, 167
#define HSV_KR_MAUVE        236, 90, 167