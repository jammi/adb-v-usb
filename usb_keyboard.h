// USB keyboard driver using v-usb. Supports up to 6 simultaneous keys.

// Meant to be as compatible as possible with PJRC's usb_keyboard.h.
// You MUST call the added usb_keyboard_poll() at least once every 50ms.

#ifndef USB_KEYBOARD_H
#define USB_KEYBOARD_H

#include <stdint.h>

void usb_init( void );

uint8_t usb_configured( void );

// Call often (every few msec). If true, USB is ready to accept a keyboard update.
uint8_t usb_keyboard_poll( void );

// Call when USB reset is received or keyboard might not work in BIOS setup after reboot
void usb_keyboard_reset( void );

// Push changes to keyboard_keys and keyboard_modifier_keys to host. If usb_keyboard_idle()
// returned false, this blocks until USB is ready to accept keyboard data being sent.
int8_t usb_keyboard_send( void );

extern unsigned char keyboard_report_ [8];
extern unsigned char keyboard_idle_period; // in 4 ms units
extern unsigned char keyboard_leds;

#define /* uint8_t */ keyboard_modifier_keys    (keyboard_report_ [0])
#define /* uint8_t */ keyboard_keys /* [6] */   (keyboard_report_+2)

#define KEY_CTRL          0x01
#define KEY_SHIFT         0x02
#define KEY_ALT           0x04
#define KEY_GUI           0x08
#define KEY_LEFT_CTRL     0x01
#define KEY_LEFT_SHIFT    0x02
#define KEY_LEFT_ALT      0x04
#define KEY_LEFT_GUI      0x08
#define KEY_RIGHT_CTRL    0x10
#define KEY_RIGHT_SHIFT   0x20
#define KEY_RIGHT_ALT     0x40
#define KEY_RIGHT_GUI     0x80

#define KEY_A 4
#define KEY_B 5
#define KEY_C 6
#define KEY_D 7
#define KEY_E 8
#define KEY_F 9
#define KEY_G 10
#define KEY_H 11
#define KEY_I 12
#define KEY_J 13
#define KEY_K 14
#define KEY_L 15
#define KEY_M 16
#define KEY_N 17
#define KEY_O 18
#define KEY_P 19
#define KEY_Q 20
#define KEY_R 21
#define KEY_S 22
#define KEY_T 23
#define KEY_U 24
#define KEY_V 25
#define KEY_W 26
#define KEY_X 27
#define KEY_Y 28
#define KEY_Z 29
#define KEY_1 30
#define KEY_2 31
#define KEY_3 32
#define KEY_4 33
#define KEY_5 34
#define KEY_6 35
#define KEY_7 36
#define KEY_8 37
#define KEY_9 38
#define KEY_0 39

#define KEY_ENTER         40
#define KEY_ESC           41
#define KEY_BACKSPACE     42
#define KEY_TAB           43
#define KEY_SPACE         44
#define KEY_MINUS         45
#define KEY_EQUAL         46
#define KEY_LEFT_BRACE    47
#define KEY_RIGHT_BRACE   48
#define KEY_BACKSLASH     49

// extra key on intl keyboards left of number keys:
#define KEY_NUMBER        50

#define KEY_SEMICOLON     51
#define KEY_QUOTE         52
#define KEY_TILDE         53
#define KEY_COMMA         54
#define KEY_PERIOD        55
#define KEY_SLASH         56
#define KEY_CAPS_LOCK     57

#define KEY_F1    58
#define KEY_F2    59
#define KEY_F3    60
#define KEY_F4    61
#define KEY_F5    62
#define KEY_F6    63
#define KEY_F7    64
#define KEY_F8    65
#define KEY_F9    66
#define KEY_F10   67
#define KEY_F11   68
#define KEY_F12   69

#define KEY_PRINTSCREEN 70
#define KEY_SCROLL_LOCK 71
#define KEY_PAUSE       72
#define KEY_INSERT      73
#define KEY_HOME        74
#define KEY_PAGE_UP     75
#define KEY_DELETE      76
#define KEY_END         77
#define KEY_PAGE_DOWN   78

#define KEY_RIGHT 79
#define KEY_LEFT  80
#define KEY_DOWN  81
#define KEY_UP    82

#define KEY_NUM_LOCK    83
#define KEYPAD_SLASH    84
#define KEYPAD_ASTERIX  85
#define KEYPAD_MINUS    86
#define KEYPAD_PLUS     87
#define KEYPAD_ENTER    88
#define KEYPAD_1        89
#define KEYPAD_2        90
#define KEYPAD_3        91
#define KEYPAD_4        92
#define KEYPAD_5        93
#define KEYPAD_6        94
#define KEYPAD_7        95
#define KEYPAD_8        96
#define KEYPAD_9        97
#define KEYPAD_0        98
#define KEYPAD_PERIOD   99

// Missing codes added from, and used naming from:
// https://source.android.com/devices/input/keyboard-devices

// NON-US \ and |, usually §, ° or 1/2 depending on layout
#define KEY_102ND       100

