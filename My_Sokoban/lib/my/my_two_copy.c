/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_two_copy
*/

#include "my.h"

char **my_two_copy(char **src_tab, char **dest_tab)
{
    size_t i = my_two_len(src_tab);

    if (!src_tab || !dest_tab)
        return (NULL);

    for (; src_tab && *src_tab; i++) {
        dest_tab[i] = my_strcopy(*src_tab, dest_tab[i]);
        src_tab++;
    }
    dest_tab[i] = NULL;
    return dest_tab;
}
