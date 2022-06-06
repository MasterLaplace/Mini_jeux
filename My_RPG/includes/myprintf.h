/*
** EPITECH PROJECT, 2021
** B-PSU-100-REN-1-1-bsmyprintf-killian.bourhis
** File description:
** myprintf header
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stdbool.h>
    #include <stdarg.h>

bool check_doubleparam(char param1, char param2, va_list *args);
void switch_checks(char param1, va_list *args);
int check_modulo(char const *format, int i, va_list *args);
int my_printf(const char *format, ...);
#endif/* !MY_PRINTF_H_ */
