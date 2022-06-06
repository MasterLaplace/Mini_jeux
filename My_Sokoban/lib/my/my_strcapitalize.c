/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_strcapitalize
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    if (!str)
        return (NULL);

    for (size_t i = 0; str[i]; i++)
        if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i] == ' ')
            str[i + 1] = str[i + 1] - 'a' + 'A';
    return str;
}
