/*
** EPITECH PROJECT, 2021
** task06
** File description:
** my is prime
*/

int my_is_prime(int nb)
{
    int nb_division = 0;
    for (int i = 2; i <= nb; i++) {
        if (nb % i == 0)
            nb_division++;
    }
    if (nb_division == 1)
        return 1;
    else
        return 0;
}
