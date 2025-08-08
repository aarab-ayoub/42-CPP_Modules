
CPP = c++

FLAGS = -Wall -Werror -Werror -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Account

all:$(NAME)

$(NAME): $(OBJ) Account.hpp
	$(CPP) $(FLAGS) -c $(SRC) -o $(OBJ)

%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean:clean
	rm $(NAME)

.PHONY:
	clean
