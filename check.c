/*
** EPITECH PROJECT, 2019
** check.c
** File description:
** check
*/

#include "include/prototype.h"

int check_flag(char c, DIR *fd, char *filepath)
{
    switch (c) {
    case 'l': ll(fd, filepath);
        break;
    case 'R': ;
        break;
    case 'r': lr(fd);
        break;
    case 't': ;
        break;
    case 'd': ld(fd);
        break;
    case '-': ls(fd);
        break;
    default : my_printf("\e[91m\e[1mERROR: unknow or no flag after \'-\'\n\e[0m");
        break;
    }
    //exit(0);
}
