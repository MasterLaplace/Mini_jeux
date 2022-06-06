/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** check_clocks
*/

#include "game.h"

static void case_game(game_t *game)
{
    if (CURRENT == GAME) {
        display_weather(game);
        set_text(game);
        PLAYER.update(game);
    }
}

static void clock_framerate(game_t *game, sfRenderWindow *window)
{
    static float clock = 0.0f;
    float now = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    float diff = now - clock;

    while (diff >= (float) 1 / 60) {
        diff -= (float) 1 / 60;
        sfRenderWindow_clear(window, sfBlack);
        manage_keyboard(game);
        draw_scene(game);
        case_game(game);
        if (CURRENT == CREDIT)
            update_credit(game);
        if (CURRENT == NAME)
            update_name(game, -1);
        sfRenderWindow_display(window);
        clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    }
}

static void clock_exploitation(game_t *game)
{
    static float clock = 0.0f;
    float now = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    float diff = now - clock;

    while (diff >= (float) 1 / 20) {
        diff -= (float) 1 / 20;
        is_dead(game);
        move_rect_player(game);
        move_arrow(game);
        attack_enemy(game, game->enemies);
        absorb_object(game);
        talk_to_pnj(game);
        take_the_door(game);
        display_fade(game, game->game_scene->fade);
        move_rect_object(game);
        move_rect_enemy(game);
        move_rect_pnj(game);
        check_experience(game);
        clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    }
}

void check_clocks(game_t *game, sfRenderWindow *window)
{
    clock_framerate(game, window);
    if (CURRENT == GAME)
        clock_exploitation(game);
}
