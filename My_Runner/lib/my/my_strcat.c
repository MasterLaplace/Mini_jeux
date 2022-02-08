/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_strcat
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *str, char *t)
{
    int i = 0;
    char *test = malloc(sizeof(char) * (my_strlen(str) + my_strlen(t)));

    while (t[i] != '\0') {
        test[i] = t[i];
        i = i + 1;
    }
    int e = 0;

    while (str[e] != '\0') {
        test[i] = str[e];
        i = i + 1;
        e = e + 1;
    }
    return test;
}
