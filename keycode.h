// USB HID key codes

#ifndef KEYCODE_H
#define KEYCODE_H

/* Copyright 2011,2012 Jun Wako <wakojun@gmail.com>
This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 2 of the License, or (at your option) any later
version. This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
details. You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>. */

// Keycodes based on HID Usage Keyboard/Keypad Page(0x07) plus special codes
// http://www.usb.org/developers/devclass_docs/Hut1_12.pdf

// Short names for ease of definition of keymap
#define KC_LCTL KC_LCTRL
#define KC_RCTL KC_RCTRL
#define KC_LSFT KC_LSHIFT
#define KC_RSFT KC_RSHIFT
#define KC_ESC  KC_ESCAPE
#define KC_BSPC KC_BSPACE
#define KC_ENT  KC_ENTER
#define KC_DEL  KC_DELETE
#define KC_INS  KC_INSERT
#define KC_CAPS KC_CAPSLOCK
#define KC_RGHT KC_RIGHT
#define KC_PGDN KC_PGDOWN
#define KC_PSCR KC_PSCREEN
#define KC_SLCK KC_SCKLOCK
#define KC_PAUS KC_PAUSE
#define KC_BRK  KC_PAUSE
#define KC_NLCK KC_NUMLOCK
#define KC_SPC  KC_SPACE
#define KC_MINS KC_MINUS
#define KC_EQL  KC_EQUAL
#define KC_GRV  KC_GRAVE
#define KC_RBRC KC_RBRACKET
#define KC_LBRC KC_LBRACKET
#define KC_COMM KC_COMMA
#define KC_BSLS KC_BSLASH
#define KC_SLSH KC_SLASH
#define KC_SCLN KC_SCOLON
#define KC_QUOT KC_QUOTE
#define KC_APP  KC_APPLICATION
#define KC_NUHS KC_NONUS_HASH
#define KC_NUBS KC_NONUS_BSLASH
#define KC_ERAS KC_ALT_ERASE,
#define KC_CLR  KC_CLEAR
/* Japanese specific */
#define KC_ZKHK KC_GRAVE
#define KC_RO   KC_INT1
#define KC_KANA KC_INT2
#define KC_JYEN KC_INT3
#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5
/* Keypad */
#define KC_P1   KC_KP_1
#define KC_P2   KC_KP_2
#define KC_P3   KC_KP_3
#define KC_P4   KC_KP_4
#define KC_P5   KC_KP_5
#define KC_P6   KC_KP_6
#define KC_P7   KC_KP_7
#define KC_P8   KC_KP_8
#define KC_P9   KC_KP_9
#define KC_P0   KC_KP_0
#define KC_PDOT KC_KP_DOT
#define KC_PCMM KC_KP_COMMA
#define KC_PSLS KC_KP_SLASH
#define KC_PAST KC_KP_ASTERISK
#define KC_PMNS KC_KP_MINUS
#define KC_PPLS KC_KP_PLUS
#define KC_PEQL KC_KP_EQUAL
#define KC_PENT KC_KP_ENTER
/* Mousekey */
#define KC_MS_U KC_MS_UP
#define KC_MS_D KC_MS_DOWN
#define KC_MS_L KC_MS_LEFT
#define KC_MS_R KC_MS_RIGHT
#define KC_BTN1 KC_MS_BTN1
#define KC_BTN2 KC_MS_BTN2
#define KC_BTN3 KC_MS_BTN3
#define KC_BTN4 KC_MS_BTN4
#define KC_BTN5 KC_MS_BTN5
#define KC_WH_U KC_MS_WH_UP
#define KC_WH_D KC_MS_WH_DOWN
#define KC_WH_L KC_MS_WH_LEFT
#define KC_WH_R KC_MS_WH_RIGHT
#define KC_ACL0 KC_MS_ACCEL0
#define KC_ACL1 KC_MS_ACCEL1
#define KC_ACL2 KC_MS_ACCEL2


