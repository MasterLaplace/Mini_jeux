/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** map
*/

#include "defender.h"

const size_t NB_MAP_BUTTONS = 9;
const preset_button_t MAP_BUTTONS[] =
{
    {
        LEVELS,
        (sfVector2f){556, 403},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){766, 403},
        (sfVector2f){1, 1},
        (sfIntRect){0, 175, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){976, 403},
        (sfVector2f){1, 1},
        (sfIntRect){0, 350, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){1186, 403},
        (sfVector2f){1, 1},
        (sfIntRect){0, 525, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){556, 622},
        (sfVector2f){1, 1},
        (sfIntRect){0, 700, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){766, 622},
        (sfVector2f){1, 1},
        (sfIntRect){0, 875, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){976, 622},
        (sfVector2f){1, 1},
        (sfIntRect){0, 1050, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        LEVELS,
        (sfVector2f){1186, 622},
        (sfVector2f){1, 1},
        (sfIntRect){0, 1225, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    },
    {
        CLOSE_MAP,
        (sfVector2f){1360, 229},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 103, 104},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_MAP_INTERFACE = 2;
const preset_interface_t MAP_INTERFACE[] =
{
    {
        DARK,
        (sfVector2f){0, 0}
    },
    {
        TABLE_LEVELS,
        (sfVector2f){0, 0}
    }
};
