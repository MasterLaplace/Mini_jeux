/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-antman-killian.bourhis
** File description:
** my_get_to_line
*/

int my_get_to_line(char *str, int len)
{
    int x = len - 1;
    int res = 0;

    for (int size = x; size >= 0; size--) {
        int exp = str[size] - '0';
        for (int i = size; i < x; i++) {
            exp *= 10;
        }
        res += exp;
    }
    return res;
}
