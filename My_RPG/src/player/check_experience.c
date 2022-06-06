/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** check_experience
*/

#include "game.h"

extern const size_t MAX_LEVEL;
extern const size_t EXP_LEVEL[];

void check_experience(game_t *game)
{
    if (PLY_STATS->experience >= PLY_STATS->next_level) {
        if (PLY_STATS->level + 1 > MAX_LEVEL);
        else {
            PLY_STATS->level++;
            PLY_STATS->damage += 2;
            PLY_STATS->defense += 2;
            PLY_STATS->health = (PLY_STATS->health + 5 > PLY_STATS->max_health)
            ? PLY_STATS->max_health : PLY_STATS->health + 5;
            PLY_STATS->experience = 0;
            PLY_STATS->next_level = EXP_LEVEL[PLY_STATS->level];
        }
    }
}
