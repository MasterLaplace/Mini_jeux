/*
** EPITECH PROJECT, 2021
** B-PSU-100-REN-1-1-myprintf-guillaume.papineau
** File description:
** put a long nbr
*/

#include "my.h"

void my_putnbrl(long nb)
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
