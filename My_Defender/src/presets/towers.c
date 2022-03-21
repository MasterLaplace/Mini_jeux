/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** towers
*/

#include "defender.h"

const preset_tower_t TOWERS[] =
{
    {
        (sfVector2f) {583 / 2, 747},
        (sfVector2f) {583, 747},
        (sfIntRect) {0, 0, 583, 747},
        7,
        583,
        10,
        250
    },
    {
        (sfVector2f) {1099 / 2, 754},
        (sfVector2f) {1099, 754},
        (sfIntRect) {0, 0, 1099, 754},
        14,
        1099,
        18,
        250
    },
    {
        (sfVector2f) {562 / 2, 1260},
        (sfVector2f) {562, 1962},
        (sfIntRect) {0, 0, 562, 1962},
        28,
        562,
        100,
        250
    },
    {
        (sfVector2f) {567 / 2, 1252},
        (sfVector2f) {567, 1252},
        (sfIntRect) {0, 0, 567, 1252},
        28,
        567,
        100,
        250
    }
};
