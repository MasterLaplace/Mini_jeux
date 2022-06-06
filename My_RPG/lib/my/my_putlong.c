/*
** EPITECH PROJECT, 2021
** task07
** File description:
** my put nbr
*/

#include "my.h"

int my_putlong(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }

    if (nb > 9) {
        my_putlong(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb + '0');
    }
    return 0;
}
