/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_exit_button
*/

#include "defender.h"

void callback_exit_button(game_t *game, __attribute__((unused)) void *params)
{
    if (game == NULL)
        return;
    sfRenderWindow_close(game->display->window);
}
