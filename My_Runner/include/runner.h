/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** runner
*/

#ifndef RUNNER_H_
    #define RUNNER_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "my.h"

enum t_obj {bk, bk1, bk2, mr, bt, mj, mn};

typedef struct game_object_s {
    enum t_obj type;
    sfVector2f pos;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    float veloc;
    int init_pos;
    unsigned short stat;
    int offset;
    int max_value;
} game_obj_t;

typedef struct game_state_s {
    sfRenderWindow *window;
    sfMusic *music;
    sfClock *clock_game;
    sfTime time_game;
    sfText *text;
    sfFont *font;
    float seconds_game;
    float time_limit;
    char *way_1;
    char *way_2;
    int state;
    int px;
    int av_line;
    int esp;
} game_t;

game_obj_t *create_obj(char *path_sprt, enum t_obj type);
void init_pos_veloc(game_obj_t **obj);
void init_game(game_t *game);
void game_loop(game_t *game, game_obj_t **obj);
void menu(game_t *game, game_obj_t **obj, sfEvent event);
void anal_evt(game_t *game, game_obj_t **obj, sfEvent);
void play_sound(char *path_file);
void move_rect(game_t *game, game_obj_t **obj);
void set_rect(game_obj_t **obj);
void collision(game_t *game, game_obj_t **obj);
void move_sprite(game_t *game, game_obj_t **obj);
void cond_move_ennemy(game_t *game, game_obj_t **obj);
void cond_move_background(game_t *game, game_obj_t **obj);
void draw_sprite(sfRenderWindow *window, game_obj_t **obj);
int argue(const int ac, const char **av, game_t *game);
void destroy_object(game_t *game, game_obj_t **obj);
void init_background(game_obj_t **obj);
void init_sprite(game_obj_t **obj);
#endif/* RUNNER_H_ */
