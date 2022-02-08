/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** game
*/
#include <SFML/Graphics.h>
#include "include/runner.h"
#include "include/my.h"

static void draw_text(game_t *game)
{
    game->text = sfText_create();
    sfText_setString(game->text, my_strcat(my_itoa(game->px), "score : "));
    sfText_setCharacterSize(game->text, 50);
    sfText_setFont(game->text, game->font);
    sfRenderWindow_drawText(game->window, game->text, NULL);
    sfText_destroy(game->text);
}

static void map(game_t *game, game_obj_t **obj)
{
    if (game->way_1[game->av_line] == '\n') {
        game->state = 0;
        init_pos_veloc(obj);
        init_game(game);
        play_sound("music/Mario_Bros_V.ogg");
        my_putstr("You Win!\n");
    }
    if (game->way_1[game->av_line] == '-') {
        game->esp = 1;
    }
    if (game->way_2[game->av_line] == 'o') {
        game->esp = 2;
    }
}

void game_loop(game_t *game, game_obj_t **obj)
{
    sfEvent event;
    game->clock_game = sfClock_create();
    while (sfRenderWindow_isOpen(game->window) && (game->state == 1)) {
        while (sfRenderWindow_pollEvent(game->window, &event))
            anal_evt(game, obj, event);
        game->time_game = sfClock_getElapsedTime(game->clock_game);
        game->seconds_game = game->time_game.microseconds / 1000000.0;
        if (game->seconds_game > game->time_limit) {
            move_rect(game, obj);
            sfClock_restart(game->clock_game);
        }
        map(game, obj);
        sfRenderWindow_clear(game->window, sfBlack);
        draw_sprite(game->window, obj);
        draw_text(game);
        move_sprite(game, obj);
        sfRenderWindow_display(game->window);
    }
    menu(game, obj, event);
}
