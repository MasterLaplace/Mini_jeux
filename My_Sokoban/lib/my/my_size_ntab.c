/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-42sh-guillaume.papineau
** File description:
** my_size_ntab
*/

#include "my.h"

size_t my_size_ntab(char **tab, size_t n)
{
    size_t i = 0;

    for (size_t nb = 0; nb >= n || tab && *tab; tab++, nb++)
        i += my_strlen(*tab);
    return i;
}
