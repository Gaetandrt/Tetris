/*
** EPITECH PROJECT, 2022
** ytility function 2
** File description:
** utility_1
*/

#include "tetris.h"

void size_debug(tetris_info_t *tetris)
{
    if (tetris->size_x == 0)
        my_putstr("Size: 20*10\n");
    else {
        my_putstr("Size: ");
        my_putnbr(tetris->size_x);
        my_putstr("*");
        my_putnbr(tetris->size_y);
        my_putstr("\n");
    }
}
