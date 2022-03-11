/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_putnbr
*/

void my_putchar(char c);

void my_putnbr(int nb)
{
    char *test = "0123456789";

    if (nb != 0) {
        my_putnbr(nb / 10);
        my_putchar(test[nb % 10]);
    }
}
