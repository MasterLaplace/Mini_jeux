/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_two_dup
*/

#include "my.h"

char **my_two_dup(char **tab)
{
    size_t nbr = my_two_len(tab);
    char **tmp = malloc(sizeof(char *) * (nbr + 1));

    if (!tab || !tmp)
        return (NULL);

    for (size_t i = 0; tab && *tab; i++) {
        tmp[i] = my_strdup(*tab);
        tab++;
    }
    tmp[nbr] = NULL;
    return tmp;
}
