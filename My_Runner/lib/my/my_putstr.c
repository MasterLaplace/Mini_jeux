/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_putstr
*/

#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
