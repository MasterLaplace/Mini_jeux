/*
** EPITECH PROJECT, 2021
** B-PSU-100-REN-1-1-myprintf-killian.bourhis
** File description:
** my_convert_base
*/

#include "my.h"
#include <stdbool.h>

bool checks(long *nb, int base)
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

void my_convert_base(long nb, int base, bool caps)
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
        my_convert_base(nb / base, base, caps);
        my_putchar(dig[nb % base]);
    }
}
