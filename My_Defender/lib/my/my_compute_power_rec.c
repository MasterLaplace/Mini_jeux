/*
** EPITECH PROJECT, 2021
** task04
** File description:
** my compute power rec
*/

int my_compute_power_rec(long nb, int p)
{
    if (p == 0)
        return 1;
    if (nb == 0 || p < 0)
        return 0;
    if (p >= 1)
        return nb * my_compute_power_rec(nb, p - 1);
    return 0;
}
