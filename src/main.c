/*
** EPITECH PROJECT, 2022
** main file for tetris project
** File description:
** main
*/

#include "tetris.h"

void tetris_struct_init(tetris_info_t *tetris)
{
    tetris->level = 0;
    tetris->key_left = 0;
    tetris->key_right = 0;
    tetris->key_drop = 0;
    tetris->key_turn = 0;
    tetris->key_quit = 0;
    tetris->key_pause = 0;
    tetris->size_x = 0;
    tetris->size_y = 0;
    tetris->hide_next = 0;
    tetris->debug = 0;
    tetris->help = 0;
    tetris->nb_file = 0;
}

int main(int ac, char **av)
{
    tetris_info_t *tetris = malloc(sizeof(tetris_info_t) * 1);

    tetris_struct_init(tetris);
    if (error_handling(tetris) == 84)
        return (84);
    array_sort(tetris);
    flags_create(tetris, ac, av);
    if (tetris->debug == TRUE && tetris->help == FALSE)
        debug(tetris);
    if (tetris->help == TRUE && tetris->debug == FALSE)
        help_display();
    if (tetris->help == TRUE && tetris->debug == TRUE)
        exit(84);
}
