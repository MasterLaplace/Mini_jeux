/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_index_char
*/

#include "my.h"

int my_index_char(const char *str, char c)
{
    int i = 0;

    if (!str)
        return (-1);

    for (; str[i] && str[i] != c; i++);
    return i;
}
