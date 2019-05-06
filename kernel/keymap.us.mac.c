
// 0-9
{'a', 'A', ASCII_SOH, 0},
{'s', 'S', ASCII_DC3, 0},
{'d', 'D', ASCII_EOT, 0},
{'f', 'F', ASCII_ACK, 0},
{'h', 'H', ASCII_BS, 0},
{'g', 'G', ASCII_BEL, 0},
{'z', 'Z', ASCII_SUB, 0},
{'x', 'X', ASCII_CAN, 0},
{'c', 'C', ASCII_ETX, 0},
{'v', 'V', ASCII_SYN, 0},

// 10-19
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'b', 'B', ASCII_STX, 0},
{'q', 'Q', ASCII_DC1, 0},
{'w', 'W', ASCII_ETB, 0},
{'e', 'E', ASCII_ENQ, 0},
{'r', 'R', ASCII_DC2, 0},
{'y', 'Y', ASCII_EM, 0},
{'t', 'T', ASCII_DC4, 0},
{'1', '!', '1', 0},
{'2', '@', '2', 0},

// 20-29
{'3', '#', '3', 0},
{'4', '$', '4', 0},
{'6', '^', '6', 0},
{'5', '%', '5', 0},
{'=', '+', '=', 0},
{'9', '(', '9', 0},
{'7', '&', '7', 0},
{'-', '_', '-', 0},
{'8', '*', '8', 0},
{'0', ')', '0', 0},

// 30-39
{']', '}', ']', 0},
{'o', 'O', ASCII_SI, 0},
{'u', 'U', ASCII_NAK, 0},
{'[', '{', '[', 0},
{'i', 'I', ASCII_HT, 0},
{'p', 'P', ASCII_DLE, 0},
{ASCII_CR, ASCII_CR, ASCII_CR, 0},
{'l', 'L', ASCII_FF, 0},
{'j', 'J', ASCII_LF, 0},
{'\'', '\"', '\'', 0},

// 40-49
{'k', 'K', ASCII_VT, 0},
{';', ':', ';', 0},
{'\\', '|', '\\', 0},
{',', '<', ',', 0},
{'/', '?', '/', 0},
{'n', 'N', ASCII_SO, 0},
{'m', 'M', ASCII_CR, 0},
{'.', '>', '.', 0},
{ASCII_HT, ASCII_HT, ASCII_HT, 0},
{' ', ' ', ' ', 0},

// 50-59
{'`', '~', '`', 0},
{ASCII_BS, ASCII_BS, ASCII_BS, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{ASCII_ESC, ASCII_ESC, ASCII_NUL, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, SPECIAL_ALT},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, SPECIAL_SHIFT},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, SPECIAL_CAPSLOCK},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, SPECIAL_ALT},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, SPECIAL_CTRL},

// 60-69
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'.', '.', '.', 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'*', '*', '*', 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'+', '+', '+', 0},

// 70-79
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'/', '/', '/', 0},
{ASCII_CR, ASCII_CR, ASCII_CR, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'-', '-', '-', 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},

// 80-89
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'=', '=', '=', 0},
{'0', '0', '0', 0},
{'1', '1', '1', 0},
{'2', '2', '2', 0},
{'3', '3', '3', 0},
{'4', '4', '4', 0},
{'5', '5', '5', 0},
{'6', '6', '6', 0},
{'7', '7', '7', 0},

// 90-99
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{'8', '8', '8', 0},
{'9', '9', '9', 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F5,KEY_F5,KEY_F5,0},
{KEY_F6,KEY_F6,KEY_F6,0},
{KEY_F7,KEY_F7,KEY_F7,0},
{KEY_F3,KEY_F3,KEY_F3,0},

// 100-109
{KEY_F8,KEY_F8,KEY_F8,0},
{KEY_F9,KEY_F9,KEY_F9,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F11,KEY_F11,KEY_F11,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F13,KEY_F13,KEY_F13,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F14,KEY_F14,KEY_F14,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F10,KEY_F10,KEY_F10,0},

// 110-119
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F12,KEY_F12,KEY_F12,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_F15,KEY_F15,KEY_F15,0},
{KEY_HELP, KEY_HELP, KEY_HELP, 0},
{KEY_HOME, KEY_HOME, KEY_HOME, 0},
{KEY_PAGE_UP, KEY_PAGE_UP, KEY_PAGE_UP, 0},
{ASCII_BS, ASCII_BS, ASCII_BS, 0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},
{KEY_END, KEY_END, KEY_END, 0},

// 120-127
{KEY_F2,KEY_F2,KEY_F2,0},
{KEY_PAGE_DOWN, KEY_PAGE_DOWN, KEY_PAGE_DOWN, 0},
{KEY_F1,KEY_F1,KEY_F1,0},
{KEY_LEFT,KEY_LEFT,KEY_LEFT,0},
{KEY_RIGHT,KEY_RIGHT,KEY_RIGHT,0},
{KEY_DOWN,KEY_DOWN,KEY_DOWN,0},
{KEY_UP,KEY_UP,KEY_UP,0},
{KEY_INVALID, KEY_INVALID, KEY_INVALID, 0},



