# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 18:06:04 by tastybao          #+#    #+#              #
#    Updated: 2023/10/04 18:06:19 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	Fixed

SRCS		=	main.cpp \
				Fixed.cpp \

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $@ $^ && echo "Compilation successful"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(NAME) && echo "Cleaning complete"

fclean: clean
	@rm -f $(NAME)

re: fclean all
