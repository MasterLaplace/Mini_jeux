/*
** EPITECH PROJECT, 2021
** task03
** File description:
** my revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    size_t len = my_strlen(str);
    char tmp = '\0';

    for (size_t i = 0; i <= len / 2 - 1; i++) {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    return str;
}
