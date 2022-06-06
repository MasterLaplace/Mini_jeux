/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_two_free
*/

#include "my.h"

void my_two_free(char **tab)
{
    if (!tab)
        return;

    for (size_t i = 0; i < my_two_len(tab); i++)
        free(tab[i]);
    free(tab);
}
