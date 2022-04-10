/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** aqwszswxseddxdrffcdftgfvgyhgbhuhbjuijnjikjn
*/

#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;
    int k = i + j;

    while (dest[j])
        j++;
    k = i + j;
    while (src[i] && i <= nb){
        dest[k] = src[i];
        i++;
        k = i + j;
    }
    k++;
    dest[k] = '\0';
    my_printf("return : %s\n", dest);
    return (dest);
}
