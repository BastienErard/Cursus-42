# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 16:41:12 by tastybao          #+#    #+#              #
#    Updated: 2023/08/31 16:42:13 by tastybao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	phonebook

SRCS		=	main.cpp \
				Contact.cpp \
				PhoneBook.cpp \

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
