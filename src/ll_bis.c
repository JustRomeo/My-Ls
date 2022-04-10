/*
** EPITECH PROJECT, 2019
** My_ls
** File description:
** ll_bis.c
*/

#include "prototype.h"

int struct_malloc(printer strct)
{
    strct.link = 0;
    strct.size = 0;
    strct.right = malloc(sizeof(char) * 100);
    strct.users = malloc(sizeof(char) * 100);
    strct.time = malloc(sizeof(char) * 20);
    strct.name = malloc(sizeof(char) * 100);
    strct.right[0] = '\0';
    strct.users[0] = '\0';
    strct.time[0] = '\0';
    strct.name[0] = '\0';
}

int loop(char *dest, char *src, int *t, int *s)
{
    while (src[*s]) {
        dest[*t] = src[*s];
        (*t) ++;
        (*s) ++;
    }
    dest [*t] = ' ';
    (*t) ++;
    (*s) = 0;
}

int user_file(struct dirent *print, struct stat sb, printer *strct)
{
    struct passwd *wd;
    struct group *wp;
    
    wd = getpwuid(sb.st_uid);
    strct->users = wd->pw_name;
    strct->users = my_strcat(strct->users, " ");
    wp = getgrgid(sb.st_uid);
    strct->users = my_strcat(strct->users, wp->gr_name);
}

/*int looper()
{
    if (print->d_name[0] != '.') {
        stat(print->d_name, &sb);
        right(print, sb, &strct[n]);
        link_nbr(print, sb, &strct[n]);
        user_file(print, sb, &strct[n]);
        size_file(print, sb, &strct[n]);
        time_file(print, sb, &strct[n]);
        file_name(print, sb, &strct[n]);
        glob += sb.st_blocks;
    }
    return (0);
}*/

int print_my_struct(printer *strct, int n)
{
    int s = 0;

    while (s != n) {
        my_printf("%s %d ", strct[s].right, strct[s].link);
        my_printf("%s %d\t", strct[s].users, strct[s].size);
        my_printf("%s %s", strct[s].time, strct[s].name);
        s ++;
        if (s != n)
            my_printf("\n");
    }
    return (0);
}
