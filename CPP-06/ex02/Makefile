NAME = real

HEADER_FILES = Base.hpp	\
			   A.hpp	\
			   B.hpp	\
			   C.hpp

SRC_FILES = main.cpp	\
			Base.cpp	\
			A.cpp		\
			B.cpp		\
			C.cpp

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