/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** enemy_preset
*/

#include "game.h"

const size_t EMY_MAX_VALUE[] = {18, 24, 12, 12, 15};

const size_t NB_ENEMY = 5;
const preset_enemy_t ENEMY_STATS[] =
{
    {
        "death",
        DEATH,
        75,
        10,
        6,
        35,
        (sfIntRect) {0, 0, 216, 216},
        216,
        &move_rect_enemy
    },
    {
        "lich",
        LICH,
        50,
        6,
        4,
        30,
        (sfIntRect) {0, 0, 216, 216},
        216,
        &move_rect_enemy
    },
    {
        "mummy",
        MUMMY,
        35,
        4,
        4,
        25,
        (sfIntRect) {0, 0, 216, 216},
        216,
        &move_rect_enemy
    },
    {
        "skeleton",
        SKELETON,
        35,
        4,
        4,
        20,
        (sfIntRect) {0, 0, 216, 216},
        216,
        &move_rect_enemy
    },
    {
        "zombie",
        ZOMBIE,
        35,
        4,
        4,
        20,
        (sfIntRect) {0, 0, 216, 216},
        216,
        &move_rect_enemy
    }
};
