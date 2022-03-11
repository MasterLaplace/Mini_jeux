/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_getnbr
*/

int my_strlen(char *str);

int my_getnbr(char *str)
{
    int x = my_strlen(str) -1;
    int res = 0;

    for (int size = x; size >= 0; size--) {
        int exp = str[size] - '0';

        for (int i = size; i < x; i++)
            exp *= 10;
        res += exp;
    }
    return res;
}
