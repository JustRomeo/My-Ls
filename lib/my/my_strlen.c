/*
** EPITECH PROJECT, 2018
** StrLen
** File description:
** Fonction StrLen
*/

int my_strlen(char const *str)
{
    int i = 0;;

    while (str[i])
        i++;
    return (i);
}
