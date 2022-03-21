/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** win_scene
*/

#include "defender.h"

const size_t NB_WIN_BUTTONS = 2;
const preset_button_t WIN_BUTTONS[] =
{
    {
        MENU_BUTTON,
        (sfVector2f){734, 784},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    },
    {
        RETRY_BUTTON,
        (sfVector2f){1007, 784},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_level_button,
        (void *) &update_ui_button
    }
};

const size_t NB_WIN_INTERFACE = 2;
const preset_interface_t WIN_INTERFACE[] =
{
    {
        DARK,
        (sfVector2f){0, 0}
    },
    {
        TABLE_WIN,
        (sfVector2f){637, 120}
    }
};
