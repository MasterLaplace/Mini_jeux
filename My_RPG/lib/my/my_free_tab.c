/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** my_free_tab
*/

#include <stdlib.h>

size_t my_len_tab(char **tab);

void my_free_tab(char **tab)
{
    for (size_t i = 0; i < my_len_tab(tab); i++)
        free(tab[i]);
    free(tab);
}
