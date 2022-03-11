##
## EPITECH PROJECT, 2022
## B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
## File description:
## Makefile
##

SRC =	load_map.c	\
		help.c		\
		detect_element.c	\
		event.c		\
		collision.c	\
		cond_lose.c

SRC_MAIN = main.c

OBJ =	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

NAME =	my_sokoban

INCLUDE = ./include

FLAGS = -Wall -Wextra -g3

CFLAGS =	$(FLAGS) -W -I $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C ./lib/my
	@gcc $(FLAGS) -o $(NAME) $(OBJ) -L ./lib/my -l my -lncurses  \
	&& /bin/echo -e "\e[1m" "\e[32m" "☻ GOOD" "\033[00m" \
	|| (/bin/echo -e "\e[1m" "\e[31m" "Ø ERROR" "\033[00m" && exit 1)

clean:
	@rm -f $(OBJ)
	@rm -f *~
	@rm -f *#
	@cd ./lib/my && make clean
	@rm -f *~
	@rm -f *#

fclean: clean
	@rm -f $(NAME)
	@cd ./lib/my && make fclean
	@rm -f vgcore.*

re: fclean all
