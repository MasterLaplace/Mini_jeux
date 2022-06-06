/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** draw_entity
*/

#include "game.h"

void draw_entity(game_t *game)
{
    draw_list(game, game->enemies);
    draw_list(game, game->objects);
    draw_list(game, game->pnjs);
    draw_list(game, PLAYER.arrows);
}
