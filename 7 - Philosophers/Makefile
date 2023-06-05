# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:09:34 by berard            #+#    #+#              #
#    Updated: 2023/06/05 14:07:14 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=			philosophers.c \
					errors.c \
					utils.c \
					time.c \
					actions.c \
					threads.c \
					logs_and_forks.c \

OBJS	=			${SRCS:.c=.o}

CC		=			gcc -g3

RM		=			rm -f

# CFLAGS	=			-Wall -Wextra -Werror -g

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
