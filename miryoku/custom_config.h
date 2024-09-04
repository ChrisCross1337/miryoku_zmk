// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_EXTRA \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp ESC,           &kp NUM_1,         &kp W,             &kp NUM_2,         &kp NUM_5,          &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp NUM_6,          &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp LCTRL,         &kp NUM_3,         &kp X,             &kp NUM_4,         &kp NUM_7,          &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

// Technikable
#if defined (MIRYOKU_KEYBOARD_TECHNIKABLE)

#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define XXX &none

#define MIRYOKU_LAYERMAPPING_EXTRA(\
K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  &kp T  XXX  K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  &kp G  XXX  K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  &kp B  XXX  K25  K26  K27  K28  K29 \
          XXX  K32  K33  K34    K35  K36  K37  XXX

#define MIRYOKU_LAYERMAPPING_TAP(\
K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  &kp NUM_8  XXX  K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  &kp NUM_9  XXX  K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  &kp NUM_0  XXX  K25  K26  K27  K28  K29 \
          XXX  K32  K33  K34        K35  K36  K37  XXX
#endif
