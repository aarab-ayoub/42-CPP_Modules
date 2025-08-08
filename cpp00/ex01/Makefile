
CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp

OBJ=$(SRC:.cpp=.o)

NAME = PhoneBook

all:$(NAME)

$(NAME):$(OBJ) Contact.hpp
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean:
	rm $(OBJ) $(NAME)

.PHONY: all clean fclean