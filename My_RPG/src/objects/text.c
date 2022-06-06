/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** text
*/

#include "game.h"

extern const size_t NB_TEXTS;
extern const preset_text_t TEXT[];
extern const preset_player_t PLAYER_DATA;

static void draw_name_text(game_t *game, char *name, int i)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[i].font);

    sfText_setString(sf_score, name);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[i].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(255, 255, 255));
    sfText_setCharacterSize(sf_score, TEXT[i].size);
    sfRenderWindow_drawText(WINDOW, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
}

static void draw_text(game_t *game, size_t nb, int i)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[i].font);
    char *dest = my_strcat(my_itoa(nb), TEXT[i].str);

    sfText_setString(sf_score, dest);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[i].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(255, 236, 49));
    sfText_setCharacterSize(sf_score, TEXT[i].size);
    sfRenderWindow_drawText(WINDOW, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
    free(dest);
}

static void draw_stats_text(game_t *game, size_t nb, int i)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[i].font);
    char *dest = my_itoa(nb);

    sfText_setString(sf_score, dest);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[i].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(255, 255, 255));
    sfText_setCharacterSize(sf_score, TEXT[i].size);
    sfRenderWindow_drawText(WINDOW, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
    free(dest);
}

void set_text(game_t *game)
{
    draw_text(game, PLY_STATS->health, HEALTH_TEXT);
    if (my_strlen(PLY_STATS->name) > 0)
        draw_name_text(game, PLY_STATS->name, NAME_TEXT);
    else
        draw_name_text(game, "Ok !", NAME_TEXT);
    if (STATS_PANEL->statue == false) {
        draw_stats_text(game, PLY_STATS->level, LEVEL_TXT);
        draw_stats_text(game, PLY_STATS->damage, DAMAGE_TXT);
        draw_stats_text(game, PLAYER_DATA.damage, DEFENSE_TXT);
        draw_stats_text(game, PLY_STATS->defense, P_DAMAGE_TXT);
        draw_stats_text(game, PLAYER_DATA.defense, P_DEFENSE_TXT);
    }
}
