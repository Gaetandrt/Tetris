/*
** EPITECH PROJECT, 2022
** sort an array of string
** File description:
** array_sort
*/

#include "tetris.h"

void array_sort_bis(tetris_info_t *tetris, int i, int j, char *tmp)
{
    if (my_strcmp(tetris->tetri_name[i], tetris->tetri_name[j]) > 0) {
        tmp = tetris->tetri_name[i];
        tetris->tetri_name[i] = tetris->tetri_name[j];
        tetris->tetri_name[j] = tmp;
    }
}

void array_sort(tetris_info_t *tetris)
{
    int i = 0;
    int j = 0;
    char *tmp = NULL;

    while (tetris->tetri_name[i] != NULL) {
        j = i + 1;
        while (tetris->tetri_name[j] != NULL) {
            array_sort_bis(tetris, i, j, tmp);
            j++;
        }
        i++;
    }
}
