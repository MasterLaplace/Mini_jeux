/*
** EPITECH PROJECT, 2021
** task05
** File description:
** my compute square root
*/

int my_compute_square_root(int nb)
{
    for (int i = 1; i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
