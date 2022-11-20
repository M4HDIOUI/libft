# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:19:47 by omahdiou          #+#    #+#              #
#    Updated: 2022/11/16 00:20:18 by omahdiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= cc

CFLAGS= -Wall -Wextra -Werror  

HDR = libft.h

SRC = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c	\
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_split.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all