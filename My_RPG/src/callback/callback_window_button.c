/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_window_button
*/

#include "game.h"

void callback_window_button(game_t *game, UNUSED void *params)
{
    static bool window_state = true;

    if (window_state == false) {
        window_state = true;
        set_window_screen(game, sfResize);
    } else {
        window_state = false;
        set_window_screen(game, sfFullscreen);
    }
}
