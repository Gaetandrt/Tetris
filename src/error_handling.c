/*
** EPITECH PROJECT, 2022
** error handling
** File description:
** error_handling
*/

#include "tetris.h"

int check_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (1);
    return (0);
}

void get_name(tetris_info_t *tetris)
{
    DIR *dirp;
    struct dirent *entry;
    int len = 0;

    tetris->tetri_name = malloc(sizeof(char *) * (tetris->nb_file + 1));
    dirp = opendir("tetriminos");
    for (int i = 0; (entry = readdir(dirp)) != NULL;) {
        if (entry->d_type == DT_REG) {
            len = my_strlen(entry->d_name);
            tetris->tetri_name[i] = malloc(sizeof(char) * len);
            tetris->tetri_name[i] = entry->d_name;
            i++;
        }
    }
    tetris->tetri_name[tetris->nb_file] = NULL;
    free(entry);
}

int check_valid_tetriminos(char *file_name)
{
    char *info = malloc(sizeof(char) * 256);
    int fd = open(my_strcat("tetriminos/", file_name), 00);
    struct stat st;

    stat(my_strcat("tetriminos/", file_name), &st);
    if (st.st_size < 5)
        return (1);
    read(fd, info, st.st_size);
    info[st.st_size] = '\0';
    if (info[0] < '1' || info[0] > '9')
        return (1);
    if (info[2] < '1' || info[2] > '9')
        return (1);
    if (info[4] < '1' || info[4] > '9')
        return (1);
    free(info);
    return (0);
}

int error_handling(tetris_info_t *tetris)
{
    DIR *dirp = opendir("tetriminos");
    struct dirent *entry;

    if (opendir("tetriminos") == NULL)
        return (84);
    while ((entry = readdir(dirp)) != NULL)
        if (entry->d_type == DT_REG)
            tetris->nb_file++;
    get_name(tetris);
    for (int i = 0; i < tetris->nb_file; i++)
        if (check_valid_tetriminos(tetris->tetri_name[i]) == 1)
            tetris->nb_file--;
    if (tetris->nb_file == 0)
        return (84);
    return (0);
}
