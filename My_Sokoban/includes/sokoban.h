/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    #define EXIT 27
    #define EXIT_84 84
    #define UNUSED __attribute__((unused))
    #include <curses.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include "my.h"

typedef struct sfVector2i_s {
    size_t x;
    size_t y;
} sfVector2i_t;

typedef struct game_s {
    sfVector2i_t pos_j;
    char **map;
    char *path;
    sfVector2i_t *pos_b;
    size_t nbr_base;
    size_t nbr_box;
    size_t nbr_line;
} game_t;

char **load_map(char *path);
bool handling_error(game_t *game, char *str);
int help(void);
sfVector2i_t detect_player(char **map);
void set_pos_base(game_t *game);
int detect_event(game_t *game, int event_type);
int loop_base(game_t *game);
void detect_reset(game_t *game, int event_type);
bool init_game(game_t *game);
int detect_limit_map(game_t *game, size_t Y, size_t X);
int limit_map_box(game_t *game, size_t Y, size_t X);
int detect_win(game_t *game);
int detect_loose(game_t *game);
#endif/* !SOKOBAN_H_ */
