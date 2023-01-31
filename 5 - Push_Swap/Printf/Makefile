# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berard <berard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 09:57:23 by berard            #+#    #+#              #
#    Updated: 2022/12/19 14:10:35 by berard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_print_c.c ft_print_s.c \
			ft_print_percent.c ft_print_di.c \
			ft_print_u.c ft_print_x.c ft_print_xx.c ft_print_p.c \

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a

LIBFT	= libft

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -g

.c.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
			@make clean -C $(LIBFT)

fclean:		clean
			${RM} ${NAME}
			@$(RM) -f $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re