/* USB HID Keyboard/Keypad Usage(0x07) */
enum hid_keyboard_keypad_usage {
    KC_NO               = 0x00,
    KC_ROLL_OVER,       /* 0x01 */
    KC_POST_FAIL,       /* 0x02 */
    KC_UNDEFINED,       /* 0x03 */
    KC_A,               /* 0x04 */
    KC_B,               /* 0x05 */
    KC_C,               /* 0x06 */
    KC_D,               /* 0x07 */
    KC_E,               /* 0x08 */
    KC_F,               /* 0x09 */
    KC_G,               /* 0x0a */
    KC_H,               /* 0x0b */
    KC_I,               /* 0x0c */
    KC_J,               /* 0x0d */
    KC_K,               /* 0x0e */
    KC_L,               /* 0x0f */
    KC_M,               /* 0x10 */
    KC_N,               /* 0x11 */
    KC_O,               /* 0x12 */
    KC_P,               /* 0x13 */
    KC_Q,               /* 0x14 */
    KC_R,               /* 0x15 */
    KC_S,               /* 0x16 */
    KC_T,               /* 0x17 */
    KC_U,               /* 0x18 */
    KC_V,               /* 0x19 */
    KC_W,               /* 0x1a */
    KC_X,               /* 0x1b */
    KC_Y,               /* 0x1c */
    KC_Z,               /* 0x1d */
    KC_1,               /* 0x1e */
    KC_2,               /* 0x1f */
    KC_3,               /* 0x20 */
    KC_4,               /* 0x31 */
    KC_5,               /* 0x32 */
    KC_6,               /* 0x33 */
    KC_7,               /* 0x34 */
    KC_8,               /* 0x35 */
    KC_9,               /* 0x36 */
    KC_0,               /* 0x37 */
    KC_ENTER,           /* 0x38 */
    KC_ESCAPE,          /* 0x39 */
    KC_BSPACE,          /* 0x3a */
    KC_TAB,             /* 0x3b */
    KC_SPACE,           /* 0x3c */
    KC_MINUS,           /* 0x3d */
    KC_EQUAL,           /* 0x3e */
    KC_LBRACKET,        /* 0x3f */
    KC_RBRACKET,        /* 0x30 */
    KC_BSLASH,          /* 0x31 \ (and |) */
    KC_NONUS_HASH,      /* 0x32 Non-US # and ~ */
    KC_SCOLON,          /* 0x33 ; (and :) */
    KC_QUOTE,           /* 0x34 ' and " */
    KC_GRAVE,           /* 0x35 Grave accent and tilde */
    KC_COMMA,           /* 0x36 , and < */
    KC_DOT,             /* 0x37 . and > */
    KC_SLASH,           /* 0x38 / and ? */
    KC_CAPSLOCK,        /* 0x39 */
    KC_F1,              /* 0x3a */
    KC_F2,              /* 0x3b */
    KC_F3,              /* 0x3c */
    KC_F4,              /* 0x3d */
    KC_F5,              /* 0x3e */
    KC_F6,              /* 0x3f */
    KC_F7,              /* 0x40 */
    KC_F8,              /* 0x41 */
    KC_F9,              /* 0x42 */
    KC_F10,             /* 0x43 */
    KC_F11,             /* 0x44 */
    KC_F12,             /* 0x45 */
    KC_PSCREEN,         /* 0x46 */
    KC_SCKLOCK,         /* 0x47 */
    KC_PAUSE,           /* 0x48 */
    KC_INSERT,          /* 0x49 */
    KC_HOME,            /* 0x4a */
    KC_PGUP,            /* 0x4b */
    KC_DELETE,          /* 0x4c */
    KC_END,             /* 0x4d */
    KC_PGDOWN,          /* 0x4e */
    KC_RIGHT,           /* 0x4f */
    KC_LEFT,            /* 0x50 */
    KC_DOWN,            /* 0x51 */
    KC_UP,              /* 0x52 */
    KC_NUMLOCK,         /* 0x53 */
    KC_KP_SLASH,        /* 0x54 */
    KC_KP_ASTERISK,     /* 0x55 */
    KC_KP_MINUS,        /* 0x56 */
    KC_KP_PLUS,         /* 0x57 */
    KC_KP_ENTER,        /* 0x58 */
    KC_KP_1,            /* 0x59 */
    KC_KP_2,            /* 0x5a */
    KC_KP_3,            /* 0x5b */
    KC_KP_4,            /* 0x5c */
    KC_KP_5,            /* 0x5d */
    KC_KP_6,            /* 0x5e */
    KC_KP_7,            /* 0x5f */
    KC_KP_8,            /* 0x60 */
    KC_KP_9,            /* 0x61 */
    KC_KP_0,            /* 0x62 */
    KC_KP_DOT,          /* 0x63 */
    KC_NONUS_BSLASH,    /* 0x64 Non-US \ and | */
    KC_APPLICATION,     /* 0x65 */
    KC_POWER,           /* 0x66 */
    KC_KP_EQUAL,        /* 0x67 */
    KC_F13,             /* 0x68 */
    KC_F14,             /* 0x69 */
    KC_F15,             /* 0x6a */
    KC_F16,             /* 0x6b */
    KC_F17,             /* 0x6c */
    KC_F18,             /* 0x6d */
    KC_F19,             /* 0x6e */
    KC_F20,             /* 0x6f */
    KC_F21,             /* 0x70 */
    KC_F22,             /* 0x71 */
    KC_F23,             /* 0x72 */
    KC_F24,             /* 0x73 */
    KC_EXECUTE,         /* 0x74 */
    KC_HELP,            /* 0x75 */
    KC_MENU,            /* 0x76 */
    KC_SELECT,          /* 0x77 */
    KC_STOP,            /* 0x78 */
    KC_AGAIN,           /* 0x79 */
    KC_UNDO,            /* 0x7a */
    KC_CUT,             /* 0x7b */
    KC_COPY,            /* 0x7c */
    KC_PASTE,           /* 0x7d */
    KC_FIND,            /* 0x7e */
    KC__MUTE,           /* 0x7f */
    KC__VOLUP,          /* 0x80 */
    KC__VOLDOWN,        /* 0x81 */
    KC_LOCKING_CAPS,    /* 0x82 locking Caps Lock */
    KC_LOCKING_NUM,     /* 0x83 locking Num Lock */
    KC_LOCKING_SCROLL,  /* 0x84 locking Scroll Lock */
    KC_KP_COMMA,        /* 0x85 */
    KC_KP_EQUAL_AS400,  /* 0x86 equal sign on AS/400 */
    KC_INT1,            /* 0x87 */
    KC_INT2,            /* 0x88 */
    KC_INT3,            /* 0x89 */
    KC_INT4,            /* 0x8a */
    KC_INT5,            /* 0x8b */
    KC_INT6,            /* 0x8c */
    KC_INT7,            /* 0x8d */
    KC_INT8,            /* 0x8e */
    KC_INT9,            /* 0x8f */
    KC_LANG1,           /* 0x90 */
    KC_LANG2,           /* 0x91 */
    KC_LANG3,           /* 0x92 */
    KC_LANG4,           /* 0x93 */
    KC_LANG5,           /* 0x94 */
    KC_LANG6,           /* 0x95 */
    KC_LANG7,           /* 0x96 */
    KC_LANG8,           /* 0x97 */
    KC_LANG9,           /* 0x98 */
    KC_ALT_ERASE,       /* 0x99 */
    KC_SYSREQ,          /* 0x9a */
    KC_CANCEL,          /* 0x9b */
    KC_CLEAR,           /* 0x9c */
    KC_PRIOR,           /* 0x9d */
    KC_RETURN,          /* 0x9e */
    KC_SEPARATOR,       /* 0x9f */
    KC_OUT,             /* 0xA0 */
    KC_OPER,            /* 0xA1 */
    KC_CLEAR_AGAIN,     /* 0xA2 */
    KC_CRSEL,           /* 0xA3 */
    KC_EXSEL,           /* 0xA4 */


    /* Modifiers */
    KC_LCTRL            = 0xE0,
    KC_LSHIFT,
    KC_LALT,
    KC_LGUI,
    KC_RCTRL,
    KC_RSHIFT,
    KC_RALT,
    KC_RGUI,
};

#endif
