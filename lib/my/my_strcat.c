/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Task 2 du jour 7 sur la lib
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    int k = i + j;
    char *str = dest;

    dest = malloc(sizeof(char) * (my_strlen(str) + my_strlen(src)));        
    if (dest == NULL)
        return('\0');
    while (str[i] != '\0') {
        dest[i] = str[i];
        i ++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        j ++;
        i ++;
    }
    dest[i] = '\0';
    return (dest);
}
