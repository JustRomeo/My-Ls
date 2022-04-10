/*
** EPITECH PROJECT, 2018
** Isneg
** File description:
** Fonction Isneg
*/
#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
