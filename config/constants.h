#pragma once

/* Home Row Mods */
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LB5      // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RB5      // right-hand keys
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                              // thumb keys

// Keys
#define ___ &trans
#define XXX &none

// Layers
// Must match order in which they are defined
// DEFINE LAYERS
#define Base        0
#define Nav         1
#define Fun         2
#define Game        3
#define Gameplus    4
#define Mouse       5
#define Sys         6

// Modifier keys
#define GL LGUI
#define CL LCTRL
#define AL LALT
#define SL LSHFT
#define GR RGUI
#define CR RCTRL
#define AR RALT
#define SR RSHFT

// OS
#define WINDOWS 0
#define LINUX 1
#define MAC_OS 2