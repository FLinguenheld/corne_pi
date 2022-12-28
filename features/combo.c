// --------------------------------------------------------------------------------
// Combos -------------------------------------------------------------------------

// How to :
//      - Add an entry in the enum
//      - Create a new sequence of keys
//      - Link the enum to this sequence in the key_combos table

// For macros :
//      - Same steps
//      - And add the macro in the process_combo_event() function

enum combos {
    LEADER,
    BOOTLOADER,

    LAYER_ADJUST,
    LAYER_FN,
    LAYER_FN_2,

    // French
    A_GRAVE,
    E_GRAVE,
    I_GRAVE,
    O_GRAVE,
    U_GRAVE,

    A_CIRCUMFLEX,
    E_CIRCUMFLEX,
    I_CIRCUMFLEX,
    O_CIRCUMFLEX,
    U_CIRCUMFLEX,

    A_DIAERESIS,
    E_DIAERESIS,
    I_DIAERESIS,
    O_DIAERESIS,
    U_DIAERESIS,
    Y_DIAERESIS,

    C_CEDILLA,
    E_A,
    E_O,

    // --
    // ENTER_SHIFTED,
    CONTROL_SHIFT,
    CONTROL_ALT,
    CONTROL_SHIFT_ALT,
    RIGHT_ALT,
    ALT_SHIFT,

    // --
    AMPERSAND,
    BACKSLASH,
    CIRCUMFLEX,
    EQUAL,

    QUOTE,
    QUOTE_DOUBLE,
    ANGLE_BRACKET_LEFT,
    ANGLE_BRACKET_RIGHT,

    EXCLAMATION_MARK,
    QUESTION_MARK,

    GRAVE,
    HASH,
    PIPE,
    PERCENT,
    MINUS,
    PLUS,
    SLASH,
    STAR,
    TILDE,
    UNDERSCORE,
    DOLLAR,
    AT_SIGN,

    PARENTHESIS_LEFT,
    PARENTHESIS_RIGHT,
    BRACKET_LEFT,
    BRACKET_RIGHT,
    CURLY_BRACKET_LEFT,
    CURLY_BRACKET_RIGHT,

    // One hand special
    CONTROL_RIGHT,
    CONTROL_SHIFT_RIGHT,
    SHIFT_LEFT,
    DEL_LEFT,

    // --
    COMBO_LENGTH, // Just to replace the define in config.h
};
uint16_t COMBO_LEN = COMBO_LENGTH;


// --------------------------------------------------
// --------------------------------------------------
// Sequences fo keys
const uint16_t PROGMEM combo_leader[] =                 {LALT_T(KC_SEMICOLON), TD(COLON_SHIFT), COMBO_END};
const uint16_t PROGMEM combo_bootloader[] =             {KC_J, CS_E_ACUTE, KC_Z, KC_BSPC, KC_C, KC_K, COMBO_END};

const uint16_t PROGMEM combo_adjust[] =                 {LT(_MOUSE, KC_COMM), LT(_ARROWS, KC_DOT), COMBO_END};
const uint16_t PROGMEM combo_fn[] =                     {LT(_NUMERIC, KC_ENT), KC_F, COMBO_END};
const uint16_t PROGMEM combo_fn_2[] =                   {LT(_NUMERIC, KC_ENT), KC_LCPO, COMBO_END};

