/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** jump_player
*/

#include "game.h"

void jump_player(game_t *game, UNUSED int param)
{
    if (PLY_STATE != FALLING && PLY_STATE != JUMP_START
        && PLY_STATE != JUMP_LOOP) {
        PLY_STATE = JUMP_START;
        PLY_STATS->gravity = 40.0f;
        PLY_STATS->speed = 12.0f;
        sfSprite_move(PLAYER.sprite, (sfVector2f) {0, -PLY_STATS->gravity});
    }
}
