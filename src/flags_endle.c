/*
** EPITECH PROJECT, 2022
** file for flags endleing and parsing
** File description:
** flags_endle
*/

#include "tetris.h"

void switch_case_2(int option, tetris_info_t *tetris)
{
    switch (option) {
    case 'p':
        tetris->key_pause = my_getnbr(optarg);
        break;
    case 'w':
        tetris->hide_next = TRUE;
        break;
    case 'D':
        tetris->debug = TRUE;
        break;
    case 'h':
        tetris->help = TRUE;
        break;
    }
}

void switch_case(int option, tetris_info_t *tetris)
{
    switch (option) {
    case 'L':
        tetris->level = my_getnbr(optarg);
        break;
    case 'l':
        tetris->key_left = my_getnbr(optarg);
        break;
    case 'r':
        tetris->key_right = my_getnbr(optarg);
        break;
    case 't':
        tetris->key_turn = my_getnbr(optarg);
        break;
    case 'd':
        tetris->key_drop = my_getnbr(optarg);
        break;
    case 'q':
        tetris->key_quit = my_getnbr(optarg);
        break;
    }
    switch_case_2(option, tetris);
}

void flags_parse(tetris_info_t *tet, int ac, char **av, struct option l_opt[])
{
    int opt = 0;
    char args[] = "L:l:r:t:d:q:p:wD";

    while (1) {
        if (opt < 0)
            break;
        opt = getopt_long(ac, av, args, l_opt, NULL);
        switch_case(opt, tet);
    }
}

void flags_create(tetris_info_t *tetris, int ac, char **av)
{
    static struct option options[] = {
        {"help", no_argument, NULL, 'h'},
        {"level", required_argument, NULL, 'L'},
        {"key-left", required_argument, NULL, 'l'},
        {"key-right", required_argument, NULL, 'r'},
        {"key-turn", required_argument, NULL, 't'},
        {"key-drop", required_argument, NULL, 'd'},
        {"key-quit", required_argument, NULL, 'q'},
        {"key-pause", required_argument, NULL, 'p'},
        {"debug", no_argument, NULL, 'D'},
        {"without-next", required_argument, NULL, 'w'},
        {"map-size", required_argument, NULL, 'm'},
        {NULL, 0, NULL, 0}
    };

    flags_parse(tetris, ac, av, options);
}
