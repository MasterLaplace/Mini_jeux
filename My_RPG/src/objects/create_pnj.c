/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_pnj
*/

#include "game.h"

extern const size_t NB_PNJ;
extern const preset_pnj_t PNJ_STATS[];

static size_t is_pnj(char *element)
{
    for (size_t i = 0; i < NB_PNJ; i++)
        if (my_strcompare(PNJ_STATS[i].name, element) == 0)
            return i;
    return NB_PNJ + 1;
}

static pnj_t *fill_pnj(size_t tmp, char **info, pnj_t *pnj, game_t *game)
{
    if (!(pnj->sprite = sfSprite_create()))
        return NULL;
    pnj->name = info[0];
    pnj->pos.y = (float) my_getnbr2(info[1]);
    pnj->pos.x = (float) my_getnbr2(info[2]);
    pnj->type = PNJ_STATS[tmp].type;
    pnj->actual_quest = PNJ_STATS[tmp].current_quest;
    pnj->update = PNJ_STATS[tmp].update;
    pnj->offset = PNJ_STATS[tmp].offset;
    pnj->max_value = PNJ_STATS[tmp].max_value;
    pnj->state = PNJ_IDLE;
    sfSprite_setPosition(pnj->sprite, pnj->pos);
    sfSprite_setTexture(pnj->sprite, TEXTURES[pnj->type], sfTrue);
    sfSprite_setTextureRect(pnj->sprite, PNJ_STATS[tmp].rect);
    return pnj;
}

static pnj_t *create_pnj(char *info, game_t *game)
{
    pnj_t *pnj = malloc(sizeof(pnj_t));
    char **info_element = my_str_to_word_array(info, ";");
    size_t tmp = is_pnj(info_element[0]);

    if (!info_element || tmp > NB_PNJ) {
        free(pnj);
        return NULL;
    }
    pnj = fill_pnj(tmp, info_element, pnj, game);
    return pnj;
}

static void create_link_pnj(game_t *game, char *info)
{
    pnj_t *pnj = create_pnj(info, game);

    if (!pnj)
        return;
    link_t *link = create_link(pnj);
    link->display = &draw_pnj;
    list_append(&(game->pnjs), link);
}

size_t create_list_pnj(game_t *game, const char *filename)
{
    struct stat st;
    char *buf = NULL;
    char **info = NULL;
    int fd = my_open_file(filename, O_RDONLY);

    if (!check_fd(fd))
        return EPITECH_FAILURE;
    stat(filename, &st);
    buf = malloc(sizeof(char) * (st.st_size + 1));
    if (!buf)
        return EPITECH_FAILURE;
    read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    info = my_str_to_word_array(buf, "\n");
    for (size_t i = 0; info[i]; i++)
        create_link_pnj(game, info[i]);
    my_free_tab(info);
    free(buf);
    close(fd);
    return 0;
}
