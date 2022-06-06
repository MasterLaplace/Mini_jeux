/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** runner
*/

#include "runner.h"

game_obj_t *create_obj(char *path_sprt, enum t_obj type)
{
    game_obj_t *obj = malloc(sizeof(game_obj_t));
    obj->type = type;
    obj->sprite = sfSprite_create();
    obj->texture = sfTexture_createFromFile(path_sprt, NULL);
    obj->stat = 0;
    if (!obj->texture || !obj->sprite)
        exit(84);
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    return obj;
}

int main(int ac, const char **av)
{
    sfVideoMode mode = {800, 600, 32};
    game_obj_t *obj[9] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
                        NULL};
    game_t *game = malloc(sizeof(game_t));
    if (argue(ac, av, game) != 0)
        return EXIT_SUCCESS;
    game->music = sfMusic_createFromFile("music/music_back.ogg");
    game->font = sfFont_createFromFile("assets/arial.ttf");
    init_sprite(obj);
    char *tle = "Runner is the BEST GAME OF THE LAST WORLD";
    game->window = sfRenderWindow_create(mode, tle, sfResize | sfClose, NULL);
    init_pos_veloc(obj);
    init_game(game);
    sfMusic_play(game->music);
    sfMusic_setLoop(game->music, sfTrue);
    sfMusic_setVolume(game->music, 30.00);
    game_loop(game, obj);
    destroy_object(game, obj);
    return EXIT_SUCCESS;
}
