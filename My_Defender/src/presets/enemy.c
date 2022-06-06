/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** enemy
*/

#include "defender.h"

const size_t NB_ENEMIES = 12;
const preset_enemy_t ENEMY[] =
{
    {
        1,
        (sfIntRect){0, 0, 303, 290},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {303 / 2, 290},
        5,
        40,
        303,
        10,
        5,
        0,
        0
    },
    {
        2,
        (sfIntRect){0, 0, 304, 316},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {304 / 2, 316},
        5,
        35,
        304,
        10,
        5,
        0,
        0
    },
    {
        3,
        (sfIntRect){0, 0, 292, 248},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {292 / 2, 248},
        5,
        60,
        292,
        20,
        5,
        0,
        0
    },
    {
        4,
        (sfIntRect){0, 0, 339, 285},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {339 / 2, 285},
        5,
        80,
        339,
        20,
        5,
        0,
        0
    },
    {
        5,
        (sfIntRect){0, 0, 380, 332},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {380 / 2, 332},
        5,
        25,
        380,
        20,
        5,
        0,
        0
    },
    {
        6,
        (sfIntRect){0, 0, 294, 275},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {294 / 2, 275},
        5,
        20,
        294,
        20,
        5,
        0,
        0
    },
    {
        7,
        (sfIntRect){0, 0, 343, 348},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {343 / 2, 348},
        5,
        30,
        343,
        20,
        5,
        0,
        0
    },
    {
        8,
        (sfIntRect){0, 0, 349, 291},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {349 / 2, 291},
        5,
        60,
        349,
        20,
        5,
        0,
        0
    },
    {
        9,
        (sfIntRect){0, 0, 316, 269},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {316 / 2, 269},
        5,
        60,
        316,
        20,
        5,
        0,
        0
    },
    {
        10,
        (sfIntRect){0, 0, 309, 257},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {309 / 2, 257},
        5,
        55,
        309,
        20,
        5,
        0,
        0
    },
    {
        11,
        (sfIntRect){0, 0, 269, 218},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {269 / 2, 218},
        5,
        50,
        269,
        20,
        5,
        0,
        0
    },
    {
        12,
        (sfIntRect){0, 0, 254, 205},
        (sfVector2f) {0.6, 0.6},
        (sfVector2f) {254 / 2, 205},
        5,
        20,
        254,
        20,
        5,
        0,
        0
    }
};
