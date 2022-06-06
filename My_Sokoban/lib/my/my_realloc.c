/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_realloc
*/

#include "my.h"

char *my_realloc(char *str, size_t size)
{
    char *dest = malloc(sizeof(char) * (size + 1));
    size_t len = my_strlen(str);

    if (!str)
        return (NULL);

    for (size_t i = 0; i < size; i++)
        if (i > len)
            dest[i] = '\0';
        else
            dest[i] = str[i];
    dest[size] = '\0';
    return dest;
}
