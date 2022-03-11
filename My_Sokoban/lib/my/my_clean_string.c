/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_clean_string
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_appendchar(char * str, char c);

static char *verif_tab(char *str, char *dest, int i)
{
    if (str == NULL || i < 0)
        return NULL;

    if (str[i] == ' ' || str[i] == '\t') {
        if (str[i + 1] == ' ' || str[i + 1] == '\t');
        else
            return my_appendchar(dest, ' ');
    } else
        return my_appendchar(dest, str[i]);
    return dest;
}

static int verif_clean(char *str, int i)
{
    if (str == NULL || i < 0)
        return 0;

    if (str[i] == ' ' || str[i] == '\t') {
        if (str[i + 1] == ' ' || str[i + 1] == '\t');
        else
            return 1;
    } else
        return 1;
}

static int compt_clean(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && i == 0);
        else if (str[i] == ' ' && str[i + 1] == '\0');
        else
            nbr += verif_clean(str, i);
    }
    return nbr;
}

char *my_clean_string(char *str)
{
    char *dest = malloc(sizeof(char) * compt_clean(str));

    if (str == NULL)
        return NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && i == 0);
        else if (str[i] == ' ' && str[i + 1] == '\0');
        else
            dest = verif_tab(str, dest, i);
    }
    return dest;
}
