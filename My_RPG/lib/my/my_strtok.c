/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-killian.bourhis
** File description:
** my_strtok
*/

#include "my.h"

static char *str_delim(char **strtok, const char *delim, size_t token)
{
    char *ptr_copy = NULL;

    if (my_char_in_list((*strtok)[token], delim) != -1) {
        ptr_copy = (*strtok);
        (*strtok)[token] = '\0';
        *strtok += (token + 1);
    }
    return ptr_copy;
}

static char *str_end(char **strtok, size_t token, bool *is_end)
{
    char *ptr_copy = NULL;

    if (!(*strtok)[token]) {
        ptr_copy = *strtok;
        *strtok = NULL;
        *is_end = true;
    }
    return ptr_copy;
}

static bool pass_delim(char **strtok, const char *delim, bool *is_end)
{
    size_t token = 0;

    while (my_char_in_list((*strtok)[token], delim) != -1) {
        token++;
        if (!(*strtok)[token]) {
            *is_end = true;
            return true;
        }
    }
    *strtok += (token);
    return false;
}

static bool check_error(char **strtok, const char *delim, bool *is_end)
{
    if (*is_end)
        return true;
    if (!(*strtok)[0])
        return true;
    if (pass_delim(strtok, delim, is_end))
        return true;
    return false;
}

char *my_strtok(char *str, const char *delim)
{
    static char *strtok = NULL;
    static bool is_end = false;
    char *ptr_copy = NULL;

    if (str) {
        strtok = str;
        is_end = false;
    }
    if (check_error(&strtok, delim, &is_end))
        return NULL;
    for (size_t token = 0; true; token++) {
        if ((ptr_copy = str_end(&strtok, token, &is_end)))
            return ptr_copy;
        if ((ptr_copy = str_delim(&strtok, delim, token)))
            return ptr_copy;
    }
    return NULL;
}
