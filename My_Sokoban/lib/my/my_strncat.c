/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char const *dest, char const *src, size_t len)
{
    char *tmp = malloc(sizeof(char) * len);
    size_t i = 0;
    size_t e = 0;

    if (!dest || !src || !tmp)
        return (NULL);

    for (; src[i] || i > len; i++)
        tmp[i] = src[i];
    for (; dest[e] || i > len; i++, e++)
        tmp[i] = dest[e];
    tmp[i] = '\0';
    return tmp;
}
