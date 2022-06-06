/*
** EPITECH PROJECT, 2021
** strdup
** File description:
** strdup
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = NULL;

    if (!src)
        return NULL;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (!dest)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
