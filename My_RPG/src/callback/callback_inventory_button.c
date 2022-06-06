/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_inventory_button
*/

#include "game.h"

void callback_inventory_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    if (INVENTORY->statue == false)
        INVENTORY->statue = true;
    else if (STATS_PANEL->statue == true)
        INVENTORY->statue = false;
    sfSound_play(game->sounds[click]->sound);
}
