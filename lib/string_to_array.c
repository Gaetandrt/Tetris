/*
** EPITECH PROJECT, 2022
** convert a string into an array of string
** File description:
** tetrimino_to_array
*/

#include "tetris.h"

int count_alinea(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            n++;
        i++;
    }
    return (n);
}

char **string_to_array(char *str)
{
    int i = 0;
    int j = 0;
    int n = 0;
    char **result = malloc(sizeof(char *) * (count_alinea(str) + 1));

    while (str[i] != '\0') {
        result[n] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (str[i] != '\n') {
            result[n][j] = str[i];
            j++;
            i++;
        }
        result[n][j] = '\0';
        j = 0;
        i++;
        n++;
    }
    result[n] = NULL;
    return (result);
}
