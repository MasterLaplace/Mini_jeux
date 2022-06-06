/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_enemy
*/

#include "game.h"

extern const size_t NB_ENEMY;
extern const preset_enemy_t ENEMY_STATS[];

static size_t is_enemy(char *element)
{
    for (size_t i = 0; i < NB_ENEMY; i++)
        if (my_strcompare(ENEMY_STATS[i].name, element) == 0)
            return i;
    return NB_ENEMY + 1;
}

static
enemy_t *fill_enemy(size_t tmp, char **info, enemy_t *enemy, game_t *game)
{
    if (!(enemy->sprite = sfSprite_create()) || !info)
        return NULL;
    sfSprite_setTexture(enemy->sprite, TEXTURES[DEATH + tmp], sfTrue);
    sfSprite_setTextureRect(enemy->sprite, ENEMY_STATS[tmp].rect);
    enemy->name = info[0];
    enemy->pos.y = (float) my_getnbr2(info[1]);
    enemy->pos.x = (float) my_getnbr2(info[2]);
    sfSprite_setPosition(enemy->sprite, enemy->pos);
    enemy->type = ENEMY_STATS[tmp].type;
    enemy->damage = ENEMY_STATS[tmp].damage;
    enemy->health = ENEMY_STATS[tmp].health;
    enemy->speed = ENEMY_STATS[tmp].speed;
    enemy->offset = ENEMY_STATS[tmp].offset;
    enemy->experience = ENEMY_STATS[tmp].exp;
    enemy->update = ENEMY_STATS[tmp].update;
    enemy->range = 10;
    enemy->direct = 1;
    EMY_STATE = EMY_WALKING;
    return enemy;
}

static enemy_t *create_enemy(game_t *game, char *info)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    char **info_element = my_str_to_word_array(info, ";");
    size_t tmp = is_enemy(info_element[0]);

    if (!enemy || !info_element || tmp > NB_ENEMY) {
        free(enemy);
        return NULL;
    }
    enemy = fill_enemy(tmp, info_element, enemy, game);
    set_origin(enemy->sprite, 0.5f, 0.83f);
    return enemy;
}

static void create_link_enemy(game_t *game, char *info)
{
    enemy_t *enemy = create_enemy(game, info);

    if (!enemy)
        return;
    link_t *link = create_link(enemy);
    link->display = &draw_enemy;
    list_append(&(game->enemies), link);
}

size_t create_list_enemy(game_t *game, const char *filename)
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
        create_link_enemy(game, info[i]);
    my_free_tab(info);
    free(buf);
    close(fd);
    return 0;
}
