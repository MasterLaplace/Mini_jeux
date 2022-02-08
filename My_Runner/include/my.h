/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my
*/
#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics.h>
    #include "runner.h"

    int my_strlen(char *str);
    void my_putstr(char *str);
    char *my_strcat(char *str, char *t);
    char *my_itoa(int nb);
    char *my_revstr(char *str);
    char *my_strdup(char *src);

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

#endif/* MY_H_ */
