/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** change a string to a number
*/

#include "my.h"

static bool is_negative(char const *str)
{
    if (*str == '-')
        return true;
    return false;
}

int my_getnbr(char const *str)
{
    size_t x = my_strlen(str) - 1;
    int res = 0;
    int exp = 0;

    if (!str)
        return res;

    for (size_t size = x; size >= 0; size--) {
        if (size == x && is_negative(str))
            size--;
        exp = str[size] - '0';
        for (size_t i = size; i < x; i++)
            exp *= 10;
        res += exp;
    }
    if (is_negative(str))
        res = res * -1;
    return res;
}
