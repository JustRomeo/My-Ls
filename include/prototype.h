/*
** EPITECH PROJECT, 2018
** prototype.h
** File description:
** HEADER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <pwd.h>
#include <time.h>
#include <grp.h>
#include <dirent.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "my.h"
#include "structures.h"

int check_flag(char c, DIR *fd, char *filepath);
int my_ls(int ac, char **argv);

int right(struct dirent *print, struct stat sb, printer *strct);

int ld(DIR *fd);
int ll(DIR *fd, char *filepath);
int lr(DIR *fd);
int ls(DIR *fd);

int loop(char *dest, char *src, int *t, int *s);
int user_file(struct dirent *print, struct stat sb, printer *strct);
int struct_malloc(printer strct);
char *file_name(struct dirent *print, struct stat sb, printer *strct);
int link_nbr(struct dirent *print, struct stat sb, printer *strct);
int time_file(struct dirent *print, struct stat sb, printer *strct);
int size_file(struct dirent *print, struct stat sb, printer *strct);
int print_my_struct(printer *strct, int n);
