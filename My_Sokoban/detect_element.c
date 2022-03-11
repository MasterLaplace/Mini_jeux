/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** detect_element
*/

#include "sokoban.h"

sfVector2i_t detect_player(char **map)
{
    int x = 0;
    int y = 0;

    while (map[y] != NULL && map[y][x] != 'P') {
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
        x++;
    }
    return (sfVector2i_t){x, y};
}

static int detect_base(game_t *game, int i, int x, int nbr)
{
    if (game->map[i][x] == 'O') {
        game->pos_b[nbr] = (sfVector2i_t){x, i};
        nbr++;
    }
    return nbr;
}

void set_pos_base(game_t *game)
{
    int nbr = 0;
    int i = 0;
    int x = 0;

    game->nbr_base = my_compt_two_char(game->map, 'O');
    game->pos_b = malloc(sizeof(sfVector2i_t) * game->nbr_base);
    for (i = 0; i != my_str_two_len(game->map); i++) {
        for (x = 0; x != my_strlen(game->map[i]); x++)
            nbr = detect_base(game, i, x, nbr);
    }
}

int detect_limit_map(game_t *game, size_t Y, size_t X)
{
    if (Y <= 0 || X <= 0)
        return 1;
    if (Y >= game->nbr_line - 1 || X >= my_strlen(game->map[Y]))
        return 1;
    if (loop_base(game) == 1)
        game->map[game->pos_j.y][game->pos_j.x] = 'O';
    else
        game->map[game->pos_j.y][game->pos_j.x] = ' ';
    game->map[Y][X] = 'P';
    game->pos_j.x = X;
    game->pos_j.y = Y;
    return 0;
}
