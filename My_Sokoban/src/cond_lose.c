/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** cond_lose
*/

#include "../includes/sokoban.h"

static int  detect_front(game_t *game, size_t y, size_t x)
{
    if (game->map[y][x - 1] == '#' || game->map[y][x - 1] == 'X')
        return 1;
    if (game->map[y][x + 1] == '#' || game->map[y][x + 1] == 'X')
        return 1;
    return 0;
}

static int cond_y(game_t *game, size_t y, size_t x)
{
    if (game->map[y][x] == 'X') {
        if (game->map[y - 1][x] == '#' || game->map[y - 1][x] == 'X')
            return detect_front(game, y, x);
        if (game->map[y + 1][x] == '#' || game->map[y + 1][x] == 'X')
            return detect_front(game, y, x);
    }
    return 0;
}

int detect_loose(game_t *game)
{
    size_t block = 0;

    for (size_t y = 1; y < game->nbr_line; y++) {
        for (size_t x = 1; game->map[y][x] != '\0'; x++) {
            block += cond_y(game, y, x);
        }
    }
    if (game->nbr_box == block)
        return 1;
    return 0;
}
