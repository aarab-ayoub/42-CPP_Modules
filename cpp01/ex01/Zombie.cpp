#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}
Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed" << std::endl;
}
void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::AssignName(std::string name)
{
	this->name = name;
}