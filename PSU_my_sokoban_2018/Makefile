##
## EPITECH PROJECT, 2018
## makekile
## File description:
## makefile printf
##

NAME	=	my_sokoban

SRC	=	src/my_sokoban.c	\
		src/tab_mal.c		\
		src/x_lenght.c		\
		src/y_lenght.c		\
		src/my_putstr.c		\
		src/key_down.c		\
		src/key_left.c		\
		src/key_right.c		\
		src/key_up.c		\
		src/h_flag.c		\
		src/counting_o.c	\
		src/contours.c		\
		src/win.c		\
		src/seeking_p.c		\
		src/bad_conditions.c	\
		src/max_lenght.c	\
		src/losing_conditions.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -lncurses

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	clean fclean all
