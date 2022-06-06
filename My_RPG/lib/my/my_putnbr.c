/*
** EPITECH PROJECT, 2021
** task07
** File description:
** my put nbr
*/

#include "my.h"

void my_putnbr(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }

    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb + '0');
    }
}
