/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** event
*/

#include "../includes/sokoban.h"
#define Y game->pos_j.y
#define X game->pos_j.x

static int key_up(game_t *game)
{
    if (game->map[Y - 1][X] != '#') {
        if (game->map[Y - 1][X] == 'X' && (game->map[Y - 2][X] == '#' ||
            game->map[Y - 2][X] == 'X'))
            return 0;
        else if (game->map[Y - 1][X] == 'X' && (game->map[Y - 2][X] != '#' &&
            game->map[Y - 2][X] != 'X')) {
            game->map[Y - 2][X] = 'X';
        }
        detect_limit_map(game, Y - 1, X);
    }
    return 0;
}

static int key_down(game_t *game)
{
    if (game->map[Y + 1][X] != '#') {
        if (game->map[Y + 1][X] == 'X' && (game->map[Y + 2][X] == '#' ||
            game->map[Y + 2][X] == 'X'))
            return 0;
        else if (game->map[Y + 1][X] == 'X' && (game->map[Y + 2][X] != '#' &&
            game->map[Y + 2][X] != 'X')) {
            game->map[Y + 2][X] = 'X';
        }
        detect_limit_map(game, Y + 1, X);
    }
    return 0;
}

static int key_right(game_t *game)
{
    if (game->map[Y][X + 1] != '#') {
        if (game->map[Y][X + 1] == 'X' && (game->map[Y][X + 2] == '#' ||
            game->map[Y][X + 2] == 'X'))
            return 0;
        else if (game->map[Y][X + 1] == 'X' && (game->map[Y][X + 2] != '#' &&
            game->map[Y][X + 2] != 'X')) {
            game->map[Y][X + 2] = 'X';
        }
        detect_limit_map(game, Y, X + 1);
    }
    return 0;
}

static int key_left(game_t *game)
{
    if (game->map[Y][X - 1] != '#') {
        if (game->map[Y][X - 1] == 'X' && (game->map[Y][X - 2] == '#' ||
            game->map[Y][X - 2] == 'X'))
            return 0;
        else if (game->map[Y][X - 1] == 'X' && (game->map[Y][X - 2] != '#' &&
            game->map[Y][X - 2] != 'X')) {
            game->map[Y][X - 2] = 'X';
        }
        detect_limit_map(game, Y, X - 1);
    }
    return 0;
}

int detect_event(game_t *game, int event_type)
{
    int stat = 0;

    if (event_type == KEY_UP)
        stat = key_up(game);
    if (event_type == KEY_DOWN)
        stat = key_down(game);
    if (event_type == KEY_RIGHT)
        stat = key_right(game);
    if (event_type == KEY_LEFT)
        stat = key_left(game);
    detect_reset(game, event_type);
    return stat;
}
