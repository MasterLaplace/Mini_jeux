/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_isnum
*/

#include "my.h"

bool my_isnum(char const *str)
{
    if (!str)
        return false;

    for (size_t i = 0; str[i]; i++)
        if (str[i] <= '0' || str[i] >= '9')
            return false;
    return true;
}
