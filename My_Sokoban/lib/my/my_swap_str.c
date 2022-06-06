/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my_swap_str
*/

void my_swap_str(char **str1, char **str2)
{
    char *tmp = *str1;

    *str1 = *str2;
    *str2 = tmp;
}
