/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_index_strncmp
*/

#include "my.h"

size_t my_ind_strncmp(char const *st1, char const *st2, size_t ind, size_t len)
{
    size_t i = ind;
    size_t e = 0;

    if (!st1 || !st2)
        return (1);

    if (st1[0] == st2[0] && len == 1)
        return (0);
    for (; st1[i] == st2[e] && i < len; i++, e++);
    return (st1[i] - st2[e]);
}
