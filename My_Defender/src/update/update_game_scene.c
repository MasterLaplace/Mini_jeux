/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_game_scene
*/

#include "defender.h"

void update_game_scene(game_t *game)
{
    if (game->current_scene == GAME) {
        wave_enemy(game);
        move_enemies(game);
        check_range(game, game->game_scene->towers);
        if (game->stats->nb_enemy >= 64) {
            destroy_enemies(game);
            destroy_towers(game);
            change_scene(game, WIN);
        }
        if (game->stats->health_castle <= 0) {
            destroy_enemies(game);
            destroy_towers(game);
            change_scene(game, LOSE);
        }
    }
}
