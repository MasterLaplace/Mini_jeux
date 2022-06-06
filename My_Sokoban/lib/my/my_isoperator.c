/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_isoperator
*/

#include "my.h"

bool my_isoperator(char c)
{
    if (c == '-' || c == '+' || c == '*' || c == '/' || c == '%')
        return true;
    return false;
}
