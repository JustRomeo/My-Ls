/*
** EPITECH PROJECT, 2019
** base.c
** File description:
** base.c
*/

#include "include/prototype.h"

int my_ls(int ac, char **argv)
{
    DIR *fd = opendir("./");
    int z = ac - 1;
    char *filepath = malloc(sizeof(char) * 100);

    filepath = "./";
    while (z > 0) {
        if (argv[z][0] != '-')
            filepath = my_strcat(filepath, argv[z]);
        z --;
    }
    fd = opendir(filepath);
    z = ac -1;
    while (z > 0) {
        if (ac > 1 && argv[z][0] == '-')
            check_flag(argv[z][1], fd, filepath);
        z --;
    }
    ls(fd);
}
