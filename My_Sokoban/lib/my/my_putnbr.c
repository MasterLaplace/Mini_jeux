/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** put a nbr
*/

#include "my.h"

void my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }

    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else
        my_putchar(nb + '0');
}
