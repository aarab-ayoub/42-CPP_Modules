
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \

	
OBJS = $(SRCS:.cpp=.o)

NAME = hhh

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp AMateria.hpp ICharacter.hpp Character.hpp Ice.hpp Cure.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
