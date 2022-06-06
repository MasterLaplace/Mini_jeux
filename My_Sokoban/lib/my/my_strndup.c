/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_strndup
*/

#include "my.h"

char *my_strndup(char const *str, size_t len)
{
    char *tmp = malloc(sizeof(char) * (len + 1));

    if (!str || !tmp)
        return (NULL);

    for (size_t i = 0; i < len; i++)
        tmp[i] = str[i];
    tmp[len] = '\0';
    return tmp;
}
