# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:50:39 by lfilloux          #+#    #+#              #
#    Updated: 2023/03/17 12:59:31 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

HEADER_FILES = PmergeMe.hpp

SRC_FILES = main.cpp \
			PmergeMe.cpp

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