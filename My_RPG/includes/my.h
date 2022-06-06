/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>

//* It prints a character.
void my_putchar(char c);

//* It prints a string.
void my_putstr(char const *str);

//* It prints the given string and the error message.
void my_perror(char const *str);

//* It prints N if the integer is negative and P if it is positive.
bool my_isneg(int nb);

//* It prints a long number.
void my_putnbr(long nb);

//* It swaps the values of the two given integers.
void my_swap(int *a, int *b);

//* It returns the length of the given string.
size_t my_strlen(char const *str);

//* It converts a string to an integer.
int my_getnbr(char const *str);

//* It Martin getnbr, just for my function because le leur is pas marching
int my_getnbr2(char const *str);

//* It sorts the given array of integers.
void my_sort_int_array(int *tab, int size);

//* It returns the result of nb to the power of power.
int my_compute_power_rec(int nb, int power);

//* It returns the square root of the given number.
int my_compute_square_root(int nb);

//* It returns 1 if the given number is prime, 0 otherwise.
bool my_is_prime(int nb);

//* It returns the smallest prime number greater than the given number.
int my_find_prime_sup(int nb);

//* It copies the string src to dest.
char *my_strcpy(char *dest, char const *src);

//* It copies the first n characters of src to dest.
char *my_strncpy(char *dest, char const *src, int n);

//* It reverses the given string.
char *my_revstr(char *str);

//* It returns a pointer to the first occurrence of the string to_find
//in the string str.
char *my_strstr(char *str, char const *to_find);

//* It compares two strings and returns 0 if they are equal,
//1 if s1 is greater than s2 and -1 if s1 is less than s2.
int my_strcompare(char const *s1, char const *s2);

//* It compares two strings and returns 0 if they are equal,
//1 if s1 is greater than s2 and -1 if s1 is less than s2.
int my_strncompare(char const *s1, char const *s2, int n);

//* It converts all the characters of a string to upper case.
char *my_strupcase(char *str);

//* It converts all the characters of a string to lower case.
char *my_strlowcase(char *str);

//* It capitalizes the first letter of each word in a string.
char *my_strcapitalize(char *str);

//* It returns 1 if the string is a number, 0 otherwise.
bool my_str_isalpha(char const *str);

//* It returns 1 if the string is a number, 0 otherwise.
bool my_str_isnum(char const *str);

//* It returns 1 if the string is in lower case, 0 otherwise.
bool my_str_islower(char const *str);

//* It returns 1 if the string is in upper case, 0 otherwise.
bool my_str_isupper(char const *str);

//* It returns 1 if the string is printable, 0 otherwise.
bool my_str_isprintable(char const *str);

//* It prints the memory of the given string.
int my_showstr(char const *str);

//* It prints the memory of the given string.
int my_showmem(char const *str, int size);

//* It concatenates the string src to the string dest.
char *my_strcat(char const *dest, char const *src);

//* It concatenates the first n characters of src to dest.
char *my_strncat(char *dest, char const *src, size_t nb);

//* It converts a number to a string.
char *my_itoa(int nbr);

//* It converts a negative number to a string.
char *my_neg_itoa(int nbr);

//* It duplicates a string.
char *my_strdup(char const *src);

//* It returns the number of times a character is in a string.
size_t my_char_in_list(char caracter, const char *list);

//* It prints a long number.
int my_putlong(long nb);

//* It converts a number to a base.
void my_convert_base(long nb, int base, bool caps);

//* A function that prints a string with a format.
int my_printf(const char *format, ...);

//* It splits a string into an array of strings.
char *my_strtok(char *str, const char *delim);

//* It splits a string into an array of strings.
char **my_str_to_word_array(char *str, const char *delim);

//* It returns the lower case of the given character.
char my_char_low_case(char c);

//* It initializes the seed for the random number generator.
bool my_init_seed(void);

//* It returns a random number between min and max.
int my_randint(int min, int max);

//* It reallocates the given pointer to the new size.
void *my_realloc(void *ptr, size_t size, size_t new_size);

//* It opens a file and returns a pointer to the file.
int my_open_file(char const *filepath, int oflag);

//* It returns the length of the given array of strings.
size_t my_len_tab(char **tab);

//* It frees the given array of strings.
void my_free_tab(char **tab);

//* It prints the given array of strings.
void my_two_put(char **tab);
#endif/* MY_H_*/
