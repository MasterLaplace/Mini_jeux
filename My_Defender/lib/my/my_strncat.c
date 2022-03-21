/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str n cat
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = my_strlen(dest);
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
