/*
** EPITECH PROJECT, 2022
** Mini_jeux
** File description:
** my_memset
*/

#include <stdlib.h>

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;

    while (n--)
        *p++ = (unsigned char) c;
    return s;
}
