#pragma once

#define RGBLIGHT_LAYERS


// higher brightnesses are fine when plugged into a dock; but directly into a laptop, high brightnesses will drain too much power and make the keyboard reset.
// ? or, maybe trying to work with too many rgb layers was the problem!
// ? how to set up some kind of "low power mode"?
#undef  RGBLIGHT_LIMIT_VAL
// i thiiiiiiink 48 is ok. even at 56, it disconnected on the laptop.
#define RGBLIGHT_LIMIT_VAL 48

#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL

// #undef  RGBLIGHT_SLEEP


#define HSV_KR_TEAL         70, 180, 167
#define HSV_KR_ORANGE       13, 255, 167
// maybe the lower the saturation, the lower the brightness has to be? cool blue is the most likely color to make the keyboard reset while connected to a laptop.
#define HSV_KR_COOL_BLUE    140, 100, 167
#define HSV_KR_MAUVE        236, 90, 165 


// #define HSV_KR_TEAL        
// 72, 234, 167     // too green
// 110, 234, 167    // not green enough
// 90, 234, 167     // either too green or too saturated...
// 90, 100, 167     // either not green enough or not saturated enough lmao
// 80, 120, 167     // not bad
// 75, 130, 167     // nice and icy, getting close!
// 70, 140, 167     // good. could be even moar green/saturated
// 70, 160, 167     // even better
// 70, 200, 167     // definitely too green now
// 70, 180, 167} // this is pretty good! compare to the "nice and icy" one (this one is better!)


// #define HSV_KR_ORANGE       
// {0, 12, 13, 255, 128} // too dim
// {0, 12, 13, 255, 167} // pretty good


// #define HSV_KR_COOL_BLUE    
// {0, 12, 128, 240, 183} // too saturated
// {0, 12, 128, 167, 183} // nees to be bluer
// {0, 12, 160, 167, 183} // too purple
// {0, 12, 140, 167, 183} // moar
// {0, 12, 150, 150, 183} // less
// {0, 12, 145, 140, 183} // still less. saturation and/or purple
// {0, 12, 140, 130, 183} // i feel like i want it to be darker somehow? maybe more saturation
// {0, 12, 130, 160, 183} // at this saturation, it would need more purple
// {0, 12, 140, 160, 183} // ehh i think just less saturation
// {0, 12, 145, 130, 183} // more blue, less saturation
// {0, 12, 140, 130, 167} // less sat
// {0, 12, 140, 100, 167} //winner!
// {0, 12, 140, 80, 145} // nope
// {0, 12, 135, 90, 145} // nope


// #define HSV_KR_MAUVE        
// {0, 12, 236, 207, 165} // too saturated
// {0, 12, 236, 100, 165} // maybe still slightly to saturated
// {0, 12, 236, 70, 165} // maybe a little too unsaturated now??
// {0, 12, 236, 80, 165} //     maybe still slightly too unsaturated
// {0, 12, 236, 90, 165} // looks good!



