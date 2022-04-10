/*
** EPITECH PROJECT, 2019
** my_str_to_array.c
** File description:
** HEADER
*/

#include <stdlib.h>
#include <stdio.h>

static int count = 1;
static int total = 1;

int counter(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] == ' ')
            total ++;
        a ++;
    }
    return (0);
}

char *next_w(char *str)
{
    int z = 1;
    int a = 0;
    int c = 0;
    char *word = malloc(sizeof(char) * 40);

    while (z != count)
        z ++;
    while (z != 1) {
        if (str[c] == ' ')
            z --;
        c ++;
    }
    while (str[c] != ' ') {
        word[a] = str[c];
        a ++;
        c ++;
    }
    word[a] = '\0';
    count ++;
    return (word);
}

char **my_str_to_array(char *str)
{
    const int size = total;
    char **argv = malloc(sizeof(char) * size);
    char *word = malloc(sizeof(char) * 100);
    int r = 0;
    int c = 0;
    int t = 0;

    my_printf("%d\n", total);
    counter(str);
    while (r != total) {
        argv[r] = next_w(str);
        r ++;
    }
    return (argv);
}
