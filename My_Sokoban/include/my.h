/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    char *my_appendchar(char * str, char c);
    char **my_append_two_char(char **tab, char *str);
    char *choice_str(char **tab);
    char *my_clean_string(char *str);
    int my_compt_char(char *str, char c);
    int my_compt_two_char(char **str, char c);
    int my_compt_word(char *str, char c);
    int my_getnbr(char *str);
    void my_init_seed(void);
    int my_max_len_tab(char **str);
    void my_putchar(char c);
    void my_put_two_str(char **str);
    void my_putnbr(int nb);
    void my_putstr(char *str);
    int my_randint(int min, int max);
    char *my_strcat(char *str, char *t);
    int my_strcompare(char *str1, char *str2);
    int my_strlen(char *str);
    int my_str_two_len(char **tab);
    char *my_strdup(char *str);
    char *my_strndup(char *str, int len);
    char **my_str_two_dup(char **str);
    char **my_str_word_array(char *str, char c);
    char *suppr(char *buf, int save);

#endif/* !MY_H_ */
