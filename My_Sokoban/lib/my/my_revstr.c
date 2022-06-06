/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    size_t i = my_strlen(str) - 1;
    static char c = '\0';

    if (!str)
        return (NULL);

    for (size_t n = 0; n != i; n++) {
        c = str[n];
        str[n] = str[i];
        str[i] = c;
        i--;
    }
    return str;
}
