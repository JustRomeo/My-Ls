/*
** EPITECH PROJECT, 2018
** my_print_array.c
** File description:
** HEADER
*/

#include <stdio.h>
#include "../../include/my.h"

void my_print_array_col(int *array, int size)
{
    int mem = 0;

    while (mem != size) {
        my_printf("%d\n", array[mem]);
        mem ++;
    }
}

void my_print_array_line(int *array, int size)
{
    int mem = 0;

    while (mem != size) {
        my_printf("%d ", array[mem]);
        mem ++;
    }
    my_printf("\n");
}
