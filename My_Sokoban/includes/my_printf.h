/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_printf
*/

#ifndef PRINT_H_
    #define PRINT_H_
    #include <stdarg.h>
    #include <stddef.h>

typedef struct my_printall {
    char flag;
    void (*redirect)(va_list list);
} all_print;

//* It's a function that prints the string s.
int my_printf(char *s, ...);

//* It's a function that points to putchar.
void pchar(va_list list);

//* It's a function that points to putstr.
void pstr(va_list list);

//* It's a function that points to put_error.
void pstr_e(va_list list);

// It's a function that points to putnbr.
void pnbr(va_list list);

// It's a function that points to putnbrl.
void pnbrl(va_list list);

// It's a function that points to my_conv_bse in base 2.
void conv_bb(va_list list);

// It's a function that points to my_conv_bse in base 8.
void conv_bo(va_list list);

// It's a function that points to my_conv_bse in base 16.
void conv_bmx(va_list list);

// It's a function that points to my_conv_bse in base 16 uppercase.
void conv_bx(va_list list);
#endif/* !PRINT_H_ */
