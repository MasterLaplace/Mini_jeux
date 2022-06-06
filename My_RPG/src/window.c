/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** window
*/

#include "game.h"

void set_window_screen(game_t *game, sfWindowStyle type)
{
    sfVideoMode mode = {X_WIN, Y_WIN, 32};

    sfRenderWindow_close(WINDOW);
    WINDOW = sfRenderWindow_create(mode, "MyRPG",
    type | sfClose, NULL);
}
