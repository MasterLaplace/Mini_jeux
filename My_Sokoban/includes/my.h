/*
** EPITECH PROJECT, 2022
** B-PSU-210-REN-2-1-minishell2-guillaume.papineau
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <sys/resource.h>
    #include <signal.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>

//* It's adding a char to a string.
char *my_append(char const *str, char c);

//* It's a function that return a string.
char *my_choice(char **tab);

//* It's removing the '\n' at the end of the string.
char *my_clean_string(char *str);

//* It returns the result of nb to the power of power.
int my_compute_power_rec(long nb, int p);

//* It returns the square root of the given number.
int my_compute_square_root(int nb);

//* It's counting the number of char c in the string str.
size_t my_count_char(char const *str, char c);

//* It's counting the number of word in the string str.
size_t my_count_word(char const *str, char c);

//* It's converting a number in a base.
void my_conv_bse(int nb, int bse, bool);

//* It's cutting the string str with the string params.
char *my_cut(char *str, size_t nb1, size_t nb2);

//* It's converting a string in a number.
int my_getnbr(char const *str);

//* It's returning the index of the char c in the string str.
int my_index_char(const char *str, char c);

//* It's comparing two string.
size_t my_ind_strncmp(char const *, char const *, size_t ind, size_t len);

//* It's copying the string str in a new string.
char *my_ind_strndup(char const *str, size_t index, size_t len);

//* It's initializing the seed for the rand function.
bool my_init_seed(void);

//* It returns 1 if the given number is prime, 0 otherwise.
bool my_is_prime(int nb);

//* It's checking if the string str is a letter.
bool my_isalpha(char const *str);

//* It's checking if the string str is in lowercase.
bool my_islower(char const *str);

//* It's checking if the number nbr is negative.
bool my_isneg(int nbr);

//* It's checking if the string str is a number.
bool my_isnum(char const *str);

//* It's checking if the string str is a letter or a number.
bool my_isnumalpha(char const *str);

//* It's checking if the char c is an operator.
bool my_isoperator(char c);

//* It's checking if the array of number tab is sorted.
bool my_issort(int *tab, size_t size);

//* It's checking if the string str is in uppercase.
bool my_isupper(char const *str);

//* It's converting a number in a string.
char *my_itoa(int nbr);

//* It's counting the number of char in the longest string of the array.
size_t my_max_len_tab(char **tab);

//* It's opening a file.
int my_open_file(char const *filepath, int oflag);

//* It's printing the string str on the standard error output.
void my_put_error(char const *str);

//* It's printing a char on the standard output.
void my_putchar(int c);

// It's printing a number on the standard output.
void my_putnbr(int nb);

// It's printing a number on the standard output with a line break.
void my_putnbrl(long nb);

//* It's printing a string on the standard output.
void my_putstr(char const *str);

//* It's generating a random number between min and max.
int my_randint(int min, int max);

//* It's reallocating the string str with the size size.
char *my_realloc(char *str, size_t size);

//* It's rebooting the system.
void my_reboot(void);

//* It's reversing the string str.
char *my_revstr(char *str);

//* It's setting the limit of the number of command that can be executed.
bool my_set_limit(void);

//* It's sorting the array of number tab.
void my_sort_int_array(int *tab, size_t size);

//* It's converting the first letter of each word in uppercase.
char *my_strcapitalize(char *str);

//* It's adding a string to another string.
char *my_strcat(char const *dest, char const *src);

//* It's comparing two string.
size_t my_strcmp(char const *str1, char const *str2);

//* It's copying the string src in the string dest.
char *my_strcopy(char const *src, char *dest);

//* It's copying the string str in a new string.
char *my_strdup(char const *str);

//* It's counting the number of char in the string str.
size_t my_strlen(char const *str);

//* It's converting all the uppercase letter of the string str in lowercase.
char *my_strlowcase(char *str);

//* It's adding a string to another string.
char *my_strncat(char const *dest, char const *src, size_t len);

//* It's comparing two string.
size_t my_strncmp(char const *str1, char const *str2, size_t len);

//* It's copying the string src in the string dest.
char *my_strncopy(char const *src, char *dest, size_t len);

//* It's copying the string str in a new string.
char *my_strndup(char const *str, size_t len);

//* It's converting all the lowercase letter of the string str in uppercase.
char *my_strupcase(char *str);

//* It's creating an array of string from a string.
char **my_str_word_array(char *str, char c);

//* It's removing the '\n' at the end of the string.
char *my_suppr(char *str, size_t save);

//* It's swapping the value of str1 and str2.
void my_swap_str(char **str1, char **str2);

//* It's swapping the value of x and y.
void my_swap(int *x, int *y);

//* It's adding a string to an array of string.
char **my_two_append(char **tab, char const *str);

//* It's counting the number of char c in the array of string tab.
size_t my_count_two_char(char **tab, char c);

//* It's counting the number of string in the array of string tab.
size_t my_two_count_str(char **tab, char const *str);

//* It's cutting the array of string tab with the string params.
char **my_two_cut(char **tab, size_t nb1, size_t nb2);

//* It's copying the array of string str in a new array of string.
char **my_two_dup(char **tab);

//* It's freeing the array of string str.
void my_two_free(char **tab);

//* It's counting the number of string in the array of string tab.
size_t my_two_len(char **tab);

//* It's printing the array of string str on the standard output.
void my_two_put(char **tab);

//* It's printing an array of number on the standard output.
void my_two_putnbr(int *tab, size_t len);

//* It's removing the '\n' at the end of the string.
char **my_two_suppr(char **tab, size_t save);
#endif/* !MY_H_ */
