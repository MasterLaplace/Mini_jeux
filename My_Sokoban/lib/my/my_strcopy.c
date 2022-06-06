/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_strcopy
*/

#include "my.h"

char *my_strcopy(char const *src, char *dest)
{
    size_t i = 0;

    if (!src || !dest)
        return (NULL);

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
