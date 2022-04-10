/*
** EPITECH PROJECT, 2018
** my_hexa.c
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_putint_in_str(int z);
int my_getnbr(char const *str);
char *my_revstr(char *str);

char *my_hexa(int nbr)
{
    int res = 0;
    int i = 0;
    char *resultat = malloc(sizeof(char) * 10);

    while (nbr > 0) {
        res = nbr % 16;
        nbr = nbr / 16;
        if (res < 10)
            resultat[i] = res + 48;
        if (res > 10)
            resultat[i] = res + 55;
        i++;
    }
    return (my_revstr(resultat));
}
