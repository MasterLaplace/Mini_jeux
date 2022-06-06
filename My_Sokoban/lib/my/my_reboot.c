/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_reboot
*/

#include "my.h"

void my_reboot(void)
{
    pid_t pid = -1;

    kill(pid, SIGKILL);
}
