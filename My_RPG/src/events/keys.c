/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** keys
*/

#include "game.h"

const set_action_t keys[] = {
        {sfKeyLeft, &move_lateral_player, -1},
        {sfKeyRight, &move_lateral_player, 1},
        {sfKeySpace, &jump_player, 0},
        {0, NULL, 0}
};

static void manage_arrow(game_t *game)
{
    for (size_t i = 0; keys[i].action; i++)
        if (KEY_PRESSED(keys[i].key))
            keys[i].action(game, keys[i].param);
}

void manage_keyboard(game_t *game)
{
    manage_arrow(game);
}
