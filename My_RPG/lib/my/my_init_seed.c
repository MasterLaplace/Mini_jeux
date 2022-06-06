/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** my_init_seed
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

bool my_init_seed(void)
{
    int seed = sizeof(size_t);
    char *buf = malloc(seed * sizeof(char));
    int fd = open("/dev/urandom", O_RDONLY);

    if (fd == -1 || !buf)
        return false;
    read(fd, buf, seed);
    srand((*buf));
    free(buf);
    close(fd);
    return true;
}
