/*
** EPITECH PROJECT, 2021
** B-PSU-100-REN-1-1-myprintf-killian.bourhis
** File description:
** my_printf : checks
*/

#include <stdbool.h>
#include <stdarg.h>
#include "my.h"

bool check_doubleparam(char param1, char param2, va_list *args)
{
    if (param1 == 'h' && (param2 == 'd' || param2 == 'i')) {
        my_putnbr(va_arg(*args, int));
        return true;
    } else if (param1 == 'l' && (param2 == 'd' || param2 == 'i')) {
        my_putlong(va_arg(*args, long));
        return true;
    }
    return false;
}

void switch_checks(char param1, va_list *args)
{
    bool caps = false;

    if (param1 == 'd' || param1 == 'i')
        my_putnbr(va_arg(*args, int));
    if (param1 == 's')
        my_putstr(va_arg(*args, char *));
    if (param1 == 'c')
        my_putchar(va_arg(*args, int));
    if (param1 == 'b')
        my_convert_base(va_arg(*args, int), 2, false);
    if (param1 == 'x' || param1 == 'X') {
        caps = (param1 == 'x') ? false : true;
        my_convert_base(va_arg(*args, int), 16, caps);
    }
    if (param1 == 'o')
        my_convert_base(va_arg(*args, int), 8, false);
    if (param1 == '%')
        my_putchar('%');
}

int check_modulo(char const *format, int i, va_list *args)
{
    int cursor = i;

    if (format[i] != '%') {
        my_putchar(format[i]);
        return cursor;
    }
    switch_checks(format[i + 1], args);
    if (check_doubleparam(format[i + 1], format[i + 2], args))
        cursor++;
    cursor++;
    return cursor;
}
