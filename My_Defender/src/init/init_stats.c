/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** init_stats
*/

#include "defender.h"

game_stats_t *init_stats(void)
{
    game_stats_t *stats = malloc(sizeof(*stats));

    if (stats == NULL)
        return NULL;
    stats->score = 0;
    stats->money = 200;
    stats->health_castle = 40;
    stats->current_nb_enemy = 0;
    stats->nb_enemy = 2;
    stats->nb_enemy_create = 0;
    return stats;
}
