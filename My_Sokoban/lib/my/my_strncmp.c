/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_strncmp
*/

#include "my.h"

size_t my_strncmp(char const *str1, char const *str2, size_t len)
{
    size_t i = 0;

    if (!str1 || !str2)
        return (1);

    for (; str1[i] == str2[i] && i < len; i++);
    return (str1[i] - str2[i]);
}
