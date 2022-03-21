/*
** EPITECH PROJECT, 2021
** strdup
** File description:
** strdup
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char const *src)
{
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (dest == NULL)
        return NULL;
    my_strcpy(dest,src);
    return dest;
}
