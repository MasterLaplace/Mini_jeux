/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_set_limit
*/

#include "my.h"

bool my_set_limit(void)
{
    struct rlimit limit = {0};

    if (getrlimit(RLIMIT_STACK, &limit) == -1)
        return false;
    limit.rlim_cur = (size_t) 1024 * 1024 * (8 * 1000);
    if (setrlimit(RLIMIT_STACK, &limit) == -1)
        return false;
    return true;
}
