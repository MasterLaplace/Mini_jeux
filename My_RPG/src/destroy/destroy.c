/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy
*/

#include "game.h"

void destroying(game_t *game)
{
    sounds_destroy(game->sounds);
    musics_destroy(game->musics);
    sfClock_destroy(game->clock);
    sfRenderWindow_destroy(WINDOW);
    free(game->display);
    destroy_links(game);
    destroy_inventory_panel(game);
    destroy_stats_panel(game);
    destroy_player(game);
}
