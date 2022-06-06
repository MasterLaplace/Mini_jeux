/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_count_two_char
*/

#include "my.h"

size_t my_count_two_char(char **tab, char c)
{
    size_t nbr = 0;

    if (!tab)
        return nbr;

    for (size_t i = 0; tab[i]; i++)
        nbr += my_count_char(tab[i], c);
    return nbr;
}
