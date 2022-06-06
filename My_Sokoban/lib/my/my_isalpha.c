/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_isalpha
*/

#include "my.h"

bool my_isalpha(char const *str)
{
    for (size_t i = 0; str[i]; i++)
        if (str[i] <= 'A' || str[i] >= 'Z' && str[i] <= 'a' || str[i] >= 'z')
            return false;
    return true;
}
