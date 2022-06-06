/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_itoa
*/

#include "my.h"

static size_t my_int_len(int nb)
{
    int div = 1;
    size_t len = 0;

    if (nb >= 0 && nb < 10)
        return (1);
    for (; nb / div >= 1; len++)
        div *= 10;
    return len;
}

char *my_itoa(int number)
{
    size_t len = my_int_len(number);
    char *str = malloc(sizeof(char) * (len + 1));
    static size_t div = 10;
    static size_t end = 0;

    if (!str)
        return (NULL);

    for (; len > end; len--) {
        str[len - 1] = (number % div) + '0';
        number /= 10;
    }
    str[len] = '\0';
    return str;
}
