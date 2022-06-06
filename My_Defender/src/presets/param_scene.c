/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** param_scene
*/

#include "defender.h"

const size_t NB_PARAM_BUTTONS = 3;
const preset_button_t PARAM_BUTTONS[] =
{
    {
        SOUND_BUTTON,
        (sfVector2f){700, 385},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 176, 176},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_sound_button,
        (void *) &update_sound_button
    },
    {
        MUSIC_BUTTON,
        (sfVector2f){1025, 385},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 176, 176},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_music_button,
        (void *) &update_music_button
    },
    {
        MENU_BUTTON,
        (sfVector2f){872, 620},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_PARAM_INTERFACE = 2;
const preset_interface_t PARAM_INTERFACE[] =
{
    {
        DARK,
        (sfVector2f){0, 0}
    },
    {
        TABLE,
        (sfVector2f){477, 275}
    }
};
