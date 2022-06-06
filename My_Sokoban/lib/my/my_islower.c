/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_islower
*/

#include "my.h"

bool my_islower(char const *str)
{
    if (!str)
        return false;

    for (size_t i = 0; str[i]; i++)
        if (str[i] <= 'a' || str[i] >= 'z')
            return false;
    return true;
}
