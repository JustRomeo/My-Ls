/*
** EPITECH PROJECT, 2018
** my_strupcase
** File description:
** Fonction
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
