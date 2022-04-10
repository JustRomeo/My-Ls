/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** gcc test.c -I../include -L../lib/my -lmy --coverage -lcriterion && clear && ./a.out
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>

#include "prototype.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_ls, test_ls_1, .init = redirect_all_std)
{
    cr_assert_eq(my_ls(1, "my_ls"), 0);
}
