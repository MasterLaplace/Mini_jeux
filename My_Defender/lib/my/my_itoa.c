/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-killian.bourhis
** File description:
** my_itoa
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int my_int_len(int nb)
{
    int div = 1;
    int len = 0;

    if (nb >= 0 && nb < 10)
        return 1;
    while (nb / div >= 1) {
        len++;
        div *= 10;
    }
    return len;
}

char *my_itoa(int number)
{
    int len = my_int_len(number);
    char *str = malloc(sizeof(char) * (len + 1));
    int div = 10;
    int end = 0;

    if (str == NULL || len == 0)
        return NULL;
    str[len] = '\0';
    while (len > end) {
        str[len - 1] = (number % div) + '0';
        number /= 10;
        len--;
    }
    return str;
}
