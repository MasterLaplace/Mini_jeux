/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char const *dest, char const *src)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    size_t i = 0;
    size_t e = 0;

    if (!dest || !tmp)
        return (NULL);

    for (; src[i]; i++)
        tmp[i] = src[i];
    for (; dest[e]; i++, e++)
        tmp[i] = dest[e];
    tmp[i] = '\0';
    return tmp;
}
