# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 14:29:36 by berard            #+#    #+#              #
#    Updated: 2022/12/22 18:20:20 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		server.c client.c \

SRCSB	=		server_bonus.c client_bonus.c \

OBJS	=		$(SRCS:.c=.o)

OBJSB	=		$(SRCSB:.c=.0)

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror -g

all: 			server client server_bonus client_bonus

server: 		server.o Printf/libftprintf.a
				$(CC) -o $@ $^

server_bonus:	server_bonus.o Printf/libftprintf.a
				$(CC) -o $@ $^

client:			client.o Printf/libftprintf.a
				$(CC) -o $@ $^

client_bonus:	client_bonus.o Printf/libftprintf.a
				$(CC) -o $@ $^

%.o: 			%.c
				$(CC) -c $(CFLAGS) $?

Printf/libftprintf.a:
				@make -C Printf

clean:
				rm -f $(OBJS)
				rm -f $(OBJSB)
				@make -C Printf clean

fclean:			clean
				rm -f server client Printf/libftprintf.a
				rm -f server_bonus client_bonus
				@make -C Printf fclean

re: 			fclean all

.PHONY:			all  clean fclean re
