/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_strcompare
*/

int my_strcompare(char *str1, char *str2)
{
    unsigned int i;

    for (i = 0; str1[i] == str2[i]; i++) {
        if ((str1[i] == '\0') || (str2[i] == '\0'))
            break;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    return -1;
}
