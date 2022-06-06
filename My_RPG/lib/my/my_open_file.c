/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** my_open_file
*/

#include "my.h"
#include <fcntl.h>

int my_open_file(char const *filepath, int oflag)
{
    if (!filepath)
        return (-1);

    int fd = open(filepath, oflag);

    if (fd == -1)
        return (-1);
    return fd;
}
