/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** transaction
*/

#include "defender.h"

bool transaction(game_t *game, int cost)
{
    if (((int) game->stats->money - cost) >= 0) {
        game->stats->money -= cost;
        return true;
    }
    return false;
}
