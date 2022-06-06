/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** operat2
*/

#include "my.h"
#include "my_printf.h"

void conv_bb(va_list list)
{
    my_conv_bse(va_arg(list, int), 2, false);
}

void conv_bo(va_list list)
{
    my_conv_bse(va_arg(list, int), 8, false);
}

void conv_bmx(va_list list)
{
    my_conv_bse(va_arg(list, int), 16, false);
}

void conv_bx(va_list list)
{
    my_conv_bse(va_arg(list, int), 16, true);
}
