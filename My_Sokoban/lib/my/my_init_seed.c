/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_init_seed
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_init_seed(void)
{
    int seed = sizeof(size_t);
    char *buf = malloc(seed * sizeof(char));
    int fd = open("/dev/urandom", O_RDONLY);

    if (fd == -1)
        return;
    read(fd, buf, seed);
    srand((*buf));
    close(fd);
}
