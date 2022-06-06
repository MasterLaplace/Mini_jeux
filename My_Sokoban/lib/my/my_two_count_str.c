/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_two_count_str
*/

#include "my.h"

size_t my_two_count_str(char **tab, char const *str)
{
    size_t count = 0;

    if (!tab || !str)
        return count;

    for (size_t i = 0; tab[i]; i++)
        if (my_strcmp(tab[i], str) == 0)
            count++;
    return count;
}
