/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    for (int i = 1; i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return (0);
}
