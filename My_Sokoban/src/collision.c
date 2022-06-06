/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** collision
*/

#include "../includes/sokoban.h"

int loop_base(game_t *game)
{
    size_t i = 0;

    for (i = 0; i < game->nbr_base - 1 &&
        game->map[game->pos_b[i].y][game->pos_b[i].x] != 'P'; i++);
    if (game->map[game->pos_b[i].y][game->pos_b[i].x] == 'P')
        return 1;
    return 0;
}

void detect_reset(game_t *game, int event_type)
{
    if (event_type == ' ') {
        free(game->pos_b);
        free(game->map);
        init_game(game);
    }
}

int detect_win(game_t *game)
{
    size_t i = 0;

    for (i = 0; i != game->nbr_base &&
        game->map[game->pos_b[i].y][game->pos_b[i].x] == 'X'; i++);
    if (i == game->nbr_base)
        return 1;
    return 0;
}
