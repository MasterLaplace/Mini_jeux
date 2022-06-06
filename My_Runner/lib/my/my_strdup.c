/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char *str);

char *my_strdup(char *src)
{
    char *dest = malloc(my_strlen(src));

    for (int i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}
