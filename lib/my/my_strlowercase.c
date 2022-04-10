/*
** EPITECH PROJECT, 2018
** my_strlowercase.c
** File description:
** header
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
