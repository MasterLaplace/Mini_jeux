/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_revstr
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    char p;
    int i = my_strlen(str) - 1;

    for (int n = 0; n != i; n++) {
        p = str[n];
        str[n] = str[i];
        str[i] = p;
        i = i - 1;
    }
    return str;
}
