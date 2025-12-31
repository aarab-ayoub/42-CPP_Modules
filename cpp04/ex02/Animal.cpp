#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) : type(obj.type){
	std::cout<< "Animal copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout<< "Animal copy assignement" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return type;
}