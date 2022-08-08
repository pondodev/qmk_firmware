#include QMK_KEYBOARD_H

enum plondo_layers {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _MOD
};

enum custom_keycodes {
    KC_ECTL = LCTL_T(KC_ESC),
    KC_MODL = MO(_MOD),
    KC_LWR  = MO(_LOWER),
    KC_RSE  = MO(_RAISE),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* base
     *                                                                   +-----+
     *                                                                   |Play |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * | Tab |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | Del |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * | Esc |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |Enter|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Ctrl | Mod | OS  | Alt |Lower|Space|Bkspc|Raise|Left |Down | Up  |Right|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     */
    [_BASE] = LAYOUT_plondo(
                                                                                                           KC_MPLY,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_ECTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
        KC_LCTL, KC_MODL, KC_LGUI, KC_LALT, KC_LWR , KC_SPC , KC_BSPC, KC_RSE , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
    ),

    /* lower
     *                                                                   +-----+
     *                                                                   |Play |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |  ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  | Del |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |     |     |     |  _  |  +  |     |     |  |  |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Ctrl |     | OS  | Alt |     |Space|Bkspc|     |Left |Down | Up  |Right|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     */
    [_LOWER] = LAYOUT_plondo(
                                                                                                           _______,
        KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, XXXXXXX, XXXXXXX, KC_PIPE,
        KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
        _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
    ),

    /* raise
     *                                                                   +-----+
     *                                                                   |Play |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | Del |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |     |     |     |  -  |  =  |     |     |  |  |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Ctrl |     | OS  | Alt |     |Space|Bkspc|     |Left |Down | Up  |Right|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     */
    [_RAISE] = LAYOUT_plondo(
                                                                                                           _______,
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL , XXXXXXX, XXXXXXX, KC_BSLS,
        KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
        _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
    ),

    /* adjust
     *                                                                   +-----+
     *                                                                   |Play |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Reset|     |     |     |     |     |     |     |     |     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |  [  |  ]  |     |     |  {  |  }  |     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |     |     |     |     |     |     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Ctrl |     | OS  | Alt |     |Space|Bkspc|     |Left |Down | Up  |Right|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     */
    [_ADJUST] = LAYOUT_plondo(
                                                                                                           _______,
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
    ),

    /* mod
     *                                                                   +-----+
     *                                                                   |Play |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |     |     |     |     |     |     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |     |     |     |     |     |     |     |     |PrScr|     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Shift|     |     |     |     |     |     |     |     |     |     |     |
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     * |Ctrl |     | OS  | Alt |     |Space|Bkspc|     |Left |Down | Up  |Right|
     * +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
     */
    [_MOD] = LAYOUT_plondo(
                                                                                                           _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______
    )
};

void keyboard_post_init_user(void) {
    setPinOutput(LED_IND1);
    setPinOutput(LED_IND2);
    setPinOutput(LED_IND3);

    writePinHigh(LED_IND1);
    writePinHigh(LED_IND2);
    writePinHigh(LED_IND3);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }

    return false;
}

#endif

#ifdef OLED_ENABLE

bool oled_task_user(void) {
    oled_write_P(PSTR("layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_ln_P("base", false);
            break;

        case _LOWER:
            oled_write_ln_P("lower", false);
            break;

        case _RAISE:
            oled_write_ln_P("raise", false);
            break;

        case _ADJUST:
            oled_write_ln_P("adjust", false);
            break;

        case _MOD:
            oled_write_ln_P("mod", false);
            break;

        default:
            oled_write_ln_P("undef", false);
            break;
    }

    return false;
}

#endif
