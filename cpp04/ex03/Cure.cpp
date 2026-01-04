#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << "default constructor Cure" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	type = obj.type;
	std::cout << "copy constructor Cure" << std::endl;
}

Cure& Cure::operator=(const Cure &obj)
{
	if (this != &obj)
	{
		this->type =obj.type;
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "calling destructor Cure" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}