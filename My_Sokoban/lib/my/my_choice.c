/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_choice
*/

#include "my.h"

char *my_choice(char **tab)
{
    return tab[my_randint(0, my_two_len(tab))];
}
