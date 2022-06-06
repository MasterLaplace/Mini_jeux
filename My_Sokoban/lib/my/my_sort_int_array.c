/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_sort_int_array
*/

#include "my.h"

void my_sort_int_array(int *tab, size_t size)
{
    if (!tab || size == 0)
        return;

    for (size_t i = 1; i < size; i++)
        if (tab[i - 1] > tab[i]) {
            my_swap(&tab[i], &tab[i - 1]);
            i = 0;
        }
}
