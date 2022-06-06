/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** player_preset
*/

#include "game.h"

const size_t MAX_VALUE[] = {18, 24, 6, 6, 6, 9, 12, 12, 12, 15};
const size_t MAX_LEVEL = 7;
const size_t EXP_LEVEL[] = {50, 100, 200, 350, 600, 1050, 1465};
const preset_player_t PLAYER_DATA =
{
    8.0f,
    4.0f,
    80,
    20,
    10,
    25,
    0,
    1,
    (sfVector2f) {200, 300},
    (sfIntRect) {0, 0, 216, 216},
    216,
    (sfVector2f) {1.f, 1.f},
    &update_player
};
