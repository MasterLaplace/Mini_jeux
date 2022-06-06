/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_strncopy
*/

#include "my.h"

char *my_strncopy(char const *src, char *dest, size_t len)
{
    if (!src || !dest)
        return (NULL);

    for (size_t i = 0; i < len; i++)
        dest[i] = src[i];
    dest[len] = '\0';
    return dest;
}
