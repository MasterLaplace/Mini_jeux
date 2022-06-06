/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_isupper
*/

#include "my.h"

bool my_isupper(char const *str)
{
    if (!str)
        return false;

    for (size_t i = 0; str[i]; i++)
        if (str[i] <= 'A' || str[i] >= 'Z')
            return false;
    return true;
}
