# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 15:16:24 by lfilloux          #+#    #+#              #
#    Updated: 2022/05/19 11:41:40 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC_FILES = megaphone.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = c++
CPP_FLAGS =  -Wall -Wextra -Werror --std=c++98

all: $(NAME)

$(OBJ_FILES):$(SRC_FILES)
	$(CPP) $(CPP_FLAGS) -o $< -c $@

$(NAME): $(OBJ_FILES)
	$(CPP) $(OBJ_FILES) -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean