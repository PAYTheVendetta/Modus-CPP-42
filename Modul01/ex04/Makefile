# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 18:29:40 by aialonso          #+#    #+#              #
#    Updated: 2026/06/14 19:46:47 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CPP = c++

SOURCE = main.cpp

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