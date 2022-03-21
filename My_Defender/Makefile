##
## EPITECH PROJECT, 2022
## MyDefender
## File description:
## Makefile
##

ECHO = /bin/echo -e
DEFAULT = "\033[00m"
BOLD = "\e[1m"
RED = "\e[31m"
GREEN = "\e[32m"
LIGHT_BLUE = "\e[94m"
WHITE = "\e[1;37m"

SRC_DIR	 = src/

SRC		=	$(SRC_DIR)game/game.c			 	\
			$(SRC_DIR)game/check_clocks.c		\
			$(SRC_DIR)game/check_range.c		\
			$(SRC_DIR)game/game_loading.c		\
			$(SRC_DIR)game/move_enemies.c		\
			$(SRC_DIR)game/spawn_enemy.c		\
			$(SRC_DIR)game/tower_generation.c		\
			$(SRC_DIR)game/wheel.c			\
			$(SRC_DIR)init/init_textures.c 	\
			$(SRC_DIR)init/init_stats.c 	 	\
			$(SRC_DIR)init/init_scenes.c 	 	\
			$(SRC_DIR)init/init_sounds.c 	 	\
			$(SRC_DIR)init/init_music.c 	 	\
			$(SRC_DIR)events/events.c 	 	\
			$(SRC_DIR)events/mouse.c 	 		\
			$(SRC_DIR)events/mouse_moved.c 	 	\
			$(SRC_DIR)events/mouse_pressed.c 	 	\
			$(SRC_DIR)events/mouse_released.c 	 	\
			$(SRC_DIR)events/keys.c 	 		\
			$(SRC_DIR)objects/create_button.c \
			$(SRC_DIR)objects/create_interface.c 	\
			$(SRC_DIR)objects/text.c 			\
			$(SRC_DIR)linked_lists/create_link.c 	\
			$(SRC_DIR)linked_lists/delete_link.c 	\
			$(SRC_DIR)linked_lists/draw_link.c 	\
			$(SRC_DIR)presets/home_scene.c 		\
			$(SRC_DIR)presets/map_scene.c 		\
			$(SRC_DIR)presets/no_map_scene.c 		\
			$(SRC_DIR)presets/game_scene.c 		\
			$(SRC_DIR)presets/win_scene.c 		\
			$(SRC_DIR)presets/lose_scene.c 		\
			$(SRC_DIR)presets/param_scene.c 		\
			$(SRC_DIR)presets/pause_scene.c 		\
			$(SRC_DIR)presets/textures.c 		\
			$(SRC_DIR)presets/scenes.c 		\
			$(SRC_DIR)presets/sounds.c 		\
			$(SRC_DIR)presets/enemy.c 		\
			$(SRC_DIR)presets/towers.c 		\
			$(SRC_DIR)presets/texts.c 		\
			$(SRC_DIR)help.c 					\
			$(SRC_DIR)destroy.c 				\
			$(SRC_DIR)sound.c 				\
			$(SRC_DIR)scenes/def_home_scene.c \
			$(SRC_DIR)scenes/def_map_scene.c 	\
			$(SRC_DIR)scenes/def_no_map_scene.c 	\
			$(SRC_DIR)scenes/def_game_scene.c 	\
			$(SRC_DIR)scenes/def_win_scene.c 	\
			$(SRC_DIR)scenes/def_lose_scene.c 	\
			$(SRC_DIR)scenes/def_param_scene.c 	\
			$(SRC_DIR)scenes/def_pause_scene.c 	\
			$(SRC_DIR)scenes/draw_scene.c 	\
			$(SRC_DIR)scenes/change_scene.c 	\
			$(SRC_DIR)scenes/def_background.c 	\
			$(SRC_DIR)callback/callback_home_button.c 	\
			$(SRC_DIR)callback/callback_map_button.c 		\
			$(SRC_DIR)callback/callback_level_button.c 	\
			$(SRC_DIR)callback/callback_sound_button.c 	\
			$(SRC_DIR)callback/callback_music_button.c 	\
			$(SRC_DIR)callback/callback_exit_button.c 	\
			$(SRC_DIR)callback/callback_param_button.c 	\
			$(SRC_DIR)callback/callback_pause_button.c 	\
			$(SRC_DIR)callback/callback_return_button.c 	\
			$(SRC_DIR)callback/transaction.c 	\
			$(SRC_DIR)callback/tower/callback_tower_button.c 	\
			$(SRC_DIR)callback/tower/callback_archer_button.c 	\
			$(SRC_DIR)callback/tower/callback_stone_button.c 	\
			$(SRC_DIR)callback/tower/callback_magic_button.c 	\
			$(SRC_DIR)callback/tower/callback_crossbow_button.c 	\
			$(SRC_DIR)update/update_enemy.c 	\
			$(SRC_DIR)update/update_game_scene.c 	\
			$(SRC_DIR)update/update_ui_button.c 	\
			$(SRC_DIR)update/update_tower_button.c 		\
			$(SRC_DIR)update/update_sound_button.c 		\
			$(SRC_DIR)update/update_music_button.c 		\
			$(SRC_DIR)update/update_tower.c 	\
			$(SRC_DIR)destroy/destroy_enemies.c 	\
			$(SRC_DIR)destroy/destroy_towers.c 	\
			assets/maps/maps.c 			\

CC		=	gcc

FLAGS		=	-Wall -Wextra

MAIN		=	$(SRC_DIR)main.c

OBJ		=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME		=	my_defender

INCLUDE 	=	./includes

LIB_FOLDER	=	./lib/my

LIB_NAME	=	my

LDFLAGS		=	-L $(LIB_FOLDER) -l $(LIB_NAME) -lm

CFLAGS		=	-Wall -Wextra -I $(INCLUDE)

CSFML_F	=	-l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

SRC_COUNT := $(words $(SRC))
NB = 0

$(NAME):	$(OBJ)
		@make -C $(LIB_FOLDER)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJ) ${LDFLAGS} ${CSFML_F} \
		&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
		|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)

all:	$(NAME)

clean:
		@rm -f $(OBJ)
		@rm -f $(OBJ_TESTS)
		@make -C $(LIB_FOLDER) clean
		@rm -f *~
		@rm -f *#
		@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" CLEAN "$(DEFAULT))

fclean:	clean
		@rm -f $(NAME)
		@rm -f $(TESTS_NAME)
		@make -C $(LIB_FOLDER) fclean
		@rm -f *.gcda
		@rm -f *.gcno
		@rm -f vgcore.*
		@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" FCLEAN "$(DEFAULT))

re: fclean all

debug:	CFLAGS += -g
debug: clean $(OBJ)
		@make debug -C lib/my/
		@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) ${CSFML_F}

%.o: %.c
		@$(eval NB=$(shell echo $$(($(NB)+1))))
		@gcc -c -o $@ $^ $(CFLAGS) \
		&& python build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all re clean fclean debug build_lib tests_run %.o
.SILENT: all re clean fclean debug build_lib %.o
