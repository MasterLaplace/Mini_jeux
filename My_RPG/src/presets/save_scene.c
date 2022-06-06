/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** save_scene
*/

#include "game.h"

const size_t NB_SAVE_BUTTONS = 3;
const preset_button_t SAVE_BUTTONS[] =
{
    {
        LEVEL_BUTTON,
        (sfVector2f){720, 385},
        (sfVector2f){0.9, 0.9},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_play_button,
        (void *) &update_ui_button
    },
    {
        LEVEL_BUTTON,
        (sfVector2f){1045, 385},
        (sfVector2f){0.9, 0.9},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_name_button,
        (void *) &update_ui_button
    },
    {
        RETURN_BUTTON,
        (sfVector2f){872, 620},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_SAVE_INTERFACE = 1;
const preset_interface_t SAVE_INTERFACE[] =
{
    {
        TABLE,
        (sfVector2f){477, 275}
    }
};
