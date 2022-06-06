/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell2-guillaume.papineau
** File description:
** my_two_suppr
*/

#include "my.h"

char **my_two_suppr(char **tab, size_t save)
{
    if (!tab || save > my_two_len(tab))
        return (NULL);

    return &tab[save];
}
