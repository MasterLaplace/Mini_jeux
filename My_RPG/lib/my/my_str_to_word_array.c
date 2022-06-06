/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-killian.bourhis
** File description:
** my_strtok
*/

#include "my.h"

static size_t count_words(char *str, const char *delim)
{
    char *str_dup = NULL;
    size_t count = 0;

    if (!str)
        return 0;
    str_dup = my_strdup(str);
    if (my_strtok(str_dup, delim))
        count++;
    while (my_strtok(NULL, delim))
        count++;
    free(str_dup);
    return count;
}

char **my_str_to_word_array(char *str, const char *delim)
{
    size_t len = count_words(str, delim);
    char **words = malloc(sizeof(char *) * (len + 1));
    char *str_dup;

    if (len == 0 || !words) {
        free(words);
        return NULL;
    }
    str_dup = my_strdup(str);
    words[0] = my_strdup(my_strtok(str_dup, delim));
    for (size_t i = 1; i < len; i++)
        words[i] = my_strdup(my_strtok(NULL, delim));
    words[len] = NULL;
    free(str_dup);
    return words;
}
