/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** pnj_preset
*/

#include "game.h"

const size_t NB_PNJ = 2;
const preset_pnj_t PNJ_STATS[] =
{
    {
        "black",
        0,
        0,
        MAGICIAN_1,
        (sfIntRect) {0, 0, 216, 216},
        216,
        18,
        NULL
    },
    {
        "white",
        0,
        0,
        MAGICIAN_2,
        (sfIntRect) {0, 0, 216, 216},
        216,
        18,
        NULL
    }
};
