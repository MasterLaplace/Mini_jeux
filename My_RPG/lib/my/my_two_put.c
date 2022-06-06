/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** my_two_put
*/

#include "my.h"

void my_two_put(char **tab)
{
    for (register size_t i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
    }
}
