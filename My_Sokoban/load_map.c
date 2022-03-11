/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** load_map
*/

#include "sokoban.h"

static int fs_open_file(char const *filepath)
{
    if (filepath == NULL)
        return 84;
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return 84;
    return fd;
}

static int check_char(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '#' && str[i] != 'O' &&
            str[i] != 'X' && str[i] != 'P' && str[i] != '\n')
            return 1;
    }
    if (my_compt_char(str, 'P') != 1)
        return 1;
    if (my_compt_char(str, 'X') != my_compt_char(str, 'O'))
        return 1;
    if (my_compt_char(str, 'X') == 0)
        return 1;
    return 0;
}

char **load_map(char *path)
{
    struct stat st;
    char *buf;
    char **map = NULL;
    int fd = fs_open_file(path);

    if (fd == 84)
        return NULL;
    stat(path, &st);
    buf = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    if (check_char(buf) == 1)
        return NULL;
    map = my_str_word_array(buf, '\n');
    free(buf);
    close(fd);
    return map;
}

int handling_error(game_t *game, char *str)
{
    if (str == NULL)
        return 1;
    if (my_strcompare(str, "-h") == 0)
        return help();
    game->path = str;
    if (init_game(game) == 1)
        return 1;
    return 0;
}
