/*
** EPITECH PROJECT, 2021
** task07
** File description:
** my find prime sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int find = 0;
    for (long number = nb; !find && number < 2147483647; number++) {
        if (my_is_prime(number))
            find = number;
    }
    return find;
}
