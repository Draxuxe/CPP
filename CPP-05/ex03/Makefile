# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 11:13:25 by lfilloux          #+#    #+#              #
#    Updated: 2022/06/09 11:58:03 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
HEADER_FILES = Bureaucrat.hpp Form.hpp		\
			   ShrubberyCreationForm.hpp	\
			   RobotomyRequestForm.hpp		\
			   PresidentialPardonForm.hpp	\
			   Intern.hpp

SRC_FILES = main.cpp							\
			Bureaucrat.cpp						\
			Form.cpp ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp				\
			PresidentialPardonForm.cpp			\
			Intern.cpp

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