# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/26 19:46:35 by aialonso          #+#    #+#              #
#    Updated: 2026/04/27 13:19:57 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CPP = c++

SOURCE = Contact.cpp\
		 PhoneBook.cpp\
		 main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJECTS = $(SOURCE:.cpp=.o)

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

all:$(NAME)

$(NAME):$(OBJECTS)
	$(CPP) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

rclean:
	rm -f $(OBJECTS)

re:fclean all rclean

.DEFAULT_GOAL=all