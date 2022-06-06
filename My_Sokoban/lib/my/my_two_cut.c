/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_two_cut
*/

#include "my.h"

char **my_two_cut(char **tab, size_t index1, size_t index2)
{
    size_t len = my_two_len(tab) - (index2 - index1);
    char **tmp = malloc(sizeof(char *) * (len + 1));

    if (!tab || !tmp || index1 >= index2)
        return (NULL);

    for (size_t i = 0, j = 0; tab[i]; i++, j++) {
        if (i == index1)
            i = index2;
        tmp[j] = my_strdup(tab[i]);
    }
    tmp[len] = NULL;
    return tmp;
}
