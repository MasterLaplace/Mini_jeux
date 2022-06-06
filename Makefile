##
## EPITECH PROJECT, 2022
## Mini_jeux
## File description:
## Makefile
##

-include .env
export

make:
	@make -C ./My_Defender/ $(NO_PRINT)
	@make -C ./My_RPG/ $(NO_PRINT)
	@make -C ./My_Runner/ $(NO_PRINT)
	@make -C ./My_Sokoban/ $(NO_PRINT)

all: 	make

defender:
	@make fclean -C ./My_Defender/ $(NO_PRINT)
	@make -C ./My_Defender/ $(NO_PRINT)
	@cd My_Defender; ./my_defender \
	&& $(ECHO) $(BOLD) $(GREEN) "☻ GOOD" $(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED) "Ø ERROR" $(DEFAULT) && exit 84)

rpg:
	@make fclean -C ./My_RPG/ $(NO_PRINT)
	@make -C ./My_RPG/ $(NO_PRINT)
	@cd My_RPG; ./my_rpg \
	&& $(ECHO) $(BOLD) $(GREEN) "☻ GOOD" $(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED) "Ø ERROR" $(DEFAULT) && exit 84)

runner:
	@make fclean -C ./My_Runner/ $(NO_PRINT)
	@make -C ./My_Runner/ $(NO_PRINT)
	@cd My_Runner; ./my_runner normal.txt\
	&& $(ECHO) $(BOLD) $(GREEN) "☻ GOOD" $(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED) "Ø ERROR" $(DEFAULT) && exit 84)

sokoban:
	@make fclean -C ./My_Sokoban/ $(NO_PRINT)
	@make -C ./My_Sokoban/ $(NO_PRINT)
	@cd My_Sokoban; ./my_sokoban \
	&& $(ECHO) $(BOLD) $(GREEN) "☻ GOOD" $(DEFAULT) \
	|| ($(ECHO) $(BOLD) $(RED) "Ø ERROR" $(DEFAULT) && exit 84)

clean:
	@make clean -C ./My_Defender/ $(NO_PRINT)
	@make clean -C ./My_RPG/ $(NO_PRINT)
	@make clean -C ./My_Runner/ $(NO_PRINT)
	@make clean -C ./My_Sokoban/ $(NO_PRINT)

fclean:	clean
	@make fclean -C ./My_Defender/ $(NO_PRINT)
	@make fclean -C ./My_RPG/ $(NO_PRINT)
	@make fclean -C ./My_Runner/ $(NO_PRINT)
	@make fclean -C ./My_Sokoban/ $(NO_PRINT)
	@rm -f vgcore.*

re: fclean all

debug:
	@make debug -C ./My_Defender/ $(NO_PRINT)
	@make debug -C ./My_RPG/ $(NO_PRINT)
	@make debug -C ./My_Runner/ $(NO_PRINT)
	@make debug -C ./My_Sokoban/ $(NO_PRINT)

.PHONY: all re clean fclean debug
