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
        MI_AOFF  , KC_NO    , MI_Cs3   , MI_Ds3   , KC_NO    , MI_Fs3   , MI_Gs3   , MI_As3   , KC_NO    , MI_Cs4   , MI_Ds4   , KC_NO    , MI_Fs4   , MI_AOFF  ,              MI_ON  ,
        KC_NO    , MI_C3    , MI_D3    , MI_E3    , MI_F3    , MI_G3    , MI_A3    , MI_B3    , MI_C4    , MI_D4    , MI_E4    , MI_F4    , MI_G4    , KC_NO    ,              MI_OFF ,
        KC_NO    , KC_NO    , MI_Cs2   , MI_Ds2   , KC_NO    , MI_Fs2   , MI_Gs2   , MI_As2   , KC_NO    , MI_Cs3   , MI_Ds3   , KC_NO    ,            MI_OC0   ,              MI_OCTU,
        KC_NO    ,            MI_C2    , MI_D2    , MI_E2    , MI_F2    , MI_G2    , MI_A2    , MI_B2    , MI_C3    , MI_D3    , MI_E3    ,            KC_NO    , MI_VELU    , MI_OCTD,
        KC_NO    , KC_NO    , KC_NO    ,                                  MI_AOFF  ,                                  KC_NO    , MO(4)    , KC_NO    , MI_OCTD  , MI_VELD    , MI_OCTU
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
        KC_NO    , MI_CH1   , MI_CH2   , MI_CH3   , MI_CH4   , MI_CH5   , MI_CH6   , MI_CH7   , MI_CH8   , MI_CH9   , MI_CH16  , KC_NO    , KC_NO    , KC_NO    ,            _______  ,
        KC_NO    , KC_NO    , KC_NO    , MI_CH14  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,            _______  ,
        KC_NO    , MI_CH10  , KC_NO    , MI_CH13  , MI_CH15  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,            KC_NO    ,            _______  ,
        KC_NO    ,            KC_NO    , KC_NO    , MI_CH12  , KC_NO    , MI_CH11  , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,            KC_NO    , _______  , _______  ,
        KC_NO    , KC_NO    , KC_NO    ,                                  _______  ,                                  KC_NO    , KC_NO    , KC_NO    , _______  , _______  , _______
    )
};
