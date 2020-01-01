#CFLAGS=	-W -Wall -ansi -pedantic -Wextra -Werror -I../inc/
CFLAGS=	-g3 -I../inc/

RM=	rm -rf

NAME=	libmelev.a

SRC=	xmalloc.c	\
	xfree.c		\
	xputchar.c	\
	xputstr.c	\
	xread.c		\
	xstrncmp.c	\
	xstrlen.c

OBJ=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc -c $(CFLAGS) $(SRC)
	ar rv $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) ../

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	clean fclean all
