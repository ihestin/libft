# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:52:40 by ihestin           #+#    #+#              #
#    Updated: 2017/11/13 11:36:09 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS= -Wall -Werror -Wextra
SRC   = $(wildcard  *.c)
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

