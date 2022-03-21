/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** pause_scene
*/

#include "defender.h"

const size_t NB_PAUSE_BUTTONS = 4;
const preset_button_t PAUSE_BUTTONS[] =
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
        PAUSE_BUTTON,
        (sfVector2f){700, 620},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_return_button,
        (void *) &update_ui_button
    },
    {
        MENU_BUTTON,
        (sfVector2f){1025, 620},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 175, 175},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_PAUSE_INTERFACE = 2;
const preset_interface_t PAUSE_INTERFACE[] =
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
