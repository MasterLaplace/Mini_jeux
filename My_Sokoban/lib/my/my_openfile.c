/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_openfile
*/

#include "my.h"

int my_open_file(char const *filepath, int oflag)
{
    if (!filepath)
        return (-1);

    int fd = open(filepath, oflag);

    if (fd == -1)
        return (-1);
    return fd;
}
