/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_cut
*/

#include "my.h"

static size_t new_len(size_t len, size_t nb1, size_t nb2)
{
    return (len - (nb2 - nb1));
}

char *my_cut(char *str, size_t nb1, size_t nb2)
{
    size_t len = new_len(my_strlen(str), nb1, nb2);
    char *tmp = malloc(sizeof(char) * (len + 1));

    if (!str || !tmp)
        return (NULL);

    for (size_t i = 0; str[i]; i++) {
        if (i == nb1)
            i = nb2;
        tmp[i] = str[i];
    }
    tmp[len] = '\0';
    return tmp;
}
