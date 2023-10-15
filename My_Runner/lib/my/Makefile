##
## EPITECH PROJECT, 2022
## Mini_jeux
## File description:
## Makefile
##

-include .env
export

SRC =	my_putstr.c \
		my_itoa.c   \
		my_memset.c \
		my_revstr.c \
		my_strcat.c \
		my_strlen.c \
		my_strdup.c \

CFLAGS 	= -I ../../include

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
