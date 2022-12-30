# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:29:14 by berard            #+#    #+#              #
#    Updated: 2022/12/30 16:22:11 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		push_swap.c \
				check_error.c \
				utils.c \
				stacks.c \

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

CFLAGS	=		-Wall -Wextra -Werror -g

all: 			push_swap

push_swap:		*.o Printf/libftprintf.a
				$(CC) -o $@ $^

%.o: 			%.c
				$(CC) -c $(CFLAGS) $?

Printf/libftprintf.a:
				@make -C Printf

clean:
				${RM} $(OBJS)
				@make -C Printf clean

fclean:			clean
				${RM} push_swap Printf/libftprintf.a
				@make -C Printf fclean

re: 			fclean all

.PHONY:			all  clean fclean re
