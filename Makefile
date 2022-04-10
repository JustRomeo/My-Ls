##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## My_Sokoban
##

SRCF = src/

SRC =	$(SRCF)base.c		\
		$(SRCF)check.c		\
		$(SRCF)chmod.c		\
		$(SRCF)ld.c			\
		$(SRCF)ll.c			\
		$(SRCF)ll_bis.c		\
		$(SRCF)lr.c			\
		$(SRCF)ls.c			\
		$(SRCF)main.c		\

SRCC =	main.c	\

OBJ =	$(SRC:.c=.o)
OBJC =	$(SRCC:.c=.o)

NAME =	my_ls
CRITERION = unit_tests

CFLAGS = -I./include -L./lib/my -lmy

CUR = -lncurses
CRIT = --coverage -lcriterion
WALL = -Wall -Wextra -Werror
VALGRIND = -g3

ARGUMENTS =

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CUR) $(WALL)
			rm -f $(OBJ)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a

exe:		$(NAME)
			clear
			./$(NAME)

valgrind:	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $($(CFLAGS)) $(CUR) $(VALGRIND)
			rm -f $(OBJ)
			valgrind ./$(NAME) $(ARGUMENTS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../lib/my/libmy.a
	rm -f lib/my/libmy.a

re: fclean all

error:		$(NAME)
			clear
			./$(NAME) maps/errormap

tests_run:	$(OBJC)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJC) $(INC) $(LIB) $(CUR) $(CRIT)
			rm -f $(OBJC)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)

coverage:	$(OBJC)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJC) $(INC) $(LIB) $(CUR) $(CRIT)
			rm -f $(OBJC)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)
			gcovr
