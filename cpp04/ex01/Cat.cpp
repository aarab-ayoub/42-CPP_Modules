#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj) {
	brain = new Brain(*obj.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout<< "Cat copy assignement" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		*brain = *obj.brain;
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
