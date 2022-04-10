/*
** EPITECH PROJECT, 2018
** Putchar
** File description:
** Fonction Putchar
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
