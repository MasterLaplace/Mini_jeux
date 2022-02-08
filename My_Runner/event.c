/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** event
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/runner.h"

void play_sound(char *path_file)
{
    sfSound *sf_sound = sfSound_create();
    sfSoundBuffer *buffer_sound = sfSoundBuffer_createFromFile(path_file);
    sfSound_setBuffer(sf_sound, buffer_sound);
    sfSound_play(sf_sound);
}

static void close_window(game_t *game)
{
    sfRenderWindow_close(game->window);
    game->state = -1;
}

static void key_game(sfKeyCode sfKey, game_t *game, game_obj_t **obj)
{
    if (sfKey == sfKeyTab && game->state == 1) {
        game->state = 1;
        init_pos_veloc(obj);
        init_game(game);
        game_loop(game, obj);
    }
    if (sfKey == sfKeyEnter && game->state == 0) {
        game->state = 1;
        play_sound("music/Street_Fighter_Choose.ogg");
    }
    if (sfKey == sfKeyL) {
        sfMusic_setVolume(game->music, 30.00);
    }
}

static void man_key(sfKeyCode sfKey, game_t *game, game_obj_t **obj)
{
    key_game(sfKey, game, obj);
    if (sfKey == sfKeySpace && obj[5]->pos.y > 200 && obj[5]->stat == 0)
        obj[5]->stat = 2;
    if (sfKey == sfKeyDown && obj[5]->pos.y > 200 && obj[5]->stat == 0) {
        obj[5]->stat = 4;
        obj[5]->rect.left = 0;
    }
    if (sfKey == sfKeyM) {
        sfMusic_setVolume(game->music, 0.00);
    }
}

void anal_evt(game_t *game, game_obj_t **obj, sfEvent event)
{
    if (event.type == sfEvtClosed)
        close_window(game);
    if (event.type == sfEvtKeyReleased)
        man_key(event.key.code, game, obj);
}
