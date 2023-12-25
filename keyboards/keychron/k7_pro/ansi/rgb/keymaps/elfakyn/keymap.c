/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi_68(
        MI_AOFF  , KC_NO    , MI_Cs1   , MI_Ds1   , KC_NO    , MI_Fs1   , MI_Gs1   , MI_As1   , KC_NO    , MI_Cs2   , MI_Ds2   , KC_NO    , MI_Fs2   , MI_OC2   ,              MI_ON  ,
        KC_NO    , MI_C1    , MI_D1    , MI_E1    , MI_F1    , MI_G1    , MI_A1    , MI_B1    , MI_C2    , MI_D2    , MI_E2    , MI_F2    , MI_G2    , KC_NO    ,              MI_OFF ,
        KC_NO    , KC_NO    , MI_Cs    , MI_Ds    , KC_NO    , MI_Fs    , MI_Gs    , MI_As    , KC_NO    , MI_Cs1   , MI_Ds1   , KC_NO    ,            MI_VL10  ,              MI_OCTU,
        MI_LEG   ,            MI_C     , MI_D     , MI_E     , MI_F     , MI_G     , MI_A     , MI_B     , MI_C1    , MI_D1    , MI_E1    ,            KC_NO    , MI_VELU    , MI_OCTD,
        KC_NO    , KC_NO    , KC_NO    ,                                  MI_SUST  ,                                  KC_NO    , MO(4)    , KC_NO    , MI_BNDD  , MI_VELD    , MI_BNDU
    ),
    [1] = LAYOUT_ansi_68(
        KC_ESC , KC_1   , KC_2   , KC_3 , KC_4 , KC_5 , KC_6  , KC_7 , KC_8 , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC,          KC_DEL,
        KC_TAB , KC_Q   , KC_W   , KC_E , KC_R , KC_T , KC_Y  , KC_U , KC_I , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,          KC_HOME,
        KC_GRV , KC_A   , KC_S   , KC_D , KC_F , KC_G , KC_H  , KC_J , KC_K , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,          KC_PGUP,
        KC_LSFT,          KC_Z   , KC_X , KC_C , KC_V , KC_B  , KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH,          KC_RSFT, KC_UP  , KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                      KC_SPC,                        KC_RALT, MO(3)  , MO(2)  , KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [2] = LAYOUT_ansi_68(
        S(KC_GRV), KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10   , KC_F11    , KC_F12   , _______   ,             _______,
        _______  , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______   , _______  , _______   ,             KC_P8,
        _______  , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , KC_MS_BTN3,            KC_MS_BTN2,             KC_MS_WH_UP,
        _______  ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______   ,            KC_MS_BTN1, KC_MS_UP  , KC_MS_WH_DOWN,
        _______  , _______ , _______ ,                               _______ ,                               _______  , _______   , _______  , KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT
    ),
    [3] = LAYOUT_ansi_68(
        KC_GRV    , KC_F1     , KC_F2     , KC_F3     , KC_F4  , KC_F5  , KC_F6  , KC_F7            , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR,          KC_INS,
        _______   , BT_HST1   , BT_HST2   , BT_HST3   , _______, _______, _______, _______          , _______, _______, _______, _______, _______, _______,          KC_END,
        KC_CAPS   , RGB_MOD   , RGB_VAI   , RGB_HUI   , RGB_SAI, RGB_SPI, _______, _______          , _______, _______, _______, _______,          KC_MSTP,          KC_SCRL,
        RGB_TOG   ,             RGB_RMOD  , RGB_VAD   , RGB_HUD, RGB_SAD, RGB_SPD, NK_TOGG          , _______, KC_MRWD, KC_MFFD, _______,          _______, KC_VOLU, KC_PAUS,
        _______   , _______   , KC_MSTP   ,                               KC_MPLY,                                      _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [4] = LAYOUT_ansi_68(
        _______  , MI_CH1   , MI_CH2   , MI_CH3   , MI_CH4   , MI_CH5   , MI_CH6   , MI_CH7   , MI_CH8   , MI_CH9   , MI_CH16  , KC_NO    , KC_NO    , _______  ,            _______  ,
        _______  , KC_NO    , KC_NO    , MI_CH14  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , _______  ,            _______  ,
        _______  , MI_CH10  , KC_NO    , MI_CH13  , MI_CH15  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,            _______  ,            _______  ,
        _______  ,            KC_NO    , KC_NO    , MI_CH12  , KC_NO    , MI_CH11  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,            _______  , _______  , _______  ,
        _______  , _______  , _______  ,                                  _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______
    )
};
