/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy_link
*/

#include "game.h"

static void destroy_enemies(game_t *game)
{
    if (!game->enemies)
        return;
    while (game->enemies)
        list_remove(&(game->enemies), game->enemies);
}

static void destroy_objects(game_t *game)
{
    if (!game->objects)
        return;
    while (game->objects)
        list_remove(&(game->objects), game->objects);
}

static void destroy_pnjs(game_t *game)
{
    if (!game->pnjs)
        return;
    while (game->pnjs)
        list_remove(&(game->pnjs), game->pnjs);
}

static void destroy_arrows(game_t *game)
{
    if (!PLAYER.arrows)
        return;
    while (PLAYER.arrows)
        list_remove(&(PLAYER.arrows), PLAYER.arrows);
}

void destroy_links(game_t *game)
{
    destroy_pnjs(game);
    destroy_objects(game);
    destroy_enemies(game);
    destroy_arrows(game);
}
