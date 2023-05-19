# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:09:34 by berard            #+#    #+#              #
#    Updated: 2023/05/19 14:38:04 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=			philosophers.c \
					errors.c \
					utils.c \
					time.c \

OBJS	=			${SRCS:.c=.o}

CC		=			gcc -g3

RM		=			rm -f

CFLAGS	=			-Wall -Wextra -Werror -g

NAME	=			philo

all: 				$(NAME)

%.o: 				%.c
					${CC} ${CFLAGS} -c -o $@ $<

${NAME}:			${OBJS}
					${CC} ${CFLAGS} $^ -o $(NAME)

clean:
					${RM} $(OBJS)

fclean:				clean
					${RM} ${NAME}

re: 				fclean all

.PHONY:				all  clean fclean re
