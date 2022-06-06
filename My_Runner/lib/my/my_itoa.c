/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_itoa
*/

#include <stdlib.h>
#include <stdio.h>

int my_int_len(int nb)
{
    int div = 1;
    int len = 0;

    if (nb >= 0 && nb < 10)
        return (1);
    while (nb / div >= 1) {
        len++;
        div *= 10;
    }
    return len;
}

char *my_itoa(int nbr)
{
    int len = my_int_len(nbr);
    char *str = malloc(sizeof(char) * (len + 1));

    if (!str || len == 0)
        return (NULL);
    str[len] = '\0';
    while (len > 0) {
        str[len - 1] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return str;
}
