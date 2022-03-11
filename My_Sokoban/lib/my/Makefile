##
## EPITECH PROJECT, 2022
## B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
## File description:
## Makefile
##

SRC =	my_appendchar.c		\
		my_append_two_char.c\
		my_choice.c			\
		my_clean_string.c	\
		my_compt_char.c		\
		my_compt_two_char.c	\
		my_compt_word.c		\
		my_getnbr.c			\
		my_init_seed.c		\
		my_max_len_tab.c	\
		my_putchar.c		\
		my_putstr.c			\
		my_putnbr.c			\
		my_put_two_str.c	\
		my_randint.c		\
		my_strcat.c			\
		my_strcompare.c  	\
		my_strdup.c			\
		my_strndup.c		\
		my_str_two_dup.c	\
		my_stwa.c			\
		my_strlen.c			\
		my_str_two_len.c	\
		my_suppr.c			\

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

CFLAGS =	-I ../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
