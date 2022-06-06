/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** load_map
*/

#include "../includes/sokoban.h"

static const char *default_map[] = {
    " #####\n",
    " #   #####\n",
    " #X# ##  #\n",
    "##       #\n",
    "#OO#XX X #\n",
    "#OO  #####\n",
    "# P###\n",
    "####\n",
    NULL
};

static int fs_open_file(char const *filepath)
{
    if (!filepath)
        return EXIT_84;
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return EXIT_84;
    return fd;
}

static bool check_char(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '#' && str[i] != 'O' &&
            str[i] != 'X' && str[i] != 'P' && str[i] != '\n')
            return 1;
    }
    if (my_count_char(str, 'P') != 1)
        return false;
    if (my_count_char(str, 'X') != my_count_char(str, 'O'))
        return false;
    if (my_count_char(str, 'X') == 0)
        return false;
    return true;
}

char **load_map(char *path)
{
    struct stat st;
    char *buf;
    char **map = NULL;
    int fd = fs_open_file(path);

    if (fd == 84) {
        map = my_two_dup((char **) default_map);
        return map;
    }
    stat(path, &st);
    buf = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    if (!check_char(buf))
        return (NULL);
    map = my_str_word_array(buf, '\n');
    free(buf);
    close(fd);
    return map;
}

bool handling_error(game_t *game, char *str)
{
    if (my_strcmp(str, "-h") == 0)
        return help();
    game->path = str;
    if (!init_game(game))
        return false;
    return true;
}
