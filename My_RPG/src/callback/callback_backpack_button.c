/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** calback_backpack_button
*/

#include "game.h"

void callback_backpack_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    STATS_PANEL->statue = true;
    INVENTORY->statue = false;
    sfSound_play(game->sounds[click]->sound);
}
