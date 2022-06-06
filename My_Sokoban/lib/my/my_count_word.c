/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_count_word
*/

#include "my.h"

size_t my_count_word(char const *str, char c)
{
    size_t nbr = 0;

    if (!str)
        return (0);

    for (size_t i = 1; i <= my_strlen(str); i++)
        if (str[i] == c || !str[i])
            nbr++;
    return nbr;
}
