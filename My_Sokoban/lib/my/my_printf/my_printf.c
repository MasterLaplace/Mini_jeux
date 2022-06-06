/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_printf
*/

#include "my.h"
#include "my_printf.h"

static const all_print test[] = {
    {'c', &pchar},
    {'s', &pstr},
    {'e', &pstr_e},
    {'d', &pnbr},
    {'h', &pnbr},
    {'l', &pnbrl},
    {'b', &conv_bb},
    {'o', &conv_bo},
    {'x', &conv_bx},
    {'X', &conv_bmx},
    {'u', &pnbr},
    {'\0', NULL}};

static int next(char *str, int i, va_list list)
{
    for (size_t j = 0; test[j].flag; j++) {
        if (str[i + 1] == test[j].flag)
            test[j].redirect(list);
    }
    return (0);
}

int my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);

    for (size_t i = 0; str[i]; i++) {
        if (str[i] == '%') {
            next(str, i, list);
            i += 2;
        }
        my_putchar(str[i]);
    }
    va_end(list);
    return (84);
}
