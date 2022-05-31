 NAME = libft.a

 SRC = ft_isdigit.c ft_isalpha.c

 OBJ = ${SRC:.c=.o}

 FLAGS = -Wall -Wextra -Werror
 
 all	: ${NAME}
	cc ${FLAGS} ${OBJ}

 $(NAME): ${OBJ}
	ar -rc $(NAME) ${OBJ}

 clean	:
	rm -fr ${OBJ}

 fclean	: clean
 	rm -fr ${NAME}

 re		: fclean all