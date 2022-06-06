/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_conv_bse
*/

#include "my.h"

bool checks(int *nb, int base)
{
    if (*nb == 0) {
        return true;
    } else if (*nb < 0) {
        my_putchar('-');
        *nb *= -1;
    }
    if (*nb > 0 && (base < 2 || base > 62))
        return true;
    return false;
}

void my_conv_bse(int nb, int base, bool caps)
{
    char *dig;
    int sign;

    if (caps)
        dig = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    else
        dig = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (checks(&nb, base))
        return;
    if (nb > 0) {
        my_conv_bse(nb / base, base, caps);
        my_putchar(dig[nb % base]);
    }
}
