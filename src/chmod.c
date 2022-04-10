/*
** EPITECH PROJECT, 2019
** chmod.c
** File description:
** chmod checker
*/

#include "prototype.h"

char *user_right(struct dirent *print, struct stat sb)
{
    char *str = malloc(sizeof(char) * 4);

    if (sb.st_mode & S_IRUSR)
        str[0] = 'r';
    else
        str[0] = '-';
    if (sb.st_mode & S_IWUSR)
        str[1] = 'w';
    else
        str[1] = '-';
    if (sb.st_mode & S_IXUSR)
        str[2] = 'x';
    else
        str[2] = '-';
    str[3] = '\0';
    return (str);
}

char *gr_right(struct dirent *print, struct stat sb)
{
    char *str = malloc(sizeof(char) * 5);

    if (sb.st_mode & S_IRGRP)
        str[0] = 'r';
    else
        str[0] = '-';
    if (sb.st_mode & S_IWGRP)
        str[1] = 'w';
    else
        str[1] = '-';
    if (sb.st_mode & S_IXGRP)
        str[2] = 'x';
    else
        str[2] = '-';
    str[3] = '\0';
    return (str);
}

char *other_right(struct dirent *print, struct stat sb)
{
    char *str = malloc(sizeof(char) * 5);

    if (sb.st_mode & S_IROTH)
        str[0] = 'r';
    else
        str[0] = '-';
    if (sb.st_mode & S_IWOTH)
        str[1] = 'w';
    else
        str[1] = '-';
    if (sb.st_mode & S_IXOTH)
        str[2] = 'x';
    else
        str[2] = '-';
    str[3] = '.';
    str[4] = '\0';
    return (str);
}

char *type(struct dirent *print, struct stat sb)
{
    char *str = malloc(sizeof(char) * 2);
    if (S_ISDIR(sb.st_mode) != 0)
        str[0] = 'd';
    else
        str[0] = '-';
    str[1] = '\0';
    return (str);
}

int right(struct dirent *print, struct stat sb, printer *strct)
{
    if (print->d_name[0] != '.') {
        strct->right = type(print, sb);
        strct->right = my_strcat(strct->right, user_right(print, sb));
        strct->right = my_strcat(strct->right, gr_right(print, sb));
        strct->right = my_strcat(strct->right, other_right(print, sb));
    }
    return (0);
}
