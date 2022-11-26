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
    SEQ_TWO_KEYS(KC_F, KC_L) {
      SEND_STRING("FLinguenheld"); }

    // Degree
    SEQ_THREE_KEYS(KC_D, KC_E, KC_G) {
      send_unicode_string("°"); }

    // Copyright / Register
    SEQ_THREE_KEYS(KC_C, KC_O, KC_P) {
      send_unicode_string("©"); }
    SEQ_THREE_KEYS(KC_R, KC_E, KC_G) {
      send_unicode_string("®"); }

    // Diameter
    SEQ_THREE_KEYS(KC_D, KC_I, KC_A) {
      send_unicode_string("ø"); }
    SEQ_FOUR_KEYS(KC_D, KC_I, KC_A, KC_M) {
      send_unicode_string("Ø"); }

    // Currency
    SEQ_THREE_KEYS(KC_E, KC_U, KC_R) {
      send_unicode_string("€"); }
    SEQ_THREE_KEYS(KC_P, KC_O, KC_U) {
      send_unicode_string("£"); }
    SEQ_THREE_KEYS(KC_Y, KC_E, KC_N) {
      send_unicode_string("¥"); }
    SEQ_THREE_KEYS(KC_C, KC_E, KC_N) {
      send_unicode_string("¢"); }

    // Fractions
    SEQ_THREE_KEYS(KC_Q, KC_S, KC_T) {
      send_unicode_string("¼"); }
    SEQ_THREE_KEYS(KC_Q, KC_S, KC_G) {
      send_unicode_string("½"); }
    SEQ_THREE_KEYS(KC_H, KC_S, KC_T) {
      send_unicode_string("¾"); }

    // Maths
    SEQ_THREE_KEYS(KC_M, KC_U, KC_L) {
      send_unicode_string("×"); }
    SEQ_THREE_KEYS(KC_D, KC_I, KC_V) {
      send_unicode_string("÷"); }
    SEQ_TWO_KEYS(KC_P, KC_M) {
      send_unicode_string("±"); }
    SEQ_THREE_KEYS(KC_I, KC_N, KC_E) {
      send_unicode_string("≠"); }
    SEQ_THREE_KEYS(KC_A, KC_L, KC_M) {
      send_unicode_string("≈"); }
    SEQ_THREE_KEYS(KC_S, KC_Q, KC_U) {
      send_unicode_string("√"); }
    SEQ_THREE_KEYS(KC_I, KC_N, KC_F) {
      send_unicode_string("∞"); }
    SEQ_TWO_KEYS(KC_LABK, KC_LABK) {
      send_unicode_string("≤"); }
    SEQ_TWO_KEYS(KC_RABK, KC_RABK) {
      send_unicode_string("≥"); }

    // Greek
    SEQ_TWO_KEYS(KC_P, KC_I) {
      send_unicode_string("π"); }
    SEQ_THREE_KEYS(KC_P, KC_I, KC_I) {
      send_unicode_string("Π"); }

    SEQ_THREE_KEYS(KC_O, KC_M, KC_E) {
      send_unicode_string("ω"); }
    SEQ_FOUR_KEYS(KC_O, KC_M, KC_E, KC_G) {
      send_unicode_string("Ω"); }

    // Icons
    SEQ_THREE_KEYS(KC_F, KC_L, KC_A) {
      send_unicode_string("⚡"); }
    SEQ_THREE_KEYS(KC_S, KC_P, KC_A) {
      send_unicode_string("✨"); }
    SEQ_THREE_KEYS(KC_O, KC_W, KC_D) {
      send_unicode_string("⛔"); }
    SEQ_THREE_KEYS(KC_C, KC_O, KC_F) {
      send_unicode_string("☕"); }
    SEQ_THREE_KEYS(KC_U, KC_M, KC_B) {
      send_unicode_string("☔"); }
    SEQ_THREE_KEYS(KC_Y, KC_E, KC_S) {
      send_unicode_string("✅"); }
    SEQ_TWO_KEYS(KC_N, KC_O) {
      send_unicode_string("❎"); }
    SEQ_THREE_KEYS(KC_C, KC_R, KC_O) {
      send_unicode_string("❌"); }
    SEQ_TWO_KEYS(KC_EXCLAIM, KC_EXCLAIM) {
      send_unicode_string("❓"); }
    SEQ_ONE_KEY(KC_EXCLAIM) {
      send_unicode_string("❗"); }
    SEQ_THREE_KEYS(KC_EXCLAIM, KC_EXCLAIM, KC_G) {
      send_unicode_string("❔"); }
    SEQ_TWO_KEYS(KC_EXCLAIM, KC_G) {
      send_unicode_string("❕"); }

    // Subscript / superscript
    SEQ_THREE_KEYS(KC_U, KC_P, KC_C) {
      send_unicode_string("⁰"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_C) {
      send_unicode_string("₀"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_Q) {
      send_unicode_string("¹"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_Q) {
      send_unicode_string("₁"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_G) {
      send_unicode_string("²"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_G) {
      send_unicode_string("₂"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_H) {
      send_unicode_string("³"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_H) {
      send_unicode_string("₃"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_T) {
      send_unicode_string("⁴"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_T) {
      send_unicode_string("₄"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_S) {
      send_unicode_string("⁵"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_S) {
      send_unicode_string("₅"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_R) {
      send_unicode_string("⁶"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_R) {
      send_unicode_string("₆"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_V) {
      send_unicode_string("⁷"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_V) {
      send_unicode_string("₇"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_D) {
      send_unicode_string("⁸"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_D) {
      send_unicode_string("₈"); }
    SEQ_THREE_KEYS(KC_U, KC_P, KC_L) {
      send_unicode_string("⁹"); }
    SEQ_THREE_KEYS(KC_D, KC_N, KC_L) {
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
