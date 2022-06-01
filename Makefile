# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 21:08:23 by jocheng           #+#    #+#              #
#    Updated: 2022/06/01 11:16:22 by jocheng          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 NAME	= libft.a

 SRC	= ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
 

 OBJ	= ${SRC:.c=.o}

 CC		= gcc
 FLAGS	= -Wall -Wextra -Werror
 LIBRARY = libft.h

 all: ${NAME}

$(NAME): $(OBJ)
	ar -rc ${NAME} ${OBJ}

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

 clean:
	rm -fr $(OBJ)
	rm -fr *.out

 fclean: clean
	rm -fr ${NAME}

norm:
	norminette *.c

 re: fclean all