#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "default constructor Ice" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	type = obj.type;
	std::cout << "copy constructor Ice" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
	if (this != &obj)
	{
		this->type =obj.type;
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "calling destructor Ice" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}