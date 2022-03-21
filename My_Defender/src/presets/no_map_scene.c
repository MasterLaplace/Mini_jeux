/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** no_map_scene
*/

#include "defender.h"

const size_t NB_NO_MAP_BUTTONS = 1;
const preset_button_t NO_MAP_BUTTONS[] =
{
    {
        MENU_BUTTON,
        (sfVector2f){1491, 885},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};
const size_t NB_NO_MAP_INTERFACE = 3;
const preset_interface_t NO_MAP_INTERFACE[] =
{
    {
        TRUNK,
        (sfVector2f){426, 881}
    },
    {
        RED_ENEMY,
        (sfVector2f){485, 567}
    },
    {
        TEXT_BUBBLE,
        (sfVector2f){741, 191}
    },
};
