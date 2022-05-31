 NAME	= libft.a

 SRC	= ft_isdigit.c ft_isalpha.c

 OBJ	= ${SRC:.c=.o}

 FLAGS	= -Wall -Wextra -Werror

 all: ${NAME}
	ar -rc ${NAME} ${OBJ}

 $(NAME):
	gcc ${FLAGS} -c ${SRC}

 clean:
	rm -fr *.o
	rm -fr *.out

 fclean: clean
	rm -fr ${NAME}

 re: fclean all