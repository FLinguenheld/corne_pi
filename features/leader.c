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

    SEQ_THREE_KEYS(KC_D, KC_E, KC_G) {
      send_unicode_string("°"); }

    SEQ_THREE_KEYS(KC_D, KC_I, KC_A) {
      send_unicode_string("ø"); }
    SEQ_FOUR_KEYS(KC_D, KC_I, KC_A, KC_M) {
      send_unicode_string("Ø"); }
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
