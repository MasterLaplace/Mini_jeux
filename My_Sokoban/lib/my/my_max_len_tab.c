/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_max_len_tab
*/

#include "my.h"

size_t my_max_len_tab(char **str)
{
    size_t len_max = 0;
    size_t len = 0;

    if (!str)
        return len_max;

    for (size_t i = 0; i < my_two_len(str); i++) {
        len = my_strlen(str[i]);
        if (len > len_max)
            len_max += len;
    }
    return len_max;
}
