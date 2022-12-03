#include "ck4x4.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |         G location
 *   |  |         |         B location
 *   |  |         |         | */
    {0, CS3_SW4 , CS2_SW4 , CS1_SW4  }, 
    {0, CS3_SW3 , CS2_SW3 , CS1_SW3  }, 
    {0, CS3_SW2 , CS2_SW2 , CS1_SW2  }, 
    {0, CS3_SW1 , CS2_SW1 , CS1_SW1  }, 

    {0, CS6_SW4 , CS5_SW4 , CS4_SW4  }, 
    {0, CS6_SW3 , CS5_SW3 , CS4_SW3  }, 
    {0, CS6_SW2 , CS5_SW2 , CS4_SW2  }, 
    {0, CS6_SW1 , CS5_SW1 , CS4_SW1  }, 

    {0, CS9_SW4 , CS8_SW4 , CS7_SW4  }, 
    {0, CS9_SW3 , CS8_SW3 , CS7_SW3  }, 
    {0, CS9_SW2 , CS8_SW2 , CS7_SW2  }, 
    {0, CS9_SW1 , CS8_SW1 , CS7_SW1  }, 
    
    {0, CS12_SW4 , CS11_SW4 , CS10_SW4  }, 
    {0, CS12_SW3 , CS11_SW3 , CS10_SW3  }, 
    {0, CS12_SW2 , CS11_SW2 , CS10_SW2  }, 
    {0, CS12_SW1 , CS11_SW1 , CS10_SW1  }, 
};

led_config_t g_led_config = { {
    { 0        , 1          , 2          , 3          },
    { 4        , 5          , 6          , 7          },
    { 8        , 9          , 10         , 11         },
    { 12       , 13         , 14         , 15         }
},{
    { 0,   0}, { 75,    0}, { 149,   0}, { 244,   0}, 
    { 0,  21}, { 75,   21}, { 149,  21}, { 244,  21}, 
    { 0,  43}, { 75,   43}, { 149,  43}, { 244,  43}, 
    { 0,  64}, { 75,   64}, { 149,  64}, { 244,  64}
}, {
    4          , 4          , 4          , 4          , 
    4          , 4          , 4          , 4          , 
    4          , 4          , 4          , 4          ,  
    4          , 4          , 4          , 4
} };

#endif