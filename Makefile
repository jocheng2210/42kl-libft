 NAME = libft.a

 SRC = ft_isdigit.c ft_isalpha.c

 OBJ = $(SRC:.c=.o)
 
 all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

 clean:
	rm -f $(OBJ)

 fclean: clean
	rm -f $(NAME)

 re: