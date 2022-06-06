/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** operat1
*/

#include "my.h"
#include "my_printf.h"

void pchar(va_list list)
{
    my_putchar(va_arg(list, int));
}

void pstr(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void pstr_e(va_list list)
{
    my_put_error(va_arg(list, char *));
}

void pnbr(va_list list)
{
    my_putnbr(va_arg(list, int));
}

void pnbrl(va_list list)
{
    my_putnbrl(va_arg(list, long));

}
