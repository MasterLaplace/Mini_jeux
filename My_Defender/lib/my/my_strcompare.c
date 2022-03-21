/*
** EPITECH PROJECT, 2021
** task06
** File description:
** my strcompare
*/

int my_strlen(char const *a);

int my_strcompare(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i])
        i++;

    return s1[i] - s2[i];
}
