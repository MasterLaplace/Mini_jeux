/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-42sh-guillaume.papineau
** File description:
** my_size_tab
*/

#include "my.h"

size_t my_size_tab(char **tab)
{
    size_t i = 0;

    for (; tab && *tab; tab++)
        i += my_strlen(*tab) - 1;
    return i;
}
