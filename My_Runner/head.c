/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** head
*/
#include <stdio.h>
#include <stdlib.h>
#include "include/runner.h"
#include "include/my.h"

static int header(void)
{
    my_putstr("Finite runner created with CSFML.\n\nUSAGE\n");
    my_putstr("  ./my_runner map.txt\n\n\nOPTIONS\n");
    my_putstr("  -h\t\tprint the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n  SPACE_KEY\t\tjump.\n");
    my_putstr("  TAB_KEY\t\trestart.\n  DOWN_KEY\t\troulade.\n");
    my_putstr("  ENTER_KEY\t\tstart.\n  M_KEy\t\tmute.\n  L_KEY\t\tdemute.\n");
    return 1;
}

static int map_arguements(void)
{
    my_putstr("Invalid arguments.\n");
    my_putstr("map mode easy : easy.txt.\n");
    my_putstr("map mode normal : normal.txt.\n\n");
    my_putstr("For more information :\n  -h\n");
    return 84;
}

int argue(const int ac, const char **av, game_t *game)
{
    char *buf;
    int error = 0;

    if (ac == 1)
        return map_arguements();
    if (av[1][0] == '-' && av[1][1] == 'h')
        error = header();
    FILE *fd = fopen(av[1], "r");
    size_t size = 0;
    if ((fd == NULL) || (ac != 2))
        error = map_arguements();
    if (error != 0)
        return 1;
    getline(&buf, &size, fd);
    game->way_1 = my_strdup(buf);
    game->way_1[size] = '\0';
    getline(&buf, &size, fd);
    game->way_2 = buf;
    fclose(fd);
    return 0;
}
