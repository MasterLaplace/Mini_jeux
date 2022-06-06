/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_is_prime
*/

#include "my.h"

bool my_is_prime(int nb)
{
    size_t nb_division = 0;

    for (int i = 2; i <= nb; i++) {
        if (nb % i == 0)
            nb_division++;
    }
    if (nb_division == 1)
        return true;
    else
        return false;
}
