#include "Character.hpp"

Character::Character() : type("default")
{
	std::cout << "Character default constructor called" << std::endl;
}


Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}
