/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_stats_button
*/

#include "game.h"

void callback_stats_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    if (STATS_PANEL->statue == false)
        STATS_PANEL->statue = true;
    else if (INVENTORY->statue == true)
        STATS_PANEL->statue = false;
    sfSound_play(game->sounds[click]->sound);
}
