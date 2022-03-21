/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** events
*/

#include "defender.h"

static void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

static void manage_key(game_t *game, sfKeyCode sfKey)
{
    if (sfKey == sfKeyEscape || sfKey == 'P') {
        if (game->current_scene == GAME)
            change_scene(game, PAUSE);
        if (game->current_scene == PAUSE)
            change_scene(game, GAME);
        if (game->current_scene == HOME)
            change_scene(game, PARAM);
    }
}

void analyse_events(game_t *game, sfEvent event)
{
    sfRenderWindow *window = game->display->window;

    if (event.type == sfEvtClosed)
        close_window(window);
    check_mouse_event(game, event);
    if (event.type == sfEvtKeyReleased)
        manage_key(game, event.key.code);
}
