##
## EPITECH PROJECT, 2021
## B-MUL-100-REN-1-1-myrunner-guillaume.papineau
## File description:
## Makefile
##

SRC =	lib/my/my_putstr.c \
		lib/my/my_itoa.c   \
		lib/my/my_revstr.c \
		lib/my/my_strcat.c \
		lib/my/my_strlen.c \
		lib/my/my_strdup.c \
		sprite.c		\
		sprite_part2.c	\
		collision.c		\
		event.c			\
		game.c			\
		menu.c			\
		head.c			\
		initialisation.c\
		destroy_obj.c	\
		runner.c		\

OBJ =	$(SRC:.c=.o)

NAME = a.out

CFLAGS =	-Wall -Wextra -W -g3

$(NAME):	$(OBJ)
	gcc -o my_runner $(OBJ) $(CFLAGS) -I ./include -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

all:	$(NAME)

clean:
	rm -f $(OBJ)

re: clean all