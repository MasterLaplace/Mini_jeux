/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my putstr
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
