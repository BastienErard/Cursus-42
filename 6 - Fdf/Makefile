# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:29:14 by berard            #+#    #+#              #
#    Updated: 2023/02/10 18:14:19 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=			fdf.c \

OBJS	=			$(SRCS:.c=.o)

CC		=			gcc

RM		=			rm -f

CFLAGS	=			-Wall -Wextra -Werror -g

NAME	=			fdf

all: 				$(NAME)

%.o: 				%.c
					$(CC) -c $(CFLAGS) $?

${NAME}:			*.o libft/libft.a minilibx/libmlx.a
					$(CC) -o $@ $^

libft/libft.a:
					@make -C libft

minilibx/libmlx.a:
					@make -C minilibx

clean:
					${RM} $(OBJS)
					@make -C libft clean
					@make -C minilibx clean

fclean:				clean
					${RM} fdf libft/libft.a
					@make -C libft fclean
					@make -C minilibx fclean

re: 				fclean all

.PHONY:				all  clean fclean re
