/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** player_preset
*/

#include "game.h"

const size_t NB_OBJ = 5;
const preset_object_t OBJECT_STATS[] =
{
    {
        "piece",
        "It's a piece !",
        1,
        PIECES,
        &move_rect_object,
        (sfIntRect) {0, 0, 128, 128},
        128,
        6
    },
    {
        "chest",
        "It's a chest !\nCan be open with a key !",
        0,
        CHEST,
        &move_rect_object,
        (sfIntRect) {0, 0, 128, 128},
        128,
        0
    },
    {
        "diamond",
        "It's a diamond !",
        0,
        DIAMOND,
        &move_rect_object,
        (sfIntRect) {0, 0, 128, 128},
        128,
        0
    },
    {
        "key_black",
        "Can open a chest !",
        0,
        KEY_BLACK,
        &move_rect_object,
        (sfIntRect) {0, 0, 128, 128},
        128,
        0
    },
    {
        "key_white",
        "Can open a chest !",
        0,
        KEY_WHITE,
        &move_rect_object,
        (sfIntRect) {0, 0, 128, 128},
        128,
        0
    },
};
