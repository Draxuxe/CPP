# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 09:47:33 by lfilloux          #+#    #+#              #
#    Updated: 2022/06/07 10:29:20 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
HEADER_FILES = ICharacter.hpp Character.hpp AMateria.hpp Cure.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp
SRC_FILES = main.cpp Character.cpp Ice.cpp Cure.cpp AMateria.cpp MateriaSource.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = c++
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