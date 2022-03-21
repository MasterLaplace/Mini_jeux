/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** game_loading
*/

#include "defender.h"

void game_loading(game_t *game)
{
    sfTexture **text = game->textures;
    int lvl = game->current_map;

    destroy_enemies(game);
    change_scene(game, GAME);
    def_background(game->scene[game->current_scene], text[BCKG_MAP1 + lvl]);
    game->stats = init_stats();
    tower_generation(game);
}
