/*
** EPITECH PROJECT, 2018
** my_putint_in_str.c
** File description:
** HEADER
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_putint_in_str(int z)
{
    char *result = malloc(sizeof(char) * 12);
    int r = z;
    int s = 0;
    int n = 0;
    int b = 10;

    while (r != 0) {
        r = r/10;
        s ++;
    }
    while (result[n] != '\0' && s != 0) {
        result[n] = (z % 10 + '0');
        n ++;
        s --;
        z = z / 10;
    }
    result[n] = '\0';
    return (my_revstr(result));
}
