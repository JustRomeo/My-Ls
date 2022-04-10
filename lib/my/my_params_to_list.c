/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** HEADER
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

linked_list_t *add_list(linked_list_t **list, char *const *av, int k)
{
    linked_list_t *new_list = NULL;

    new_list = malloc(sizeof(linked_list_t) + 5);
    new_list->data = my_getnbr(av[k]);
    new_list->next = *list;
    *list = new_list;
}

linked_list_t *my_params_to_list(linked_list_t *new_list, int ac,
                                 char *const *av)
{
    int k = ac - 1;

    new_list = NULL;
    while (k > 0) {
        add_list(&new_list, av, k);
        k --;
    }
    return (new_list);
}

void my_print_list(linked_list_t *new_list)
{
    while (new_list != NULL) {
        my_printf("%d ", new_list->data);
        new_list = new_list->next;
    }
    my_printf("\n");
}
