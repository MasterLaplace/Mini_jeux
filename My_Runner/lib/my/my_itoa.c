/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_itoa
*/
#include <stdlib.h>
#include <stdio.h>

char *my_revstr(char *str);

int my_int_len(int nb)
{
    int div = 1;
    int len = 0;

    while ((nb / div) >= 1) {
        len++;
        div *= 10;
    }
    return len;
}

char *my_itoa(int nb)
{
    int len = my_int_len(nb);
    char *str = malloc(sizeof(char) * len);
    int div = 10;

    if (str == NULL || len == 0)
        return NULL;

    while (len > 0) {
        str[len - 1] = (nb % div) + '0';
        nb /= 10;
        len--;
    }
    return str;
}
