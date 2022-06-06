/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_two_putnbr
*/

#include "my_printf.h"

void my_two_putnbr(int *tab, size_t len)
{
    for (size_t i = 0; i < len; i++)
        my_printf("%d\n", tab[i]);
}
