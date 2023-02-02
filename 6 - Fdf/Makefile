# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:29:14 by berard            #+#    #+#              #
#    Updated: 2023/02/02 16:56:59 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		fdf.c \

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

CFLAGS	=		-Wall -Wextra -Werror -g

NAME	=		fdf

all: 			$(NAME)

fdf:			*.o libft/libft.a
				*.o minilibx/libmlx.a
				$(CC) -o $@ $^

%.o: 			%.c
				$(CC) -c $(CFLAGS) $?

libft/libft.a:
				@make -C libft

clean:
				${RM} $(OBJS)
				@make -C libft clean

fclean:			clean
				${RM} fdf libft/libft.a
				@make -C libft fclean

re: 			fclean all

.PHONY:			all  clean fclean re
