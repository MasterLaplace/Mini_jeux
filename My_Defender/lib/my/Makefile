##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## permet de trier les fichiers
##

-include .env
export

PRINTF = my_printf/

SRC	=	$(PRINTF)my_printf.c 		\
		$(PRINTF)checks.c			\
		my_compute_square_root.c	\
		my_find_prime_sup.c     	\
		my_compute_power_rec.c  	\
		my_getnbr.c     			\
		my_isneg.c      			\
		my_is_prime.c  				\
		my_putchar.c    			\
		my_putnbr.c    				\
		my_putstr.c     			\
		my_perror.c     			\
		my_revstr.c     			\
		my_showmem.c    			\
		my_showstr.c    			\
		my_sort_int_array.c     	\
		my_strcat.c					\
		my_strcompare.c				\
		my_strcpy.c					\
		my_str_isalpha.c			\
		my_str_islower.c			\
		my_str_isnum.c				\
		my_str_isupper.c			\
		my_strlen.c					\
		my_strlowcase.c				\
		my_char_low_case.c			\
		my_strncat.c				\
		my_strncompare.c			\
		my_strncpy.c				\
		my_strstr.c					\
		my_strupcase.c				\
		my_swap.c					\
		my_strdup.c					\
		my_char_in_list.c			\
		my_putlong.c				\
		my_convert_base.c			\
		my_print_int_array.c		\
		my_realloc.c 				\
		my_strtok.c					\
		my_str_to_word_array.c		\
		my_init_seed.c				\
		my_randint.c 				\
		my_itoa.c					\

CFLAGS 	= -I ../../includes

OBJ		= $(SRC:.c=.o)

NAME 	= libmy.a

SRC_COUNT := $(words $(SRC))
NB = 0

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(ECHO)
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
	"Lib 'my' files sucessfully build. "$(DEFAULT))
	@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" CLEAN LIBMY "$(DEFAULT))

fclean: clean
	@$(RM) $(NAME)
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" FCLEAN LIBMY "$(DEFAULT))

re: fclean all

debug:	CFLAGS += -g
debug:	re

%.o: %.c
	@$(eval NB=$(shell echo $$(($(NB)+1))))
	@$(CC) -c -o $@ $^ $(CFLAGS) \
	&& python3 ../../build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all re clean fclean debug %.o
