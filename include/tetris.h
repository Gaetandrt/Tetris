/*
** EPITECH PROJECT, 2022
** tetris header file
** File description:
** tetris
*/

#include <getopt.h>
#include <ncurses.h>
#include <stdbool.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef TETRIS_H_
    #define TETRIS_H_

typedef struct tetriminos_t {
    char **form_array;
    int width;
    int color;
    int height;
} tetriminos_t;

typedef struct tetris_info_s {
    int key_left;
    int key_right;
    int key_drop;
    int key_turn;
    int key_quit;
    int key_pause;
    int level;
    int size_x;
    int size_y;
    bool hide_next;
    bool debug;
    bool help;
    int nb_file;
    int invalid_file;
    char **tetri_name;
} tetris_info_t;

int my_putnbr(int nb);
void my_putchar(char c);
void help_display(void);
void print_name(char *str);
int dir_nb_file(char *path);
int my_getnbr(char const *str);
int my_strlen(char const *str);
void print_key_value(int c_key);
void my_putstr(char const *str);
int my_strcmp(char *s1, char *s2);
void debug(tetris_info_t *tetris);
void tetrimino_print(char *tetrimino);
void size_debug(tetris_info_t *tetris);
char *my_strcat(char *dest, char *src);
void array_sort(tetris_info_t *tetris);
void print_tetriminos(char *file_name);
int tetri_error_debug(char *tetrimino);
int error_handling(tetris_info_t *tetris);
void flags_create(tetris_info_t *tetris, int ac, char **av);

#endif /* !TETRIS_H_ */
