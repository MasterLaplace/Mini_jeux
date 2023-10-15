##
## EPITECH PROJECT, 2022
## MyDefender
## File description:
## Makefile
##

-include .env
export

GAME = game/

INIT = init/

EVENT = events/

OBJECT = objects/

LINK = linked_lists/

SRC_DIR	 = src/

PRESET = presets/

SCENE = scenes/

CALLBACK = callback/

UPDATE = update/

DESTROY = destroy/

SRC		=	$(SRC_DIR)$(GAME)game.c			 		\
			$(SRC_DIR)$(GAME)check_clocks.c			\
			$(SRC_DIR)$(GAME)check_range.c			\
			$(SRC_DIR)$(GAME)game_loading.c			\
			$(SRC_DIR)$(GAME)move_enemies.c			\
			$(SRC_DIR)$(GAME)spawn_enemy.c			\
			$(SRC_DIR)$(GAME)tower_generation.c		\
			$(SRC_DIR)$(GAME)wheel.c				\
			$(SRC_DIR)$(INIT)init_textures.c 		\
			$(SRC_DIR)$(INIT)init_stats.c 	 		\
			$(SRC_DIR)$(INIT)init_scenes.c 	 		\
			$(SRC_DIR)$(INIT)init_sounds.c 	 		\
			$(SRC_DIR)$(INIT)init_music.c 	 		\
			$(SRC_DIR)$(EVENT)events.c 	 			\
			$(SRC_DIR)$(EVENT)mouse.c 	 			\
			$(SRC_DIR)$(EVENT)mouse_moved.c 	 	\
			$(SRC_DIR)$(EVENT)mouse_pressed.c 	 	\
			$(SRC_DIR)$(EVENT)mouse_released.c 	 	\
			$(SRC_DIR)$(EVENT)keys.c 	 			\
			$(SRC_DIR)$(OBJECT)create_button.c 		\
			$(SRC_DIR)$(OBJECT)create_interface.c 	\
			$(SRC_DIR)$(OBJECT)text.c 				\
			$(SRC_DIR)$(LINK)create_link.c 			\
			$(SRC_DIR)$(LINK)delete_link.c 			\
			$(SRC_DIR)$(LINK)draw_link.c 			\
			$(SRC_DIR)$(PRESET)home_scene.c 		\
			$(SRC_DIR)$(PRESET)map_scene.c 			\
			$(SRC_DIR)$(PRESET)no_map_scene.c 		\
			$(SRC_DIR)$(PRESET)game_scene.c 		\
			$(SRC_DIR)$(PRESET)win_scene.c 			\
			$(SRC_DIR)$(PRESET)lose_scene.c 		\
			$(SRC_DIR)$(PRESET)param_scene.c 		\
			$(SRC_DIR)$(PRESET)pause_scene.c 		\
			$(SRC_DIR)$(PRESET)textures.c 			\
			$(SRC_DIR)$(PRESET)scenes.c 			\
			$(SRC_DIR)$(PRESET)sounds.c 			\
			$(SRC_DIR)$(PRESET)enemy.c 				\
			$(SRC_DIR)$(PRESET)towers.c 			\
			$(SRC_DIR)$(PRESET)texts.c 				\
			$(SRC_DIR)help.c 				\
			$(SRC_DIR)destroy.c 			\
			$(SRC_DIR)sound.c 				\
			$(SRC_DIR)$(SCENE)def_home_scene.c 		\
			$(SRC_DIR)$(SCENE)def_map_scene.c 		\
			$(SRC_DIR)$(SCENE)def_no_map_scene.c 	\
			$(SRC_DIR)$(SCENE)def_game_scene.c 		\
			$(SRC_DIR)$(SCENE)def_win_scene.c 		\
			$(SRC_DIR)$(SCENE)def_lose_scene.c 		\
			$(SRC_DIR)$(SCENE)def_param_scene.c 	\
			$(SRC_DIR)$(SCENE)def_pause_scene.c 	\
			$(SRC_DIR)$(SCENE)draw_scene.c 			\
			$(SRC_DIR)$(SCENE)change_scene.c 		\
			$(SRC_DIR)$(SCENE)def_background.c 		\
			$(SRC_DIR)$(CALLBACK)callback_home_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_map_button.c 		\
			$(SRC_DIR)$(CALLBACK)callback_level_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_sound_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_music_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_exit_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_param_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_pause_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_return_button.c 	\
			$(SRC_DIR)$(CALLBACK)transaction.c 		\
			$(SRC_DIR)$(CALLBACK)tower/callback_tower_button.c 		\
			$(SRC_DIR)$(CALLBACK)tower/callback_archer_button.c 	\
			$(SRC_DIR)$(CALLBACK)tower/callback_stone_button.c 		\
			$(SRC_DIR)$(CALLBACK)tower/callback_magic_button.c 		\
			$(SRC_DIR)$(CALLBACK)tower/callback_crossbow_button.c 	\
			$(SRC_DIR)$(UPDATE)update_enemy.c 		\
			$(SRC_DIR)$(UPDATE)update_game_scene.c 	\
			$(SRC_DIR)$(UPDATE)update_ui_button.c 	\
			$(SRC_DIR)$(UPDATE)update_tower_button.c 		\
			$(SRC_DIR)$(UPDATE)update_sound_button.c 		\
			$(SRC_DIR)$(UPDATE)update_music_button.c 		\
			$(SRC_DIR)$(UPDATE)update_tower.c 		\
			$(SRC_DIR)$(DESTROY)destroy_enemies.c 	\
			$(SRC_DIR)$(DESTROY)destroy_towers.c 	\
			assets/maps/maps.c 				\

MAIN		=	$(SRC_DIR)core.c

OBJ			=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME		=	my_defender

INCLUDE 	=	./includes

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
