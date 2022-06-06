/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** init_stats
*/

#include "game.h"

void init_stats(game_t *game)
{
    STATS.score = 0;
    STATS.money = 200;
    STATS.current_nb_enemy = 0;
    STATS.nb_enemy = 2;
    STATS.nb_enemy_create = 0;
}
