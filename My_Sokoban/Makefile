##
## EPITECH PROJECT, 2022
## B-PSU-210-REN-2-1-minishell2-guillaume.papineau
## File description:
## Makefile
##

-include .env
export

SRC_DIR = src/

SRC =	$(SRC_DIR)load_map.c		\
		$(SRC_DIR)help.c			\
		$(SRC_DIR)detect_element.c	\
		$(SRC_DIR)event.c			\
		$(SRC_DIR)collision.c		\
		$(SRC_DIR)cond_lose.c 		\

SRC_MAIN = $(SRC_DIR)core.c

OBJ =	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

NAME =	my_sokoban

INCLUDE = -I ./includes

LIB = ./lib/my

LIB_ALL = -L $(LIB) -l my

CURSE = -lncurses

CFLAGS =	$(FLAGS) -W $(INCLUDE)

SRC_COUNT := $(words $(SRC))
NB = 0

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C $(LIB) $(NO_PRINT)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB_ALL) $(CURSE) \
	&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)

clean:
	@$(RM) $(OBJ)
	@$(RM) *~
	@$(RM) *#
	@cd $(LIB) && make clean $(NO_PRINT)
	@$(RM) *~
	@$(RM) *#
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" CLEAN "$(DEFAULT))

fclean: clean
	@$(RM) $(NAME)
	@cd $(LIB) && make fclean $(NO_PRINT)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@$(RM) vgcore.*
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" FCLEAN "$(DEFAULT))

re: fclean all

debug:	CFLAGS += -g
debug:	clean $(OBJ)
	@make debug -C $(LIB) $(NO_PRINT)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB_ALL)

%.o: %.c
	@$(eval NB=$(shell echo $$(($(NB)+1))))
	@$(CC) -c -o $@ $^ $(CFLAGS) \
	&& python build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all re clean fclean debug build_lib %.o
.SILENT: all re clean fclean debug build_lib %.o
