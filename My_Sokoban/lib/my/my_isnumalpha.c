/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-42sh-guillaume.papineau
** File description:
** my_isnumalpha
*/

#include "my.h"

bool my_isnumalpha(char const *str)
{
    while (*str) {
        if ((str[0] >= 'A' && str[0] <= 'Z')
        || (str[0] >= 'a' && str[0] <= 'z')
        || (str[0] >= '0' && str[0] <= '9')
        || (str[0] == '_'))
            str++;
        else
            return false;
    }
    return true;
}
