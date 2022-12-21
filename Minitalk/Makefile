# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 14:29:36 by berard            #+#    #+#              #
#    Updated: 2022/12/21 17:43:35 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	server.c client.c \

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -g

all: 		server client

server: 	server.o Printf/libftprintf.a
			$(CC) -o $@ $^

client:		client.o Printf/libftprintf.a
			$(CC) -o $@ $^

%.o: 		%.c
			$(CC) -c $(CFLAGS) $?

Printf/libftprintf.a:
			@make -C Printf

clean:
			rm -f $(OBJS)
			@make -C Printf clean

fclean:		clean
			rm -f server client Printf/libftprintf.a
			@make -C Printf fclean

re: 		fclean all

.PHONY:		all  clean fclean re
