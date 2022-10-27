// --------------------------------------------------------------------------------
// Leader -------------------------------------------------------------------------

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    // SEQ_ONE_KEY(KC_F) {
      // // Anything you can do in a macro.
      // SEND_STRING("QMK is awesome."); }


    SEQ_TWO_KEYS(KC_M, KC_S) {
      SEND_STRING("f@linguenheld.fr"); }
    SEQ_TWO_KEYS(KC_M, KC_L) {
      SEND_STRING("florent@linguenheld.fr"); }


    SEQ_THREE_KEYS(KC_D, KC_E, KC_G) {
      send_unicode_string("°"); }
    SEQ_THREE_KEYS(KC_C, KC_O, KC_P) {
      send_unicode_string("©"); }
    SEQ_THREE_KEYS(KC_R, KC_E, KC_G) {
      send_unicode_string("®"); }

    SEQ_THREE_KEYS(KC_D, KC_I, KC_A) {
      send_unicode_string("ø"); }
    SEQ_FOUR_KEYS(KC_D, KC_I, KC_A, KC_M) {
      send_unicode_string("Ø"); }

    SEQ_THREE_KEYS(KC_E, KC_U, KC_R) {
      send_unicode_string("€"); }
    SEQ_THREE_KEYS(KC_P, KC_O, KC_U) {
      send_unicode_string("£"); }
    SEQ_THREE_KEYS(KC_Y, KC_E, KC_N) {
      send_unicode_string("¥"); }

    SEQ_TWO_KEYS(KC_P, KC_I) {
      send_unicode_string("π"); }
    SEQ_THREE_KEYS(KC_P, KC_I, KC_I) {
      send_unicode_string("Π"); }

    SEQ_THREE_KEYS(KC_O, KC_M, KC_E) {
      send_unicode_string("ω"); }
    SEQ_FOUR_KEYS(KC_O, KC_M, KC_E, KC_G) {
      send_unicode_string("Ω"); }



    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_C) {
      send_unicode_string("⁰"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_C) {
      send_unicode_string("₀"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_Q) {
      send_unicode_string("¹"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_Q) {
      send_unicode_string("₁"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_G) {
      send_unicode_string("²"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_G) {
      send_unicode_string("₂"); }

    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_H) {
      send_unicode_string("³"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_H) {
      send_unicode_string("₃"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_T) {
      send_unicode_string("⁴"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_T) {
      send_unicode_string("₄"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_S) {
      send_unicode_string("⁵"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_S) {
      send_unicode_string("₅"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_R) {
      send_unicode_string("⁶"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_R) {
      send_unicode_string("₆"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_V) {
      send_unicode_string("⁷"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_V) {
      send_unicode_string("₇"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_D) {
      send_unicode_string("⁸"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_D) {
      send_unicode_string("₈"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_P, KC_L) {
      send_unicode_string("⁹"); }
    SEQ_FOUR_KEYS(KC_S, KC_U, KC_B, KC_L) {
      send_unicode_string("₉"); }

  }
}


// ---------------------------------------------------------
// ---------------------------------------------------------
// Set a bool for the oled screen
void leader_start(void) {
    is_leader_active = true;
}

void leader_end(void) {
    is_leader_active = false;
}
