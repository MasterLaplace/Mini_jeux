/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** events
*/

#include "game.h"

static void game_keys(game_t *game, sfKeyCode sfKey)
{
    if (CURRENT == GAME) {
        if (sfKey == sfKeyA)
            attack_player(game, ATTACK);
        if (sfKey == sfKeyZ)
            attack_player(game, KICKING);
        if (sfKey == sfKeyE)
            attack_player(game, THROWING);
        if (sfKey == sfKeyC)
            callback_stats_button(game, NULL);
        if (sfKey == sfKeyV)
            callback_inventory_button(game, NULL);
    }
}

static void manage_key(game_t *game, sfKeyCode sfKey)
{
    if (sfKey == sfKeyP || sfKey == sfKeyEscape) {
        if (CURRENT == GAME)
            change_scene(game, PAUSE);
        else if (CURRENT == PAUSE)
            change_scene(game, GAME);
        if (CURRENT == HOME)
            change_scene(game, PARAM);
        else if (CURRENT == PARAM)
            change_scene(game, HOME);
    }
    game_keys(game, sfKey);
}

void analyse_events(game_t *game, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(WINDOW);
    if (CURRENT == NAME && event.type == sfEvtKeyPressed)
        update_name(game, event.key.code);
    check_mouse_event(game, event);
    if (event.type == sfEvtKeyReleased)
        manage_key(game, event.key.code);
}
