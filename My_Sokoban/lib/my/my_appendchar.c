/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_appendchar
*/

#include <stdlib.h>

int my_strlen(char *str);
char *my_strndup(char *str, int len);

char *my_appendchar(char *str, char c)
{
    int nbr = my_strlen(str);
    char *dest = malloc(sizeof(char) * (nbr + 1));

    dest = my_strndup(str, nbr);
    dest[nbr] = c;
    return dest;
}
