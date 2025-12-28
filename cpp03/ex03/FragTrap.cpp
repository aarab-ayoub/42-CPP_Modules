#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Default constructor called for " << name << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Parameterized constructor called for " << name << std::endl;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap Copy constructor called for " << name << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	std::cout << "FragTrap Copy assignment operator called for " << name << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called for " << name << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}