/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** stats panel
*/

#include "game.h"

const size_t NB_STATS_BUTTONS = 2;
const preset_button_t STATS_BUTTONS[] =
{
    {
        INVENTORY_BUTTON,
        (sfVector2f){850, 730},
        (sfVector2f){0.77, 0.77},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_backpack_button,
        (void *) &update_ui_button
    },
    {
        RETURN_BUTTON,
        (sfVector2f){990, 730},
        (sfVector2f){0.77, 0.77},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_stats_button,
        (void *) &update_ui_button
    }
};

const size_t NB_STATS_DYNAMIC = 2;
const preset_dynamic_t STATS_DYNAMIC[] =
{
    {
        XP_BAR,
        (sfIntRect){0, 0, 481, 13},
        (sfVector2f){715, 350},
        EXP_BAR
    },
    {
        HEALTH_BAR,
        (sfIntRect){0, 0, 446, 28},
        (sfVector2f){755, 395},
        LIFE_BAR
    }
};
