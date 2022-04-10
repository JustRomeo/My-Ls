/*
** EPITECH PROJECT, 2018
** Swap
** File description:
** Fonction Swap
*/

void my_swap(int *a, int *b)
{
    int s = 0;

    s = *a;
    *a = *b;
    *b = s;
}
