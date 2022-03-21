/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_pause_button
*/

#include "defender.h"

void callback_pause_button(game_t *game, __attribute__((unused)) void *params)
{
    if (game == NULL)
        return;
    change_scene(game, PAUSE);
}
