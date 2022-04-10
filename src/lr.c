/*
** EPITECH PROJECT, 2019
** lr.c
** File description:
** HEADER
*/

#include "prototype.h"

static int count = 1;
static int tot = 0;

int swap_words(char **list, int t)
{
    char *word = malloc(sizeof(char) * 100);

    word = list[t];
    list[t] = list[t + 1];
    list[t + 1] = word;
    free (word);
}

int sorter(char **list)
{
    int t = 0;
    int z = 0;
    int r = 0;

    while (t != tot - 1) {
        if (list[t][0] < list[t + 1][0]) {
            swap_words(list, t);
            t = 0;
        }
        else
            t ++;
    }
    t = 0;
    while (t != tot - 3) {
        my_putstr(list[t]);
        my_putchar('\n');
        t ++;
    }
    return (0);
}

int lr(DIR *fd)
{
    struct dirent *print;
    char **files = malloc(sizeof(char *) * 100);
    int t = 0;

    if (files == NULL) {
        my_printf("\e[91m\e[1m[LR]!! malloc == NULL !!\n\e[0m");
        exit(84);
    }
    print = readdir(fd);
    while (print != NULL) {
        files[t] = print->d_name;
        print = readdir(fd);
        tot ++;
        t ++;
    }
    sorter(files);
    free (files);
    return (0);
}
