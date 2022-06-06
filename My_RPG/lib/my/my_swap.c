/*
** EPITECH PROJECT, 2021
** task01
** File description:
** my swap
*/

void my_swap(int *a, int *b)
{
    int tmp = *b;

    *b = *a;
    *a = tmp;
}
