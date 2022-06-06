/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** compare two string
*/

#include "my.h"

size_t my_strcmp(char const *str1, char const *str2)
{
    size_t i = 0;

    if (!str1 || !str2)
        return (1);

    for (; str1[i] == str2[i] && str1[i]; i++);
    return (str1[i] - str2[i]);
}
