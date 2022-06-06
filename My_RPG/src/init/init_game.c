/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** game
*/

#include "game.h"

extern const char *MAP_PATHS[];

display_t *display_init(void)
{
    display_t *display = malloc(sizeof(display_t));
    sfVideoMode mode = {X_WIN, Y_WIN, 32};

    if (!display) {
        my_putstr("Echec du malloc de la window\n");
        return NULL;
    }
    display->window = sfRenderWindow_create(mode, "MyRPG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(display->window, FRAMERATE);
    return display;
}

static game_scene_t *game_scene_init(game_t *game)
{
    game_scene_t *game_scene = malloc(sizeof(game_scene_t));

    if (!game_scene) {
        my_putstr("Echec du malloc de game_scene\n");
        return NULL;
    }
    create_parallax(game_scene, game, PARALLAX_7_B);
    game_scene->interface_stat = define_stats_panel(game);
    game_scene->inventory = define_inventory_pannel(game);
    game_scene->bubble = create_bubble(game);
    game_scene->current_map = 3;
    game_scene->fade = false;
    return game_scene;
}

size_t create_linked_list(game_t *game, const char *filename)
{
    game->objects = NULL;
    game->enemies = NULL;
    game->pnjs = NULL;
    game->weather = my_randint(0, 3);
    if (create_list_pnj(game, filename) == 84 ||
        create_list_object(game, filename) == 84 ||
        create_list_enemy(game, filename) == 84)
        return EPITECH_FAILURE;
    return 0;
}

bool game_init(game_t *game)
{
    game->display = display_init();
    if (!WINDOW)
        return false;
    TEXTURES = init_textures();
    if (!TEXTURES)
        return false;
    game->scene = init_scenes(game);
    game->sounds = init_sounds();
    game->musics = init_music();
    game->hitboxes = init_hitboxes();
    game->clock = sfClock_create();
    if (!create_player(game))
        return false;
    CURRENT = HOME;
    if (create_linked_list(game, MAP_PATHS[VILLAGE]))
        return false;
    game->game_scene = game_scene_init(game);
    my_init_seed();
    sfMusic_play(game->musics[home_music]);
    return true;
}
