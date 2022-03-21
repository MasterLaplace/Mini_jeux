/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** destroy_enemies
*/

#include "defender.h"

void destroy_enemies(game_t *game)
{
    if (game->enemies == NULL && game->current_scene == PAUSE)
        return;
    while (game->enemies != NULL)
        list_remove(&(game->enemies), game->enemies);
}
