/*
** EPITECH PROJECT, 2018
** StrCPY
** File description:
** Fonction StrCpy
*/
#include <stdio.h>
#include <unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    int j;
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        j = i +	1;
    }
    dest[j] = '\0';
    return (dest);
}
