// --------------------------------------------------------------------------------
// Tap dance ----------------------------------------------------------------------

enum tap_dances {
    COLON_SHIFT,
};


// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------
// Advanced tap-hold to replace the LT(c) function

// Unfortunatelly, the LT(layer, kc) and MT() functions are limited to basics keycodes
// According to the doc, we have to use a tap dance
// https://docs.qmk.fm/#/feature_layers

// How to :
//      - Add an entry in the enum
//      - Declare and create two functions :
//                  *_finished()
//                  *_reset()
//      - Add it in the "qk_tap_dance_action_t" function with these new functions (end of this file)
//      - Add in the layout TD(name)


// ------------------------------------------------------------
// ------------------------------------------------------------
// Tap dance limited to tap and hold (double tap is horrible ^^)
typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
} td_state_t;

// Create a global instance of the tapdance state type
static td_state_t td_state;

// Determine the tapdance state to return
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    }

    else return TD_UNKNOWN; // Any number higher than the maximum state value you return above
}


// ------------------------------------------------------------
// MOD : COLON_SHIFT - Specific functions

void colon_shift_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
            register_code16(KC_COLON);
            break;
        case TD_SINGLE_HOLD:
            register_mods(MOD_BIT(KC_RSFT));
            break;
        default:
            break;
    }
}

void colon_shift_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_SINGLE_TAP:
            unregister_code16(KC_COLON);
            break;
        case TD_SINGLE_HOLD:
            unregister_mods(MOD_BIT(KC_RSFT));
            break;
        default:
            break;
    }
}

// MOD : COLON_SHIFT - Specific functions
// ------------------------------------------------------------

// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------
// Link here enum and keys (simple or advanced)

qk_tap_dance_action_t tap_dance_actions[] = {

    [COLON_SHIFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, colon_shift_finished, colon_shift_reset),
};
