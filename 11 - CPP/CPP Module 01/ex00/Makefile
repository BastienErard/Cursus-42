# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 10:20:53 by tastybao          #+#    #+#              #
#    Updated: 2023/09/06 10:42:59 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	BraiiiiiiinnnzzzZ

SRCS		=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \

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
