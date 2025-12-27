#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoint = 100;
	energyPoint = 50;
	Attackdmg = 20;
	std::cout << "scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 50;
	Attackdmg = 20;
	std::cout << "scavtrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "scavtrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoint > 0 && hitPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attackdmg << " points of damage!" << std::endl;
		energyPoint--;
	}
	else
	{
		std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl ;
}
