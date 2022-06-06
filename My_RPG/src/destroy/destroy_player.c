/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy_player
*/

#include "game.h"

void destroy_player(game_t *game)
{
    sfSprite_destroy(PLAYER.sprite);
    free(PLY_STATS->name);
    free(PLY_STATS);
}
