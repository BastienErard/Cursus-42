# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:29:14 by berard            #+#    #+#              #
#    Updated: 2023/02/22 15:39:56 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=			fdf.c \
					error_and_free.c \
					parsing.c \
					convert.c \

OBJS	=			$(SRCS:%.c=%.o)

CC		=			gcc

RM		=			rm -f

CFLAGS	=			-Wall -Wextra -Werror -g -w

NAME	=			fdf

all: 				$(NAME)

%.o: 				%.c
					${CC} ${CFLAGS} -Ilibft -I./minilibx -c $? -o $@

${NAME}:			${OBJS}
					@make -C libft
					@make -C minilibx
					${CC} ${CFLAGS} $^ -Llibft -lft -L./minilibx -lmlx -framework OpenGL -framework AppKit -o ${NAME}

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
