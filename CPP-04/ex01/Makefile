# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 11:20:00 by lfilloux          #+#    #+#              #
#    Updated: 2022/06/03 11:56:29 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
HEADER_FILES = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRC_FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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