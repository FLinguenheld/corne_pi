// --------------------------------------------------------------------------------
// Oled display -------------------------------------------------------------------

#include "../font/logos.c"

// --------------------------------------------------
// --------------------------------------------------
// Wonderful display !
void oled_display(void) {

    oled_clear(); // prevents the timeout, I used oled_write_ln to fill lines with spaces

    // Layers
    switch (get_highest_layer(layer_state)) {

        case _BASE:
            oled_write_raw_P(qmk_logo, sizeof(qmk_logo));
            break;

        case _NUMERIC:
            oled_write_raw_P(qmk_numeric, sizeof(qmk_numeric));
            break;

        case _MOUSE:
            oled_write_raw_P(qmk_mouse, sizeof(qmk_mouse));
            break;

        case _ARROWS:
            oled_write_raw_P(qmk_arrows, sizeof(qmk_arrows));
            break;

        case _ADJUST:
            oled_write_raw_P(qmk_adjust, sizeof(qmk_adjust));
            break;

        case _FN:
            oled_write_raw_P(qmk_fn, sizeof(qmk_fn));
            break;
    }

    // Leader --
    if (is_leader_active) {

        oled_write_raw_P(qmk_leader, sizeof(qmk_leader));
    }

    // Modifier keys --
    if (get_mods()){

        uint8_t col = 0;
        uint8_t row = 0;

        if (get_mods() & MOD_MASK_CTRL) {

            oled_set_cursor(col, row);
            oled_write_char(0x01, false);
            oled_write_char(0x02, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x21, false);
            oled_write_char(0x22, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x41, false);
            oled_write_char(0x42, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x61, false);
            oled_write_char(0x62, false);

            row = 0;
            col += 2;
        }
        if (get_mods() & MOD_BIT(KC_LALT)) {

            oled_set_cursor(col, row);
            oled_write_char(0x03, false);
            oled_write_char(0x04, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x23, false);
            oled_write_char(0x24, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x43, false);
            oled_write_char(0x44, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x63, false);
            oled_write_char(0x64, false);

            row = 0;
            col += 2;
        }
        if (get_mods() & MOD_BIT(KC_RALT)) {

            oled_set_cursor(col, row);
            oled_write_char(0x05, false);
            oled_write_char(0x06, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x25, false);
            oled_write_char(0x26, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x45, false);
            oled_write_char(0x46, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x65, false);
            oled_write_char(0x66, false);

            row = 0;
            col += 2;
        }
        if (get_mods() & MOD_MASK_SHIFT) {

            oled_set_cursor(col, row);
            oled_write_char(0x07, false);
            oled_write_char(0x08, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x27, false);
            oled_write_char(0x28, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x47, false);
            oled_write_char(0x48, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x67, false);
            oled_write_char(0x68, false);

            row = 0;
            col += 2;

        }
        if (get_mods() & MOD_MASK_GUI) {

            oled_set_cursor(col, row);
            oled_write_char(0x0B, false);
            oled_write_char(0x0C, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x2B, false);
            oled_write_char(0x2C, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x4B, false);
            oled_write_char(0x4C, false);
            row += 1;
            oled_set_cursor(col, row);
            oled_write_char(0x6B, false);
            oled_write_char(0x6C, false);
        }
    }
};


// Add the timeout management here.
// Because it doesn't work with the OLED_TIMEOUT (the slave doesn't shutdown on power off).
// This management is only for the master, which will sync the status thanks to the SPLIT_OLED_ENABLE definition.

// The timer is restarted by the process_record_user() function.
// Set the OLED_KEY_TIMEOUT value in the config.h
bool oled_task_user(void) {

    if (is_keyboard_master()) {
        if (is_key_processed && (timer_elapsed(oled_timer) < OLED_KEY_TIMEOUT)) {
            oled_display();
        } else {
            is_key_processed = false;
            oled_off();
        }
    } else {
        oled_display();
    }
    return false;
}

// Shut both oled (witout the slave stays on)
void suspend_power_down_user(void) {
    oled_off();
}
