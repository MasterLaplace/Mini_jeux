/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str is lower
*/

#include "my.h"

bool my_str_islower(char const *str)
{
    while (*str) {
        if (str[0] >= 'a' && str[0] <= 'z')
            str++;
        else
            return false;
    }
    return true;
}
