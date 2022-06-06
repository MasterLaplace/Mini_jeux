/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_clean_string
*/

#include "my.h"

static char *verif_tab(char *str, char *dest, size_t i)
{
    if (!str)
        return (NULL);

    if (str[i] == ' ' || str[i] == '\t') {
        if (str[i + 1] == ' ' || str[i + 1] == '\t');
        else
            return my_append(dest, ' ');
    } else
        return my_append(dest, str[i]);
    return dest;
}

static int verif_clean(char *str, int i)
{
    if (!str)
        return (0);

    if (str[i] == ' ' || str[i] == '\t') {
        if (str[i + 1] == ' ' || str[i + 1] == '\t')
            return (0);
        else
            return (1);
    } else
        return (1);
}

static size_t count_clean(char *str)
{
    size_t nbr = 0;

    if (!str)
        return nbr;

    for (int i = 0; str[i]; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && i == 0) {
            str = my_suppr(str, i + 1);
            i = -1;
        } else if (str[i] == ' ' && !str[i + 1]);
        else
            nbr += verif_clean(str, i);
    }
    return nbr;
}

char *my_clean_string(char *str)
{
    char *dest = calloc(count_clean(str), sizeof(char));

    if (!str || !dest)
        return (NULL);

    for (int i = 0; str[i]; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && i == 0) {
            str = my_suppr(str, i + 1);
            i = -1;
        } else if (str[i] == ' ' && !str[i + 1]);
        else
            dest = verif_tab(str, dest, i);
    }
    return dest;
}
