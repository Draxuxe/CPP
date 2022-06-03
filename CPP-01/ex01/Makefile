# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 11:03:26 by lfilloux          #+#    #+#              #
#    Updated: 2022/05/20 11:04:02 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moar_brainz
HEADER_FILES = Zombie.hpp
SRC_FILES = main.cpp Zombie.cpp zombieHorde.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = g++
CPP_FLAGS =  -Wall -Wextra -Werror --std=c++98

all: $(NAME)

%.o: %.cpp $(HEADER_FILES)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	$(CPP) $(OBJ_FILES) -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean