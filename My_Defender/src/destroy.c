/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** destroy
*/

#include "defender.h"

void destroying(game_t *game)
{
    sounds_destroy(game->sounds);
    musics_destroy(game->musics);
    sfClock_destroy(game->clock);
    sfRenderWindow_destroy(game->display->window);
    free(game->display);
    free(game);
}
