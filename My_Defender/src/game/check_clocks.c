/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** check_clocks
*/

#include "defender.h"

static void clock_framerate(game_t *game, sfRenderWindow *window)
{
    static float clock = 0.0f;
    float now = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    float diff = now - clock;

    while (diff >= (float) 1 / FRAMERATE) {
        sfRenderWindow_clear(window, sfBlack);
        if (game->current_scene == GAME)
            update_game_scene(game);
        draw_scene(game);
        if (game->current_scene == GAME)
            set_text(game);
        if (game->current_scene == LOSE)
            set_text_lose(game);
        else if (game->current_scene == NO_MAP)
            set_text_no_map(game);
        diff -= (float) 1 / FRAMERATE;
        clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
        sfRenderWindow_display(window);
    }
}

static void clock_exploitation(game_t *game)
{
    static float clock = 0.0f;
    float now = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    float diff = now - clock;

    while (diff >= (float) 1 / 20) {
        diff -= (float) 1 / 20;
        move_rect_enemy(game);
        move_rect_tower(game->game_scene->towers);
        clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    }
}

void check_clocks(game_t *game, sfRenderWindow *window)
{
    clock_framerate(game, window);
    if (game->current_scene == GAME)
        clock_exploitation(game);
}
