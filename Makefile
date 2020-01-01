CFLAGS=	-W -Wall -ansi -pedantic -Wextra -Werror -Iinc/
#CFLAGS=	-g3 -Iinc/

LDFLAGS=-L. -lmelev
LIBS=	libmelev.a

NAME=	melev

RM=	rm -rf

SRC=	src/main.c		\
	src/pwd.c		\
	src/buffer.c		\
	src/prompt.c		\
	src/my_str_to_wordtab.c	\
	src/env.c		\
	src/path.c

OBJ=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBS)

re:	clean fclean all
