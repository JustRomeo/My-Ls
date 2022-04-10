/*
** EPITECH PROJECT, 2018
** my_put_arg_in_array.c
** File description:
** HEADER
*/

int my_getnbr(char *str);
void my_put_arg_in_array(char **argv, int *array, int ac)
{
    int z = 0;
    int t = 1;

    while (z != ac) {
        array[z] = my_getnbr(argv[t]);
        z ++;
        t ++;
    }
}
