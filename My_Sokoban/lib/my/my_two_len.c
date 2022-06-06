/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_two_len
*/

#include "my.h"

size_t my_two_len(char **tab)
{
    size_t i = 0;

    if (!tab)
        return i;

    for (; tab[i]; i++);
    return i;
}
