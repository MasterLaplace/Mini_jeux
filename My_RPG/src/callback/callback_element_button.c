/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_elements_inventory_button
*/

#include "game.h"

void callback_element_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    sfSound_play(game->sounds[click]->sound);
}
