# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:29:14 by berard            #+#    #+#              #
#    Updated: 2023/01/27 10:48:24 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		push_swap.c \
				check_error.c \
				utils.c \
				stacks.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				small_operations.c \
				big_operations.c \

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

CFLAGS	=		-Wall -Wextra -Werror -g

NAME	=		push_swap

all: 			$(NAME)

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
