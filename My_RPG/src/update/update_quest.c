/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_quest
*/

#include "game.h"

static void set_name_quest_text(game_t *game, char *name)
{
    sfText *sf_name = sfText_create();
    sfFont *font = sfFont_createFromFile("assets/fonts/Dimbo_Regular.ttf");
    sfVector2f pos = sfSprite_getPosition(BUBBLE->sprite);

    sfText_setString(sf_name, name);
    sfText_setFont(sf_name, font);
    sfText_setPosition(sf_name, (sfVector2f){pos.x - 285, pos.y + 50});
    sfText_setColor(sf_name, sfColor_fromRGB(0, 0, 0));
    sfText_setCharacterSize(sf_name, 30);
    sfRenderWindow_drawText(WINDOW, sf_name, NULL);
    sfText_destroy(sf_name);
    sfFont_destroy(font);
}

static void set_description_quest_text(game_t *game, char *desc)
{
    sfText *sf_desc = sfText_create();
    sfFont *font = sfFont_createFromFile("assets/fonts/Dimbo_Regular.ttf");
    sfVector2f pos = sfSprite_getPosition(BUBBLE->sprite);

    sfText_setString(sf_desc, desc);
    sfText_setFont(sf_desc, font);
    sfText_setPosition(sf_desc, (sfVector2f){pos.x - 285, pos.y + 100});
    sfText_setColor(sf_desc, sfColor_fromRGB(0, 0, 0));
    sfText_setCharacterSize(sf_desc, 30);
    sfRenderWindow_drawText(WINDOW, sf_desc, NULL);
    sfText_destroy(sf_desc);
    sfFont_destroy(font);
}

void update_quest(game_t *game)
{
    if (BUBBLE->statue == true) {
        set_name_quest_text(game, BUBBLE->name);
        set_description_quest_text(game, BUBBLE->description);
    }
}
