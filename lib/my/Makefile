##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Le Makefile de la lib
##

SRC =	my_binary.c	\
		my_getdouble.c	\
		my_getlong.c	\
		my_getnbr.c	\
		my_hexa.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_octal.c	\
		my_params_to_list.c	\
		my_print_array.c	\
		my_printf.c	\
		my_put_arg_in_array.c	\
		my_putchar.c	\
		my_put_double.c	\
		my_put_float.c	\
		my_putint_in_str.c	\
		my_put_long.c	\
		my_put_nbr.c	\
		my_putpointer.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowercase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_putspecstr.c	\

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a
NAME2 = my.h

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			rm -f $(OBJ)

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)

re: fclean all
