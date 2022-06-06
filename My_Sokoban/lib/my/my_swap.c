/*
** EPITECH PROJECT, 2022
** B-PSU-101-REN-1-1-minishell1-guillaume.papineau
** File description:
** my_swap
*/

void my_swap(int *x, int *y)
{
    int tmp = *y;

    *y = *x;
    *x = tmp;
}
