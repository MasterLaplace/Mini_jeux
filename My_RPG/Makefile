##
## EPITECH PROJECT, 2022
## B-MUL-200-REN-2-1-myrpg-killian.bourhis
## File description:
## Makefile
##

-include .env
export

SRC_DIR = src/

GAME = game/

DESTROY = destroy/

ENEMY = enemy/

INIT = init/

OBJECTS = objects/

PARTICLE = particles/

COLLISIONS = collisions/

PLAYER = player/

LINKED = linked_lists/

SCENES = scenes/

PRESETS = presets/

CALLBACK = callback/

UPDATE = update/

EVENTS = events/

SRC		=   $(SRC_DIR)$(GAME)check_clocks.c		        \
			$(SRC_DIR)$(GAME)weather.c		        	\
			$(SRC_DIR)$(DESTROY)destroy.c               \
			$(SRC_DIR)$(DESTROY)destroy_button.c        \
			$(SRC_DIR)$(DESTROY)destroy_inventory.c     \
			$(SRC_DIR)$(DESTROY)destroy_link.c          \
			$(SRC_DIR)$(DESTROY)destroy_player.c        \
			$(SRC_DIR)$(DESTROY)destroy_stats.c			\
			$(SRC_DIR)$(ENEMY)attack_enemy.c			\
			$(SRC_DIR)$(ENEMY)move_enemy.c				\
			$(SRC_DIR)$(INIT)init_game.c                \
			$(SRC_DIR)$(INIT)init_textures.c 	        \
			$(SRC_DIR)$(INIT)init_stats.c 	 	        \
			$(SRC_DIR)$(INIT)init_scenes.c 	 	        \
			$(SRC_DIR)$(INIT)init_sounds.c 	    	    \
			$(SRC_DIR)$(INIT)init_music.c 	    	    \
			$(SRC_DIR)$(INIT)init_hitboxes.c 	    	\
            $(SRC_DIR)$(OBJECTS)create_button.c         \
			$(SRC_DIR)$(OBJECTS)create_dynamic.c 	    \
			$(SRC_DIR)$(OBJECTS)create_element.c 	    \
			$(SRC_DIR)$(OBJECTS)create_bubble.c 	 	\
            $(SRC_DIR)$(OBJECTS)create_interface.c 	    \
			$(SRC_DIR)$(OBJECTS)create_player.c 	    \
			$(SRC_DIR)$(OBJECTS)create_pnj.c 	 	    \
			$(SRC_DIR)$(OBJECTS)create_object.c 	    \
			$(SRC_DIR)$(OBJECTS)create_enemy.c 	  		\
            $(SRC_DIR)$(OBJECTS)text.c 			        \
			$(SRC_DIR)$(PARTICLE)black_fade.c    		\
			$(SRC_DIR)$(PARTICLE)display_particles.c    \
			$(SRC_DIR)$(PARTICLE)display_snow.c    		\
			$(SRC_DIR)$(PLAYER)absorb_object.c        	\
			$(SRC_DIR)$(PLAYER)talk_with_pnj.c        	\
			$(SRC_DIR)$(PLAYER)take_the_door.c        	\
			$(SRC_DIR)$(PLAYER)look_in_my_bag.c        	\
			$(SRC_DIR)$(PLAYER)attack_player.c        	\
			$(SRC_DIR)$(PLAYER)launch_arrow.c        	\
			$(SRC_DIR)$(PLAYER)move_arrow.c        		\
			$(SRC_DIR)$(PLAYER)move_player.c 			\
			$(SRC_DIR)$(PLAYER)move_player_middle.c 	\
			$(SRC_DIR)$(PLAYER)jump_player.c        	\
			$(SRC_DIR)$(PLAYER)gravity_player.c        	\
			$(SRC_DIR)$(PLAYER)check_experience.c 		\
			$(SRC_DIR)$(PLAYER)is_dead.c        		\
            $(SRC_DIR)$(LINKED)create_link.c 	    	\
            $(SRC_DIR)$(LINKED)delete_link.c 	    	\
			$(SRC_DIR)$(LINKED)draw_entity.c 	    	\
            $(SRC_DIR)$(LINKED)draw_link.c 	    		\
			$(SRC_DIR)$(SCENES)draw_scene.c				\
			$(SRC_DIR)$(SCENES)draw_entity.c			\
			$(SRC_DIR)$(SCENES)change_scene.c 	        \
            $(SRC_DIR)$(SCENES)def_home_scene.c         \
            $(SRC_DIR)$(SCENES)def_game_scene.c         \
			$(SRC_DIR)$(SCENES)def_background.c 	    \
			$(SRC_DIR)$(SCENES)def_param_scene.c 	    \
			$(SRC_DIR)$(SCENES)def_pause_scene.c 	    \
			$(SRC_DIR)$(SCENES)def_credit_scene.c 	    \
			$(SRC_DIR)$(SCENES)def_name_scene.c 	    \
			$(SRC_DIR)$(SCENES)def_save_scene.c 	    \
			$(SRC_DIR)$(SCENES)def_stats_panel.c        \
			$(SRC_DIR)$(SCENES)def_inventory_panel.c    \
			$(SRC_DIR)$(PRESETS)textures.c 		        \
			$(SRC_DIR)$(PRESETS)quests.c 		        \
			$(SRC_DIR)$(PRESETS)scenes.c                \
			$(SRC_DIR)$(PRESETS)sounds.c 		        \
			$(SRC_DIR)$(PRESETS)texts.c 		        \
			$(SRC_DIR)$(PRESETS)home_scene.c	        \
			$(SRC_DIR)$(PRESETS)game_scene.c	        \
			$(SRC_DIR)$(PRESETS)param_scene.c	        \
			$(SRC_DIR)$(PRESETS)pause_scene.c	        \
			$(SRC_DIR)$(PRESETS)credit_scene.c	        \
			$(SRC_DIR)$(PRESETS)name_scene.c	        \
			$(SRC_DIR)$(PRESETS)object_preset.c	        \
			$(SRC_DIR)$(PRESETS)enemy_preset.c	        \
			$(SRC_DIR)$(PRESETS)pnj_preset.c	        \
			$(SRC_DIR)$(PRESETS)save_scene.c	        \
			$(SRC_DIR)$(PRESETS)stats_panel.c	        \
			$(SRC_DIR)$(PRESETS)inventory_panel.c	    \
			$(SRC_DIR)$(PRESETS)hitboxes.c	        	\
			$(SRC_DIR)$(PRESETS)player_preset.c	        \
			$(SRC_DIR)$(CALLBACK)callback_home_button.c 	\
            $(SRC_DIR)$(CALLBACK)callback_exit_button.c 	\
            $(SRC_DIR)$(CALLBACK)callback_play_button.c 	\
			$(SRC_DIR)$(CALLBACK)callback_music_button.c	\
            $(SRC_DIR)$(CALLBACK)callback_pause_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_param_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_return_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_save_button.c		\
			$(SRC_DIR)$(CALLBACK)callback_sound_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_stats_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_inventory_button.c\
			$(SRC_DIR)$(CALLBACK)callback_backpack_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_element_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_window_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_credit_button.c	\
			$(SRC_DIR)$(CALLBACK)callback_name_button.c		\
			$(SRC_DIR)$(CALLBACK)callback_map1_event.c		\
			$(SRC_DIR)$(CALLBACK)callback_map2_event.c		\
			$(SRC_DIR)$(CALLBACK)callback_map3_event.c		\
			$(SRC_DIR)$(CALLBACK)callback_village_event.c	\
			$(SRC_DIR)$(UPDATE)update_bar.c 			\
			$(SRC_DIR)$(UPDATE)update_movement_linked_list.c\
            $(SRC_DIR)$(UPDATE)update_ui_button.c 	    \
			$(SRC_DIR)$(UPDATE)update_sound_button.c 	\
			$(SRC_DIR)$(UPDATE)update_music_button.c 	\
			$(SRC_DIR)$(UPDATE)update_player.c 			\
			$(SRC_DIR)$(UPDATE)update_enemy.c 			\
			$(SRC_DIR)$(UPDATE)update_object.c			\
			$(SRC_DIR)$(UPDATE)update_pnj.c 			\
			$(SRC_DIR)$(UPDATE)update_credit.c 			\
			$(SRC_DIR)$(UPDATE)update_name.c 			\
			$(SRC_DIR)$(UPDATE)update_quest.c 			\
			$(SRC_DIR)$(EVENTS)events.c                 \
            $(SRC_DIR)$(EVENTS)mouse.c 	 		        \
            $(SRC_DIR)$(EVENTS)keys.c 	 		        \
            $(SRC_DIR)$(EVENTS)mouse_moved.c 	 	    \
            $(SRC_DIR)$(EVENTS)mouse_pressed.c 	 	    \
            $(SRC_DIR)$(EVENTS)mouse_released.c 	 	\
            $(SRC_DIR)$(COLLISIONS)rectangle_collisions.c	\
            $(SRC_DIR)help.c                          \
			$(SRC_DIR)sound.c                         \
			$(SRC_DIR)window.c						  \

CC		=	gcc

MAIN		=	$(SRC_DIR)core.c

OBJ		=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME		=	my_rpg

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
debug:	clean $(OBJ)
	@make debug -C $(LIB_FOLDER) $(NO_PRINT)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) ${CSFML_F}

%.o: %.c
	@$(eval NB=$(shell echo $$(($(NB)+1))))
	@$(CC) -c -o $@ $^ $(CFLAGS) \
	&& python build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all re clean fclean debug build_lib %.o
.SILENT: all re clean fclean debug build_lib %.o
