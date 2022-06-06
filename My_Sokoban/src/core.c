/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** main
*/

#include "../includes/sokoban.h"

static void display_map(struct _win_st *ok, char **map, int nbr_line, int len)
{
    clear();
    if (ok->_maxy / 2 < nbr_line || ok->_maxx / 2 < len) {
        move(ok->_maxy / 2, ok->_maxx / 2 - (my_strlen("PLUS GRAND !!!") / 2));
        printw("PLUS GRAND !!!");
    }
    else {
        for (int i = 0; i < nbr_line; i++) {
            move(ok->_maxy / 2 + i, ok->_maxx / 2 - (len / 2));
            printw("%s", map[i]);
        }
    }
    refresh();
}

static int game_main(struct _win_st *ok, game_t *game)
{
    int len_max = my_max_len_tab(game->map);
    int key = 0;

    game->nbr_line = my_two_len(game->map);
    display_map(ok, game->map, game->nbr_line, len_max);

    while (key != EXIT && detect_win(game) == 0) {
        if (detect_loose(game) == 1) {
            display_map(ok, game->map, game->nbr_line, len_max);
            return 1;
        }
        key = getch();
        detect_event(game, key);
        display_map(ok, game->map, game->nbr_line, len_max);
    }
    display_map(ok, game->map, game->nbr_line, len_max);
    return 0;
}

bool init_game(game_t *game)
{
    game->map = load_map(game->path);
    if (!game->map)
        return false;
    game->pos_j = detect_player(game->map);
    set_pos_base(game);
    game->nbr_box = my_count_two_char(game->map, 'X');
    return true;
}

static void close_game(game_t *game)
{
    free(game->pos_b);
    my_two_free(game->map);
}

int main(UNUSED int ac, char **av)
{
    struct _win_st *ok;
    game_t game;
    int stat = 0;

    if (!handling_error(&game, av[1]))
        return EXIT_84;
    ok = initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    stat = game_main(ok, &game);
    endwin();
    close_game(&game);
    return stat;
}
