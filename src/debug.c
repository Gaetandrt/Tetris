/*
** EPITECH PROJECT, 2022
** file for debug flag
** File description:
** debug
*/

#include "tetris.h"

void debug_4(tetris_info_t *tetris, int file_count)
{
    for (int i = 0; i < file_count; i++) {
        my_putstr("Tetriminos: '");
        print_name(tetris->tetri_name[i]);
        print_tetriminos(tetris->tetri_name[i]);
    }
}

void debug_3(tetris_info_t *tetris)
{
    my_putstr("Number of tetriminos: ");
    my_putnbr(tetris->nb_file);
    my_putstr("\n");
    debug_4(tetris, tetris->nb_file);
}

void debug_2(tetris_info_t *tetris)
{
    if (tetris->hide_next == 0)
        my_putstr("Next: Yes\n");
    else {
        my_putstr("Next: No\n");
    }
    if (tetris->level == 0)
        my_putstr("Level: 1\n");
    else {
        my_putstr("Level: ");
        my_putnbr(tetris->level);
        my_putstr("\n");
    }
    size_debug(tetris);
    my_putstr("\n");
    debug_3(tetris);
}

void debug_1(tetris_info_t *tetris)
{
    if (tetris->key_drop == 0)
        my_putstr("Key drop: KEY_DOWN (258)\n");
    else {
        my_putstr("Key drop: ");
        print_key_value(tetris->key_drop);
    }
    if (tetris->key_quit == 0)
        my_putstr("Key quit: q (113)\n");
    else {
        my_putstr("Key quit: ");
        print_key_value(tetris->key_quit);
    }
    if (tetris->key_pause == 0)
        my_putstr("Key pause:   (32)\n");
    else {
        my_putstr("Key pause: ");
        print_key_value(tetris->key_pause);
    }
    debug_2(tetris);
}

void debug(tetris_info_t *tetris)
{
    if (tetris->key_left == 0)
        my_putstr("Key left: KEY_LEFT (260)\n");
    else {
        my_putstr("Key left: ");
        print_key_value(tetris->key_left);
    }
    if (tetris->key_right == 0)
        my_putstr("Key right: KEY_RIGHT (261)\n");
    else {
        my_putstr("Key right: ");
        print_key_value(tetris->key_right);
    }
    if (tetris->key_turn == 0)
        my_putstr("Key turn: KEY_UP (259)\n");
    else {
        my_putstr("Key turn: ");
        print_key_value(tetris->key_turn);
    }
    debug_1(tetris);
}
