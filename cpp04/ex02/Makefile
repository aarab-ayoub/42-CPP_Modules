CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Animal

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
