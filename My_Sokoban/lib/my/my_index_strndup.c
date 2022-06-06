/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_index_strndup
*/

#include "my.h"

char *my_ind_strndup(char const *str, size_t index, size_t len)
{
    char *tmp = malloc(sizeof(char) * (len + 1));

    if (!str || !tmp || index > len)
        return (NULL);

    for (size_t i = index; i < len; i++)
        tmp[i] = str[i];
    tmp[len] = '\0';
    return tmp;
}
