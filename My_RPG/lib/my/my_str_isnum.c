/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str is num
*/

#include "my.h"

static bool is_operator(char c, int i, int len)
{
    if (len <= 1)
        return false;
    if ((c == '-' || c == '+') && i == 0)
        return true;
    else
        return false;
}

bool my_str_isnum(char const *str)
{
    size_t len = my_strlen(str);

    if (len == 0)
        return false;
    for (size_t i = 0; i < len; i++) {
        if ((str[i] < '0' || str[i] > '9') && !is_operator(str[i], i, len))
            return true;
    }
    return false;
}
