/*
** EPITECH PROJECT, 2021
** B-CPE-210-REN-2-1-solostumper02-killian.bourhis
** File description:
** my putstr
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_perror(char const *str)
{
    write(2, str, my_strlen(str));
}
