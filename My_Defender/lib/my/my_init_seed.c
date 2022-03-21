/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** my_init_seed
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void my_init_seed(void)
{
    int seed = 4;
    char *buf = malloc(seed * sizeof(char));
    int fd = open("/dev/urandom", O_RDONLY);

    if (fd == -1 || buf == NULL)
        return;
    read(fd, buf, seed);
    srand((*buf));
    free(buf);
    close(fd);
}
