/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** lose_scene
*/

#include "defender.h"

const size_t NB_LOSE_BUTTONS = 1;
const preset_button_t LOSE_BUTTONS[] =
{
    {
        MENU_BUTTON,
        (sfVector2f){1450, 850},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_LOSE_INTERFACE = 3;
const preset_interface_t LOSE_INTERFACE[] =
{
    {
        DARK,
        (sfVector2f){0, 0}
    },
    {
        TRIBE,
        (sfVector2f){326, 481}
    },
    {
        TEXT_BUBBLE,
        (sfVector2f){881, 155}
    }
};
