/*
** EPITECH PROJECT, 2018
** my_octal.c
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_putint_in_str(int z);
int my_getnbr(char const *str);
char *my_revstr(char *str);

char *my_octal(int nbr)
{
    int res = 0;
    int i = 0;
    char *resultat = malloc(sizeof(char) * 10);

    while (nbr > 0) {
        res = nbr % 8;
        nbr = nbr / 8;
        resultat[i] = res + 48;
        i++;
    }
    return (my_revstr(resultat));
}
