/*
** EPITECH PROJECT, 2021
** str cat
** File description:
** on cat une str
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int e = 0;
    char *test = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    while (src[i] != '\0') {
        test[i] = src[i];
        i = i + 1;
    }
    while (dest[e] != '\0') {
        test[i] = dest[e];
        i = i + 1;
        e = e + 1;
    }
    test[i] = '\0';
    return test;
}
