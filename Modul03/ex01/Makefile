# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/11 16:44:34 by aialonso          #+#    #+#              #
#    Updated: 2026/10/19 14:23:44 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = scavtrap

CPP = c++

SOURCE = main.cpp ClapTrap.cpp ScavTrap.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -g3

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