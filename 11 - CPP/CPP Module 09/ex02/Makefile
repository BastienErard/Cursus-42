# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 13:56:46 by berard            #+#    #+#              #
#    Updated: 2024/03/19 18:29:55 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	PmergeMe

SRCS		=	main.cpp \
				PmergeMe.cpp \

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
