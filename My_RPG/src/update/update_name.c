/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_name
*/

#include "game.h"

extern const preset_text_t PRESET_NAME_TEXT;

static char *append_char(char *str, char c)
{
    size_t nbr = my_strlen(str);
    char *dest = malloc(sizeof(char) * (nbr + 2));

    if (!dest)
        return NULL;

    dest = my_strncpy(dest, str, nbr);
    dest[nbr] = c;
    dest[nbr + 1] = '\0';
    free(str);
    return dest;
}

static void set_text_name(game_t *game, char *name)
{
    sfText *sf_name = sfText_create();
    sfFont *font = sfFont_createFromFile(PRESET_NAME_TEXT.font);
    sfVector2f pos = (sfVector2f) {PRESET_NAME_TEXT.pos.x,
                                    PRESET_NAME_TEXT.pos.y};

    sfText_setString(sf_name, name);
    sfText_setFont(sf_name, font);
    sfText_setPosition(sf_name, pos);
    sfText_setColor(sf_name, sfColor_fromRGB(231, 80, 0));
    sfText_setCharacterSize(sf_name, PRESET_NAME_TEXT.size);
    sfRenderWindow_drawText(WINDOW, sf_name, NULL);
    sfText_destroy(sf_name);
    sfFont_destroy(font);
}

void update_name(game_t *game, sfKeyCode key)
{
    if (key == sfKeyEnter)
        change_scene(game, GAME);
    if ((int) my_strlen(PLY_STATS->name) - 1 >= 0)
        if (key == sfKeyBackspace)
            PLY_STATS->name[my_strlen(PLY_STATS->name) - 1] = '\0';
    if (my_strlen(PLY_STATS->name) < 8) {
        if (key == sfKeySpace)
            PLY_STATS->name = append_char(PLY_STATS->name, ' ');
        if (key >= sfKeyA && key <= sfKeyZ)
            PLY_STATS->name = append_char(PLY_STATS->name, key + 65);
    }
    set_text_name(game, PLY_STATS->name);
}
