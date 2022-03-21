/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** game
*/

#include "defender.h"

display_t *display_init(void)
{
    display_t *display = malloc(sizeof(display_t));
    sfVideoMode mode = {X_WIN, Y_WIN, 32};

    display->window = sfRenderWindow_create(mode, "MyDefender",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(display->window, FRAMERATE);
    return display;
}

static game_scene_t *game_scene_init(game_t *game)
{
    game_scene_t *game_scene = malloc(sizeof(game_scene_t));

    game_scene->wheel = create_wheel(game);
    return game_scene;
}

static void game_init_sound(game_t *game)
{
    game->sounds = init_sounds();
    game->musics = init_music();
    sfMusic_play(game->musics[home_music]);
}

game_t *game_init(void)
{
    game_t *game = malloc(sizeof(game_t));

    game->display = display_init();
    if (!game->display->window)
        return NULL;
    game->clock = sfClock_create();
    game->current_scene = HOME;
    game->current_map = 0;
    game->pause = false;
    game->maps = NULL;
    game->enemies = NULL;
    game->textures = init_textures();
    game->scene = init_scenes(game);
    game->game_scene = game_scene_init(game);
    my_init_seed();
    game_init_sound(game);
    return game;
}
