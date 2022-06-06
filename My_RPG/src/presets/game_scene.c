/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** game
*/

#include "game.h"

const size_t NB_GAME_BUTTONS = 1;
const preset_button_t GAME_BUTTONS[] =
{
    {
        PAUSE_BUTTON,
        (sfVector2f){1800, 18},
        (sfVector2f){0.75, 0.75},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_pause_button,
        (void *) &update_ui_button
    }
};

const size_t NB_GAME_INTERFACE = 0;
const preset_interface_t GAME_INTERFACE[] =
{

};
