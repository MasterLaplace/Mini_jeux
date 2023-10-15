##
## EPITECH PROJECT, 2021
## B-MUL-100-REN-1-1-myrunner-guillaume.papineau
## File description:
## Makefile
##

-include .env
export

SRC_DIR = src/

SRC =	$(SRC_DIR)sprite.c			\
		$(SRC_DIR)sprite_part2.c	\
		$(SRC_DIR)collision.c		\
		$(SRC_DIR)event.c			\
		$(SRC_DIR)game.c			\
		$(SRC_DIR)menu.c			\
		$(SRC_DIR)head.c			\
		$(SRC_DIR)initialisation.c	\
		$(SRC_DIR)destroy_obj.c		\

MAIN		=	$(SRC_DIR)core.c

OBJ			=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME		=	my_runner

INCLUDE 	=	./include

LIB_FOLDER	=	./lib/my

LIB_NAME	=	my

LDFLAGS		=	-L $(LIB_FOLDER) -l $(LIB_NAME) -lm

CFLAGS		=	$(FLAGS) -I $(INCLUDE)

CSFML_F	=	-l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

SRC_COUNT := $(words $(SRC))
NB = 0

$(NAME):	$(OBJ)
	@make -C $(LIB_FOLDER) $(NO_PRINT)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) ${LDFLAGS} ${CSFML_F} \
	&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)

all:	$(NAME)

clean:
	@$(RM) $(OBJ)
	@$(RM) $(OBJ_TESTS)
	@make -C $(LIB_FOLDER) clean $(NO_PRINT)
	@$(RM) *~
	@$(RM) *#
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" CLEAN "$(DEFAULT))

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) $(TESTS_NAME)
	@make -C $(LIB_FOLDER) fclean $(NO_PRINT)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@$(RM) vgcore.*
	@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" FCLEAN "$(DEFAULT))

re: fclean all

debug:	CFLAGS += -g
debug: clean $(OBJ)
	@make debug -C lib/my/ $(NO_PRINT)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) ${CSFML_F}

%.o: %.c
	@$(eval NB=$(shell echo $$(($(NB)+1))))
	@$(CC) -c -o $@ $^ $(CFLAGS) \
	&& python3 build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all re clean fclean debug build_lib %.o
.SILENT: all re clean fclean debug build_lib %.o
