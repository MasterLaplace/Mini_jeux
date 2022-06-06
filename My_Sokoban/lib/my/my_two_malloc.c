/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_two_malloc
*/

#include "my.h"

char **my_two_malloc(size_t y, size_t x)
{
    char **tab = malloc(sizeof(char *) * y + 1);

    if (!tab)
        return (NULL);

    for (size_t i = 0; i < y; i++) {
        tab[i] = malloc(sizeof(char) * x + 1);
        if (!tab[i])
            return (NULL);
        tab[i][x] = '\0';
    }
    tab[y] = NULL;
    return tab;
}
