# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 13:58:31 by lfilloux          #+#    #+#              #
#    Updated: 2022/06/01 16:27:33 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap
HEADER_FILES = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = g++
CPP_FLAGS =  -Wall -Wextra -Werror -Wshadow -Wno-shadow --std=c++98

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