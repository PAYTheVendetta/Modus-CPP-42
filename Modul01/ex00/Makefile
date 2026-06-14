# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/11 17:34:42 by aialonso          #+#    #+#              #
#    Updated: 2026/06/11 17:35:48 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

CPP = c++

SOURCE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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