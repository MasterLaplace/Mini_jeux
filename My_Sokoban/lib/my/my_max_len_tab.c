/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_max_len_tab
*/

int my_strlen(char *str);
int my_str_two_len(char **str);

int my_max_len_tab(char **str)
{
    int len_max = 0;
    int len = 0;

    for (int i = 0; i < my_str_two_len(str); i++) {
        len = my_strlen(str[i]);
        if (len > len_max)
            len_max += len;
    }

    return len_max;
}
