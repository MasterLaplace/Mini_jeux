/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** inventory_pannel
*/

#include "game.h"

const size_t NB_INVENTORY_BUTTONS = 1;
const preset_button_t INVENTORY_BUTTONS[] =
{
    {
        RETURN_BUTTON,
        (sfVector2f){888, 730},
        (sfVector2f){0.77, 0.77},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_inventory_button,
        (void *) &update_ui_button
    }
};

const size_t NB_INVENTORY_ELEMENTS = 24;
const preset_element_t INVENTORY_ELEMENTS =
{
    INACTIVE,
    (void *) &callback_element_button,
    (void *) &update_ui_button
};
