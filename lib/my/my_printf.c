/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../include/my.h"

void format(int k, va_list list) {
    while (k > 2) {
        my_putchar('0');
        k--;
    }
    my_put_nbr(va_arg(list, int));
}

void case_format(va_list list, char flag, char *str, int i, int k)
{
    switch (flag) {
    case 'd': format(k, list); break;
    case 'i': format(k, list); break;
    case ' ': case_format(list, str[i + 1], str, i + 1, k + 1); break;
    }
}

void case_flag2(va_list list, char flag, char *str, int i)
{
    switch (flag) {
    case 'o': my_putstr(my_octal(va_arg(list, int)));
        break;
    case 'p': my_putpointer(va_arg(list, int));
        break;
    case 's': my_putstr(va_arg(list, char *));
        break;
    case 'u': my_put_nbr(va_arg(list, unsigned int));
        break;
    case 'x': my_putstr(my_strlowcase(my_hexa(va_arg(list, int))));
        break;
    case 'S': my_putspecstr(va_arg(list, char *));
        break;
    case 'X': my_putstr(my_hexa(va_arg(list, int)));
        break;
    case ' ': case_format(list, str[i + 1], str, i, 1);
        break;
    }
}

void case_flag(va_list list, char flag, char *str, int i)
{
    switch (flag) {
    case '%': my_putchar('%');
        break;
    case 'b': my_putstr(my_binary(va_arg(list, unsigned int)));
        break;
    case 'c': my_putchar(va_arg(list, int));
        break;
    case 'd': my_put_nbr(va_arg(list, int));
        break;
    case 'f': my_put_double(va_arg(list, double));
        break;
    case 'i': my_put_nbr(va_arg(list, int));
        break;
    case 'l': my_put_long(va_arg(list, long));
        break;
    case 'n': my_put_nbr(my_strlen(str));
        break;
    default : case_flag2(list, str[i + 1], str, i);
        break;
    }
}

int my_printf(char *str, ...)
{
    int i = 0;
    va_list list;

    va_start(list, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            case_flag(list, str[i + 1], str, i);
            i ++;
        }
        else
            my_putchar(str[i]);
        i ++;
    }
    return (0);
}
