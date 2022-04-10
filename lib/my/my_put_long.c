/*
** EPITECH PROJECT, 2018
** PutNbr
** File description:
** Fonction PutNbr
*/
#include <unistd.h>

void my_putchar(char c);

long my_put_long(long nbr)
{
    long i = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= 0) {
        if (nbr >= 10) {
            i = (nbr % 10);
            nbr = (nbr - i) / 10;
            my_put_long(nbr);
            my_putchar(48 + i);
        }
        else
            my_putchar('0' + nbr % 10);
    }
    return (0);
}
