/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_issort
*/

#include "my.h"

bool my_issort(int *tab, size_t size)
{
    if (!tab)
        return (NULL);

    for (size_t i = 1; i < size; i++)
        if (tab[i - 1] > tab[i])
            return false;
    return true;
}
