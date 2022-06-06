/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** texts
*/

#include "game.h"

const size_t NB_TEXTS = 5;
const preset_text_t TEXT[] =
{
    {
        MONEY_TEXT,
        (sfVector2f) {20, 300},
        "Argent  :  ",
        "assets/fonts/Dimbo_Regular.ttf",
        50
    },
    {
        HEALTH_TEXT,
        (sfVector2f) {20, 120},
        "Vie restante  :  ",
        "assets/fonts/Dimbo_Regular.ttf",
        50
    },
    {
        NAME_TEXT,
        (sfVector2f) {20, 0},
        "Ok !",
        "assets/fonts/Dimbo_Regular.ttf",
        80
    },
    {
        LEVEL_TXT,
        (sfVector2f) {955, 484},
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        35
    },
    {
        P_DAMAGE_TXT,
        (sfVector2f) {837, 568},
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        38
    },
    {
        DAMAGE_TXT,
        (sfVector2f) {1078, 568},
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        40
    },
    {
        P_DEFENSE_TXT,
        (sfVector2f) {837, 611},
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        40
    },
    {
        DEFENSE_TXT,
        (sfVector2f) {1078, 611},
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        40
    }
};
