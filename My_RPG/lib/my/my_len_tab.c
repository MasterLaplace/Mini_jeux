/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** my_len_tab
*/

#include <stdlib.h>

size_t my_len_tab(char **tab)
{
    size_t i = 0;

    for (; tab[i]; i++);
    return i;
}
