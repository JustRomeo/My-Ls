/*
** EPITECH PROJECT, 2019
** ls.c
** File description:
** ls.C
*/

#include "include/prototype.h"

int ls(DIR *fd)
{
    struct dirent *print;

    if (fd == NULL) {
        my_printf("\e[91mWTF DUDE O_o\n\e[0m");
        exit(-42);
    }
    print = readdir(fd);
    while (print != NULL) {
        if (print->d_name[0] != '.')
            my_printf("%s\t", print->d_name);
        print = readdir(fd);
    }
    my_printf("\n");
}
