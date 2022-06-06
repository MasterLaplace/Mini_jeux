/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** name_scene
*/

#include "game.h"

const size_t NB_NAME_BUTTONS = 1;
const preset_button_t NAME_BUTTONS[] =
{
    {
        V_BUTTON,
        (sfVector2f){882, 630},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_play_button,
        (void *) &update_ui_button
    }
};

const size_t NB_NAME_INTERFACE = 2;
const preset_interface_t NAME_INTERFACE[] =
{
    {
        TABLE,
        (sfVector2f){478, 275}
    },
    {
        SPACE_TEXT,
        (sfVector2f){800, 500}
    }
};

const preset_text_t PRESET_NAME_TEXT =
{
    NAME_TEXT,
    (sfVector2f) {855, Y_WIN / 2 - 25},
    "Ok !",
    "assets/fonts/Dimbo_Regular.ttf",
    55
};