#define KEY_COMPOSE     101
#define KEY_POWER       102
#define KEY_KPEQUAL     103
#define KEY_F13         104
#define KEY_F14         105
#define KEY_F15         106
#define KEY_F16         107
#define KEY_F17         108
#define KEY_F18         109
#define KEY_F19         110
#define KEY_F20         111
#define KEY_F21         112
#define KEY_F22         113
#define KEY_F23         114
#define KEY_F24         115
#define KEY_EXECUTE     116
#define KEY_HELP        117
#define KEY_MENU        118
#define KEY_SELECT      119
#define KEY_STOP        120
#define KEY_AGAIN       121
#define KEY_UNDO        122
#define KEY_CUT         123
#define KEY_COPY        124
#define KEY_PASTE       125
#define KEY_FIND        126
#define KEY_MUTE        127
#define KEY_VOLUMEUP    128
#define KEY_VOLUMEDOWN  129
#define KEY_LOCK_CAPS   130 // mechanically locking capslock
#define KEY_LOCK_NUM    131 // mechanically locking numlock
#define KEY_LOCK_SCROLL 132 // mechanically locking scroll lock
#define KEY_KPCOMMA     133
#define KEY_KPEQUAL2    134
#define KEY_RO          135 // intl1
#define KEY_KATAKANAHIRIGANA 136 // intl2
#define KEY_YEN         137 // intl3
#define KEY_HENKAN      138 // intl4
#define KEY_MUHENKAN    139 // intl5
#define KEY_KPJCOMMA    140 // intl6
#define KEY_INTL7       141
#define KEY_INTL8       142
#define KEY_INTL9       143
#define KEY_LANG1       144 // lang1
#define KEY_LANG2       145 // lang2
#define KEY_LANG3       146 // lang3
#define KEY_LANG4       147 // lang4
#define KEY_LANG5       148 // lang5
#define KEY_LANG6       149 // lang6
#define KEY_LANG7       150 // lang7
#define KEY_LANG8       151 // lang8
#define KEY_LANG9       152 // lang9
#define KEY_ALTERASE    153 // alternate erase
 // sysrq/attention; ctrl+F13/prntscrn in dos/windows:
#define KEY_SYSRQ       154
#define KEY_CANCEL      155
#define KEY_CLEAR       156
#define KEY_PRIOR       157
#define KEY_RETURN      158
#define KEY_SEPARATOR   159
#define KEY_OUT         160
#define KEY_OPER        161
#define KEY_CLEAR_AGAIN 162
#define KEY_CRSEL_PROPS 163
#define KEY_EXSEL       164
// -----
#define KEY_KEYPAD_00       176
#define KEY_KEYPAD_000      177
#define KEY_THOUSANDS_SEP   178
#define KEY_DECIMAL_SEP     179
#define KEY_CURRENCY_UNIT   180
#define KEY_CURRENCY_SUB    181
#define KEY_KPLEFTPAREN     182
#define KEY_KPRIGHTPAREN    183
#define KEY_KPLEFTBRACE     184
#define KEY_KPRIGHTBRACE    185
#define KEY_KPTAB           186
#define KEY_KPBS            187
#define KEY_KP_A            188
#define KEY_KP_B            189
#define KEY_KP_C            190
#define KEY_KP_D            191
#define KEY_KP_E            192
#define KEY_KP_F            193
#define KEY_KP_XOR          194
#define KEY_KP_POW          195
#define KEY_KP_PERCENT      196
#define KEY_KP_LT           197
#define KEY_KP_GT           198
#define KEY_KP_AND          199
#define KEY_KP_AND_AND      200
#define KEY_KP_OR           201
#define KEY_KP_OR_OR        202
#define KEY_KP_COLON        203
#define KEY_KP_HASH         204
#define KEY_KP_SPACE        205
#define KEY_KP_AT           206
#define KEY_KP_EXCL         207
#define KEY_KP_MEM_STORE    208
#define KEY_KP_MEM_RECALL   209
#define KEY_KP_MEM_CLEAR    210
#define KEY_KP_MEM_ADD      211
#define KEY_KP_MEM_SUBTRACT 212
#define KEY_KP_MEM_MULTIPLY 213
#define KEY_KP_MEM_DIVIDE   214
#define KEY_KP_SIGN         215
#define KEY_KP_CLEAR        216
#define KEY_KP_CLEAR_ENTRY  217
#define KEY_KP_BINARY       218
#define KEY_KP_OCTAL        219
#define KEY_KP_DECIMAL      220
#define KEY_KP_HEXADECIMAL  221
// modifiers:
#define KEY_LEFTCTRL        224
#define KEY_LEFTSHIFT       225
#define KEY_LEFTALT         226
#define KEY_LEFTMETA        227
#define KEY_RIGHTCTRL       228
#define KEY_RIGHTSHIFT      229
#define KEY_RIGHTALT        230
#define KEY_RIGHTMETA       231
// media:
#define KEY_PLAYPAUSE       232
#define KEY_STOPCD          233
#define KEY_PREVIOUSSONG    234
#define KEY_NEXTSONG        235
#define KEY_EJECTCD         236
#define KEY_VOLUMEUP2       237
#define KEY_VOLUMEDOWN2     238
#define KEY_MUTE2           239
#define KEY_WWW             240
#define KEY_BACK            241
#define KEY_FORWARD         242
#define KEY_STOP2           243
#define KEY_FIND2           244
#define KEY_SCROLLUP        245
#define KEY_SCROLLDOWN      246
#define KEY_EDIT            247
#define KEY_SLEEP           248
#define KEY_COFFEE          249
#define KEY_REFRESH         250
#define KEY_CALC            251

#endif
