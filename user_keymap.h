// Modify as desired

// static const uint8_t PROGMEM keymap_extended [] [128] = {
// 	KEYMAP_EXTENDED_US(
// 	ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,                   NO,
// 	GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
// 	TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
// 	CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
// 	LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
// #if USE_AS_MACINTOSH_KEYBOARD
// 	LCTL,LALT,LGUI,          SPC,                               RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
// #else
// 	LCTL,LGUI,LALT,          SPC,                               RGUI,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
// #endif
// 	),
// };

static const uint8_t PROGMEM keymap_extended [] [128] = {
  KEYMAP_EXTENDED_INTL(
#if USE_AS_MACINTOSH_KEYBOARD
  ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           F13, F14,  F15,                  POWER,
  NUBS, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,    INS, HOME,PGUP,    CLR,PEQL,PSLS,PAST,
  TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  LBRC,RBRC,         DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
  LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT,                       P4,  P5,  P6,  PPLS,
  LSFT,GRV,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,       RSFT,         UP,           P1,  P2,  P3,
  CAPS,LALT,LGUI,          SPC,                               RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
#else
  ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,                   NO,
  GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,    INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
  TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  LBRC, RBRC,        DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
  CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT,                       P4,  P5,  P6,  PPLS,
  LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,       RSFT,         UP,           P1,  P2,  P3,
  LCTL,LGUI,LALT,          SPC,                               RGUI,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
#endif
  ),
};

static const uint8_t PROGMEM keymap_compact [] [128] = {
	KEYMAP_M0116(
		                     NO,
	ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     NLCK,PEQL,PSLS,PAST,
	TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,          P7,  P8,  P9,  PMNS,
	LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,      P4,  P5,  P6,  PPLS,
	LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,     P1,  P2,  P3,
#if USE_AS_MACINTOSH_KEYBOARD
	CAPS,LALT,LGUI,GRV,      SPC,                BSLS,LEFT,RGHT,DOWN,UP,       P0,       PDOT,PENT
#else
	CAPS,LGUI,LALT,GRV,      SPC,                BSLS,LEFT,RGHT,DOWN,UP,       P0,       PDOT,PENT
#endif
	),
};
