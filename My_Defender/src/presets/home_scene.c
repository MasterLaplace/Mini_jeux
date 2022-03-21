/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** home
*/

#include "defender.h"

const size_t NB_HOME_BUTTONS = 3;
const preset_button_t HOME_BUTTONS[] =
{
    {
        PARAM_BUTTON,
        (sfVector2f){20, 20},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 176, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_param_button,
        (void *) &update_ui_button
    },
    {
        PLAY_BUTTON,
        (sfVector2f){(X_WIN / 3 * 2) - 330 - (332 / 2), 350},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 332, 330},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_map_button,
        (void *) &update_ui_button
    },
    {
        EXIT_BUTTON,
        (sfVector2f){780, 800},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 325, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_exit_button,
        (void *) &update_ui_button
    }
};

const size_t NB_HOME_INTERFACE = 2;
const preset_interface_t HOME_INTERFACE[] =
{
    {
        ROPE,
        (sfVector2f){830, 500}
    },
    {
        ROPE,
        (sfVector2f){1030, 500}
    }
};
