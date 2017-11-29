# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:52:40 by ihestin           #+#    #+#              #
#    Updated: 2017/11/15 16:10:25 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS= -Wall -Werror -Wextra
SRC   = ft_atoi.c ft_strcmp.c ft_strdup.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strlcpy.c \
		ft_strcat.c ft_strncat.c ft_strlcat.c ft_strstr.c
OBJ = $(SRC:.c=.o)
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	$(CC)   -o $@ -c  $< $(CFLAGS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

