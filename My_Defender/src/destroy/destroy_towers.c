/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** destroy_towers
*/

#include "defender.h"

void destroy_towers(game_t *game)
{
    if (game->game_scene->towers == NULL)
        return;
    while (game->game_scene->towers != NULL)
        list_remove(&(game->game_scene->towers), game->game_scene->towers);
}
