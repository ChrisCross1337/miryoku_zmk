// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//Mouse movement and scroll is supported with 
//https://github.com/petejohanson/zmk/tree/feat/pointers-move-scroll
//from zmkfirmware/zmk#2027.
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
//Once powered off, the keyboard will only wake up when:
//1. You press the same button/sequence that you pressed to power off the keyboard, or
//2. You press a reset button found on the keyboard.
#define MIRYOKU_KLUDGE_SOFT_OFF

//blockout in case of 6x3 
#define XXX &none

//traditional keyboard as gaming layer
#define MIRYOKU_LAYER_EXTRA \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,            &kp Y,             &kp U,             &kp I,             &kp O,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,            &kp H,             &kp J,             &kp K,             &kp L,             \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,            &kp N,             &kp M,             &kp COMMA,         &kp DOT,           \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,          &kp BSPC,          &kp DEL,           U_NP,              U_NP

//adding Nums to the layout
#define MIRYOKU_LAYER_TAP \
&kp ESC,           &kp NUM_1,         &kp W,             &kp NUM_2,         &kp NUM_5,         &kp NUM_8,          &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp NUM_6,         &kp NUM_9,          &kp EQL,           &kp F4,            &kp F5,            &kp F6,            \
&kp LCTRL,         &kp NUM_3,         &kp X,             &kp NUM_4,         &kp NUM_7,         &kp NUM_0,          &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,             &kp MINUS,          &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_BTN5,            U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,           \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_BTN4,            U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

// 5X3 CORNE
//test

// Direct custom layer access
#define MIRYOKU_LAYOUTMAPPING_CORNE(\
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,                         K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37


