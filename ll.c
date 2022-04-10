/*
** EPITECH PROJECT, 2019
** ll.c
** File description:
** ll.c
*/

#include "include/prototype.h"

static int glob = 0;

int size_file(struct dirent *print, struct stat sb, printer *strct)
{
    int v = sb.st_size;

    if (print->d_name[0] != '.')
        strct->size = v;
    return (v);
}

int time_file(struct dirent *print, struct stat sb, printer *strct)
{
    int s = 0;
    int t = 0;
    char *str = ctime(&sb.st_mtime);
    char *time = malloc(sizeof(char) * 25);

    while (str[s]) {
        if (s > 3 && s != 7 && s != 24 && s != 16 && s < 17) {
            if (s == 8) {
                time[t] = ' ';
                t ++;
            }
            time[t] = str[s];
            t ++;
        }
        s ++;
    }
    time[t] = '\0';
    strct->time = time;
}

int link_nbr(struct dirent *print, struct stat sb, printer *strct)
{
    int r = sb.st_nlink;

    if (print->d_name[0] != '.')
        strct->link = r;
    return (r);
}

char *file_name(struct dirent *print, struct stat sb, printer *strct)
{
    if (S_ISDIR(sb.st_mode) != 0 && print->d_name[0] != '.') {
        strct->name = "\e[34m";
        strct->name = my_strcat(strct->name, print->d_name);
        strct->name = my_strcat(strct->name, "\e[0m");
    }
    else if (print->d_name[0] != '.')
        strct->name = print->d_name;
}

int ll(DIR *fd, char *filepath)
{
    struct dirent *print;
    struct stat sb;
    printer strct[200];
    int n = 0;
    
    struct_malloc(strct[n]);
    print = readdir(fd);
    while (print != NULL) {
        if (print->d_name[0] != '.') {
            stat(print->d_name, &sb);
            right(print, sb, &strct[n]);
            link_nbr(print, sb, &strct[n]);
            user_file(print, sb, &strct[n]);
            size_file(print, sb, &strct[n]);
            time_file(print, sb, &strct[n]);
            file_name(print, sb, &strct[n]);
            glob += sb.st_blocks;
            n ++;
        }
        struct_malloc(strct[n]);
        print = readdir(fd);
    }
    my_printf("total %d\n", glob/2);
    print_my_struct(strct, n);
}
