/*
** EPITECH PROJECT, 2022
** file with some utility function
** File description:
** utility
*/

#include "tetris.h"

void tetrimino_print(char *tetrimino)
{
    int i = 0;

    while (tetrimino[i] != '\0') {
        if (tetrimino[i] != ' ')
            my_putchar(tetrimino[i]);
        else
            if (tetrimino[i + 1] !=  '\n')
                my_putchar(tetrimino[i]);
        i++;
    }
}

int tetri_error_debug(char *tetrimino)
{
    if (tetrimino[0] < '1' || tetrimino[0] > '9')
        return (1);
    if (tetrimino[2] < '1' || tetrimino[2] > '9')
        return (1);
    if (tetrimino[4] < '1' || tetrimino[4] > '9')
        return (1);
    for (int i = 0; tetrimino[i] != '\0'; i++)
        if ((tetrimino[i] < '0' || tetrimino[i] > '9') && tetrimino[i] != '*' \
        && tetrimino[i] != ' ' && tetrimino[i] != '\n')
            return (1);
    return (0);
}

void print_key_value(int c_key)
{
    char c = c_key;

    my_putchar(c);
    my_putstr(" (");
    my_putnbr(c_key);
    my_putstr(")\n");
}

void print_tetriminos(char *file_name)
{
    char *info = malloc(sizeof(char) * 256);
    int fd = open(my_strcat("tetriminos/", file_name), 00);
    struct stat st;

    stat(my_strcat("tetriminos/", file_name), &st);
    read(fd, info, st.st_size);
    info[st.st_size] = '\0';
    if (tetri_error_debug(info) != 0)
        my_putstr("error\n");
    else {
        my_putstr("size ");
        my_putchar(info[0]);
        my_putstr("*");
        my_putchar(info[2]);
        my_putstr(", color ");
        my_putchar(info[4]);
        my_putstr("\n");
        tetrimino_print(info + 6);
    }
}

void print_name(char *str)
{
    char c;

    for (int i = 0; str[i] != '.'; i++) {
        c = str[i];
        write (1, &c, 1);
    }
    my_putstr("': ");
}
