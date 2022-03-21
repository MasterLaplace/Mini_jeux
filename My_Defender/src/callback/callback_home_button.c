/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_home_button
*/

#include "defender.h"

void callback_home_button(game_t *game, __attribute__((unused)) void *params)
{
    if (game == NULL)
        return;
    change_scene(game, HOME);
    sfSound_play(game->sounds[click]->sound);
}