// --
// const uint16_t PROGMEM combo_enter_shifted[] =          {LT(_NUMERIC, KC_ENT), KC_S, COMBO_END};
const uint16_t PROGMEM combo_control_shift[] =          {KC_LCPO, KC_S, COMBO_END};
const uint16_t PROGMEM combo_control_alt[] =            {KC_LCPO, KC_LALT, COMBO_END};
const uint16_t PROGMEM combo_control_shift_alt[] =      {KC_LCPO, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM combo_right_alt[] =              {KC_LAPO, KC_G, COMBO_END};
const uint16_t PROGMEM combo_alt_shift[] =              {KC_LALT, KC_S, COMBO_END};

// --
const uint16_t PROGMEM combo_a_grave[] =                {KC_LCPO, KC_A, COMBO_END};
const uint16_t PROGMEM combo_e_grave[] =                {KC_LCPO, KC_E, COMBO_END};
const uint16_t PROGMEM combo_i_grave[] =                {KC_LCPO, KC_I, COMBO_END};
const uint16_t PROGMEM combo_o_grave[] =                {KC_LCPO, KC_O, COMBO_END};
const uint16_t PROGMEM combo_u_grave[] =                {KC_LCPO, KC_U, COMBO_END};

const uint16_t PROGMEM combo_a_circumflex[] =           {LT(_MOUSE, KC_COMM), KC_A, COMBO_END};
const uint16_t PROGMEM combo_e_circumflex[] =           {LT(_MOUSE, KC_COMM), KC_E, COMBO_END};
const uint16_t PROGMEM combo_i_circumflex[] =           {LT(_MOUSE, KC_COMM), KC_I, COMBO_END};
const uint16_t PROGMEM combo_o_circumflex[] =           {LT(_MOUSE, KC_COMM), KC_O, COMBO_END};
const uint16_t PROGMEM combo_u_circumflex[] =           {LT(_MOUSE, KC_COMM), KC_U, COMBO_END};

const uint16_t PROGMEM combo_a_diaeresis[] =            {KC_SCLN, KC_A, COMBO_END};
const uint16_t PROGMEM combo_e_diaeresis[] =            {KC_SCLN, KC_E, COMBO_END};
const uint16_t PROGMEM combo_i_diaeresis[] =            {KC_SCLN, KC_I, COMBO_END};
const uint16_t PROGMEM combo_o_diaeresis[] =            {KC_SCLN, KC_O, COMBO_END};
const uint16_t PROGMEM combo_u_diaeresis[] =            {KC_SCLN, KC_U, COMBO_END};
const uint16_t PROGMEM combo_y_diaeresis[] =            {KC_SCLN, KC_Y, COMBO_END};

const uint16_t PROGMEM combo_c_cedilla[] =              {CS_E_ACUTE, KC_LCPO, COMBO_END};
const uint16_t PROGMEM combo_ea[] =                     {CS_E_ACUTE, KC_A, COMBO_END};
const uint16_t PROGMEM combo_eo[] =                     {CS_E_ACUTE, KC_O, COMBO_END};

// --
const uint16_t PROGMEM combo_pipe[] =                   {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM combo_ampersand[] =              {KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM combo_tilde[] =                  {KC_A, KC_E, COMBO_END};

const uint16_t PROGMEM combo_slash[] =                  {KC_S, KC_L, COMBO_END};
const uint16_t PROGMEM combo_backslash[] =              {KC_D, KC_R, COMBO_END};

const uint16_t PROGMEM combo_hash[] =                   {KC_A, KC_P, COMBO_END};
const uint16_t PROGMEM combo_percent[] =                {KC_P, KC_E, COMBO_END};
const uint16_t PROGMEM combo_at_sign[] =                {GUI_T(KC_ESC), KC_I, COMBO_END};

const uint16_t PROGMEM combo_circumflex[] =             {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM combo_dollar[] =                 {KC_D, KC_L, COMBO_END};

const uint16_t PROGMEM combo_star[] =                   {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo_underscore[] =             {KC_S, KC_R, COMBO_END};

const uint16_t PROGMEM combo_plus[] =                   {KC_T, KC_L, COMBO_END};
const uint16_t PROGMEM combo_minus[] =                  {KC_T, KC_R, COMBO_END};
const uint16_t PROGMEM combo_equal[] =                  {KC_T, KC_H, COMBO_END};

const uint16_t PROGMEM combo_grave[] =                  {KC_T, KC_G, COMBO_END};

const uint16_t PROGMEM combo_quote[] =                  {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM combo_quote_double[] =           {GUI_T(KC_ESC), KC_E, COMBO_END};

const uint16_t PROGMEM combo_angle_bracket_left[] =     {KC_S, KC_H, COMBO_END};
const uint16_t PROGMEM combo_angle_bracket_right[] =    {KC_G, KC_R, COMBO_END};

const uint16_t PROGMEM combo_exclamation_mark[] =       {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_question_mark[] =          {KC_V, KC_D, COMBO_END};

// --
const uint16_t PROGMEM combo_parenthesis_left[] =       {KC_Y, KC_E, COMBO_END};
const uint16_t PROGMEM combo_parenthesis_right[] =      {KC_A, KC_W, COMBO_END};
const uint16_t PROGMEM combo_bracket_left[] =           {KC_X, KC_E, COMBO_END};
const uint16_t PROGMEM combo_bracket_right[] =          {KC_I, KC_W, COMBO_END};
const uint16_t PROGMEM combo_curly_bracket_left[] =     {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM combo_curly_bracket_right[] =    {KC_A, KC_X, COMBO_END};

// One hand special
const uint16_t PROGMEM combo_control_right[] =          {LT(_NUMERIC, KC_ENT), KC_C, COMBO_END};
const uint16_t PROGMEM combo_control_shift_right[] =    {LT(_NUMERIC, KC_ENT), KC_S, COMBO_END};
const uint16_t PROGMEM combo_shift_left[] =             {KC_A, GUI_T(KC_ESC), COMBO_END};
const uint16_t PROGMEM combo_del_left[] =               {KC_J, KC_TAB, COMBO_END};


// --------------------------------------------------
// --------------------------------------------------
// Sequences fo keys
combo_t key_combos[] = {
    [LEADER] = COMBO(combo_leader,                          KC_LEAD),
    [BOOTLOADER] = COMBO(combo_bootloader,                  QK_BOOTLOADER),

    [LAYER_ADJUST] = COMBO(combo_adjust,                    OSL(_ADJUST)),
    [LAYER_FN] = COMBO(combo_fn,                            OSL(_FN)),
    [LAYER_FN_2] = COMBO(combo_fn_2,                        OSL(_FN)),

    // --
    // [ENTER_SHIFTED] = COMBO(combo_enter_shifted,            S(KC_ENT)),
    [CONTROL_SHIFT] = COMBO(combo_control_shift,            C(S(XXXXXXX))),
    [CONTROL_ALT] = COMBO(combo_control_alt,                C(A(XXXXXXX))),
    [CONTROL_SHIFT_ALT] = COMBO(combo_control_shift_alt,    C(S(A(XXXXXXX)))),
    [RIGHT_ALT] = COMBO(combo_right_alt,                    KC_RALT),
    [ALT_SHIFT] = COMBO(combo_alt_shift,                    A(S(XXXXXXX))),

    // French
    [A_GRAVE] = COMBO(combo_a_grave,                        CS_A_GRAVE),
    [E_GRAVE] = COMBO(combo_e_grave,                        CS_E_GRAVE),
    [I_GRAVE] = COMBO(combo_i_grave,                        CS_I_GRAVE),
    [O_GRAVE] = COMBO(combo_o_grave,                        CS_O_GRAVE),
    [U_GRAVE] = COMBO(combo_u_grave,                        CS_U_GRAVE),

    [A_CIRCUMFLEX] = COMBO(combo_a_circumflex,              CS_A_CIRCUMFLEX),
    [E_CIRCUMFLEX] = COMBO(combo_e_circumflex,              CS_E_CIRCUMFLEX),
    [I_CIRCUMFLEX] = COMBO(combo_i_circumflex,              CS_I_CIRCUMFLEX),
    [O_CIRCUMFLEX] = COMBO(combo_o_circumflex,              CS_O_CIRCUMFLEX),
    [U_CIRCUMFLEX] = COMBO(combo_u_circumflex,              CS_U_CIRCUMFLEX),

    [A_DIAERESIS] = COMBO(combo_a_diaeresis,                CS_A_DIAERESIS),
    [E_DIAERESIS] = COMBO(combo_e_diaeresis,                CS_E_DIAERESIS),
    [I_DIAERESIS] = COMBO(combo_i_diaeresis,                CS_I_DIAERESIS),
    [O_DIAERESIS] = COMBO(combo_o_diaeresis,                CS_O_DIAERESIS),
    [U_DIAERESIS] = COMBO(combo_u_diaeresis,                CS_U_DIAERESIS),
    [Y_DIAERESIS] = COMBO(combo_y_diaeresis,                CS_Y_DIAERESIS),

    [C_CEDILLA] = COMBO(combo_c_cedilla,                        CS_C_CEDILLA),
    [E_A] = COMBO(combo_ea,                                     CS_AE),
    [E_O] = COMBO(combo_eo,                                     CS_OE),

    // --
    [AMPERSAND] = COMBO(combo_ampersand,                        KC_AMPR),

    [QUOTE] = COMBO(combo_quote,                                KC_QUOTE),
    [QUOTE_DOUBLE] = COMBO(combo_quote_double,                  KC_DOUBLE_QUOTE),

    [ANGLE_BRACKET_LEFT] = COMBO(combo_angle_bracket_left,      KC_LABK),
    [ANGLE_BRACKET_RIGHT] = COMBO(combo_angle_bracket_right,    KC_RABK),
    [EXCLAMATION_MARK] = COMBO(combo_exclamation_mark,          KC_EXCLAIM),
    [QUESTION_MARK] = COMBO(combo_question_mark,                KC_QUESTION),

    [BACKSLASH] = COMBO(combo_backslash,                    KC_BSLS),
    [CIRCUMFLEX] = COMBO(combo_circumflex,                  KC_CIRC),
    [EQUAL] = COMBO(combo_equal,                            KC_EQL),
    [GRAVE] = COMBO(combo_grave,                            KC_GRV),
    [HASH] = COMBO(combo_hash,                              KC_HASH),
    [PERCENT] = COMBO(combo_percent,                        KC_PERC),
    [PIPE] = COMBO(combo_pipe,                              KC_PIPE),
    [MINUS] = COMBO(combo_minus,                            KC_MINS),
    [PLUS] = COMBO(combo_plus,                              KC_PLUS),
    [SLASH] = COMBO(combo_slash,                            KC_SLSH),
    [STAR] = COMBO(combo_star,                              KC_ASTR),
    [TILDE] = COMBO(combo_tilde,                            KC_TILD),
    [UNDERSCORE] = COMBO(combo_underscore,                  KC_UNDS),
    [DOLLAR] = COMBO(combo_dollar,                          KC_DLR),
    [AT_SIGN] = COMBO(combo_at_sign,                        KC_AT),

    // --
    [PARENTHESIS_LEFT] = COMBO(combo_parenthesis_left,          KC_LEFT_PAREN),
    [PARENTHESIS_RIGHT] COMBO(combo_parenthesis_right,          KC_RIGHT_PAREN),
    [BRACKET_LEFT] = COMBO(combo_bracket_left,                  KC_LEFT_BRACKET),
    [BRACKET_RIGHT] = COMBO(combo_bracket_right,                KC_RIGHT_BRACKET),
    [CURLY_BRACKET_LEFT] = COMBO(combo_curly_bracket_left,      KC_LEFT_CURLY_BRACE),
    [CURLY_BRACKET_RIGHT] = COMBO(combo_curly_bracket_right,    KC_RIGHT_CURLY_BRACE),

    // One hand special
    [CONTROL_RIGHT] = COMBO(combo_control_right,                KC_RCTL),
    [CONTROL_SHIFT_RIGHT] = COMBO(combo_control_shift_right,    C(S(XXXXXXX))),
    [SHIFT_LEFT] = COMBO(combo_shift_left,                      KC_RSFT),
    [DEL_LEFT] = COMBO(combo_del_left,                          KC_BSPC),
};
