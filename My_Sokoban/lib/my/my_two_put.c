/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_two_put
*/

#include "my_printf.h"

void my_two_put(char **tab)
{
    for (; tab && *tab; tab++)
        my_printf("%s\n", *tab);
}
