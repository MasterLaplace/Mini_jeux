/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_save_button
*/

#include "game.h"

void callback_save_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    change_scene(game, SAVE);
    sfSound_play(game->sounds[click]->sound);
}
