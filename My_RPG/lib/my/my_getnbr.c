/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my get nbr
*/

#include "my.h"

size_t negative_compt(char const *str, int *negative)
{
    size_t i = 0;

    while (str[i] == '-' || str[i] == '+' && i < my_strlen(str)) {
        if (str[i] == '-')
            *negative = *negative + 1;
        i++;
    }

    return i;
}

int my_getnbr2(char const *str)
{
    int nbr = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr *10 + str[i] - 48;
        i++;
    }
    return nbr;
}

int my_getnbr(char const *str)
{
    int negative = 0;
    size_t k = 0;
    long nbr = 0;
    int end;
    size_t i = negative_compt(str, &negative);

    k = i;
    while (str[k] >= '0' && str[k] <= '9' && k < my_strlen(str))
        k++;
    end = k;
    for (k--; k >= i; k--) {
        if (my_compute_power_rec(10, end - k - 1) == 0)
            return 0;
        nbr += (str[k] - '0') * my_compute_power_rec(10, end - k - 1);
    }

    return ((negative % 2 == 0) ? nbr : -nbr);
}
