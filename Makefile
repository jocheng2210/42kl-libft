# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 21:08:23 by jocheng           #+#    #+#              #
#    Updated: 2022/06/01 13:58:23 by jocheng          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 NAME	= libft.a

 SRC	= ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_putchar.c \
			ft_putstr.c \
 

 OBJ	= $(SRC:.c=.o)

 CC		= gcc
 FLAGS	= -Wall -Wextra -Werror
 LIBRARY = libft.h

 all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

 clean:
	rm -fr $(OBJ)
	rm -fr *.out

 fclean: clean
	rm -fr $(NAME)

 norm:
	norminette *.c

 re: fclean all