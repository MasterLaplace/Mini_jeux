/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** texts
*/

#include "defender.h"

const size_t NB_TEXTS = 5;
const preset_text_t TEXT[] =
{
    {
        NB_ENEMY,
        (sfVector2f) {1500, 0},
        "Nombre d'ennemis  :  ",
        "assets/font/Dimbo_Regular.ttf",
        44
    },
    {
        MONEY,
        (sfVector2f) {1500, 50},
        "Argent  :  ",
        "assets/font/Dimbo_Regular.ttf",
        44
    },
    {
        HEALTH,
        (sfVector2f) {1500, 100},
        "Vie restante  :  ",
        "assets/font/Dimbo_Regular.ttf",
        50
    },
    {
        LOSE_TEXT,
        (sfVector2f) {950, 220},
        "Vous avez perdu,\nNous avons gagnes !",
        "assets/font/Dimbo_Regular.ttf",
        85
    },
    {
        NO_MAP_TEXT,
        (sfVector2f) {805, 260},
        "Map prochainement\ndisponible !",
        "assets/font/Dimbo_Regular.ttf",
        80
    }
};
