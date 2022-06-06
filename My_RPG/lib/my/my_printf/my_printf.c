/*
** EPITECH PROJECT, 2021
** B-PSU-100-REN-1-1-bsmyprintf-killian.bourhis
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"
#include "myprintf.h"

int my_printf(const char *format, ...)
{
    va_list args;

    va_start(args, 0);
    for (size_t i = 0; i < my_strlen(format); i++)
        i = check_modulo(format, i, &args);
    return 1;
}
