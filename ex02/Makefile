NAME = brain

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Abst_Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

HEADERS = Abst_Animal.hpp Brain.hpp Dog.hpp Cat.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
