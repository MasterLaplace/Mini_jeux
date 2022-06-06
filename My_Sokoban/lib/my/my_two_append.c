/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_two_append
*/

#include "my.h"

char **my_two_append(char **tab, char const *str)
{
    size_t nbr = my_two_len(tab);
    char **dest = malloc(sizeof(char *) * (nbr + 2));

    if (!tab || !str || !dest)
        return (NULL);

    dest = my_two_dup(tab);
    dest[nbr] = my_strdup(str);
    dest[nbr + 1] = NULL;
    return dest;
}
