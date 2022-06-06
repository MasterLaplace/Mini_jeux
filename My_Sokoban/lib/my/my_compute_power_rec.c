/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(long nb, int p)
{
    if (p == 0)
        return (1);
    if (nb == 0 || p < 0)
        return (0);
    if (p >= 1)
        return nb * my_compute_power_rec(nb, p - 1);
    return (0);
}
