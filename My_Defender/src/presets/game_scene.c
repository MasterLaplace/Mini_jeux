/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** constants
*/

#include "defender.h"

const size_t NB_GAME_BUTTONS = 1;
const preset_button_t GAME_BUTTONS[] =
{
    {
        PAUSE_BUTTON,
        (sfVector2f){20, 20},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_pause_button,
        (void *) &update_ui_button
    }
};

const size_t NB_GAME_INTERFACE = 1;
const preset_interface_t GAME_INTERFACE[] =
{
    {
        TABLE,
        (sfVector2f){1400, -425}
    }
};
