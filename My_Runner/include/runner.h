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

#endif    /* RUNNER_H_ */
