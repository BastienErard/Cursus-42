# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 11:15:04 by berard            #+#    #+#              #
#    Updated: 2022/12/19 14:10:35 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	server.c client.c \

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -g

.c.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}


all: server client


server: server.o libft/libft.a
	$(CC) -o $@ $^

client: client.o libft/libft.a
	$(CC) -o $@ $^



libft/libft.a:
	make -C libft

clean:
	rm -f $(OBJECTS)
	make -C libft clean

fclean:		clean
			${RM} ${NAME}
			@${RM} -f $(LIBFT)/
	rm -f server client libft/libft.a

re:			fclean all

.PHONY:		all clean fclean re
