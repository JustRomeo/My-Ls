/*
** EPITECH PROJECT, 2018
** my_putpointer.c
** File description:
** header
*/

int my_putstr(char const *str);
char *my_strlowcase(char *str);
char *my_hexa(int nbr);

void *my_putpointer(int nbr)
{
    my_putstr("0x");
    my_putstr(my_strlowcase(my_hexa(nbr)));
}
