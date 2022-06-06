/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_object
*/

#include "game.h"

extern const size_t NB_OBJ;
extern const preset_object_t OBJECT_STATS[];

static size_t is_object(char *element)
{
    for (size_t i = 0; i < NB_OBJ; i++)
        if (my_strcompare(OBJECT_STATS[i].name, element) == 0)
            return i;
    return NB_OBJ + 1;
}

static object_t *fill_object(size_t tmp, char **info, object_t *obj,
                            game_t *game)
{
    obj->sprite = sfSprite_create();
    if (!obj->sprite)
        return NULL;
    sfSprite_setTexture(obj->sprite, TEXTURES[PIECES + tmp], sfTrue);
    sfSprite_setTextureRect(obj->sprite, OBJECT_STATS[tmp].rect);
    sfSprite_setScale(obj->sprite, (sfVector2f){0.75, 0.75});
    obj->name = info[0];
    obj->pos.y = (float) my_getnbr2(info[1]);
    obj->pos.x = (float) my_getnbr2(info[2]);
    sfSprite_setPosition(obj->sprite, obj->pos);
    obj->type = OBJECT_STATS[tmp].type;
    obj->description = OBJECT_STATS[tmp].description;
    obj->effect = OBJECT_STATS[tmp].effect;
    obj->update = OBJECT_STATS[tmp].update;
    obj->offset = OBJECT_STATS[tmp].offset;
    obj->max_value = OBJECT_STATS[tmp].max_value;
    obj->state = OBJ_IDLE;
    return obj;
}

static object_t *create_obj(game_t *game, char *info)
{
    object_t *obj = malloc(sizeof(object_t));
    char **info_element = my_str_to_word_array(info, ";");
    size_t tmp = is_object(info_element[0]);

    if (!obj || !info_element || tmp > NB_OBJ) {
        free(obj);
        return NULL;
    }
    obj = fill_object(tmp, info_element, obj, game);
    return obj;
}

static void create_link_object(game_t *game, char *info)
{
    object_t *obj = create_obj(game, info);
    if (!obj)
        return;
    link_t *link = create_link(obj);
    link->display = &draw_object;
    list_append(&(game->objects), link);
}

size_t create_list_object(game_t *game, const char *filename)
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
        create_link_object(game, info[i]);
    my_free_tab(info);
    free(buf);
    close(fd);
    return 0;
}
