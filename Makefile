# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 21:08:23 by jocheng           #+#    #+#              #
#    Updated: 2022/06/24 20:45:20 by jocheng          ###   ########.fr        #
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
			ft_strrchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

 BONUS	= ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

 OBJ	= $(SRC:.c=.o)

 BONUS_OBJ	= $(BONUS:.c=.o)

 CC		= gcc
 FLAGS	= -Wall -Wextra -Werror
 LIBRARY = libft.h

 all: $(NAME)
 
 $(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

 %.o: %.c
	$(CC) -I. $(FLAGS) $< -c -o $@
	@echo "\033[1A\033[2K\033[1A"

 bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

 clean:
	rm -fr $(OBJ) $(BONUS_OBJ)

 fclean: clean
	rm -fr $(NAME)

 re: fclean all

 .PHONY: all clean fclean re bonus