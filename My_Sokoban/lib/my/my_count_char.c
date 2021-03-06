/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_count_char
*/

#include "my.h"

size_t my_count_char(char const *str, char c)
{
    size_t nbr = 0;

    if (!str)
        return (0);

    for (size_t i = 0; i < my_strlen(str); i++)
        if (str[i] == c)
            nbr++;
    return nbr;
}
