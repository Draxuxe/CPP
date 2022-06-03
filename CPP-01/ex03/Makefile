# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 11:42:32 by lfilloux          #+#    #+#              #
#    Updated: 2022/05/20 11:43:27 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = war
HEADER_FILES = HumanA.hpp HumanB.hpp Weapon.hpp
SRC_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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