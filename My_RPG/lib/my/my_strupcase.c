/*
** EPITECH PROJECT, 2021
** task08
** File description:
** my strupcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    size_t i = 0;

    while (str[i]) {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        i++;
    }
    return str;
}
