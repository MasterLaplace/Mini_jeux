/*
** EPITECH PROJECT, 2021
** task05
** File description:
** my strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    while (*str) {
        if (my_strncompare(str, to_find, my_strlen(to_find)) == 0)
            return str;
        str++;
    }
    return NULL;
}
