#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoint(10), energyPoint(10), Attackdmg(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), Attackdmg(0)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoint(other.hitPoint), energyPoint(other.energyPoint), Attackdmg(other.Attackdmg)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		Attackdmg = other.Attackdmg;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{	
	if (energyPoint > 0 && hitPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attackdmg << " points of damage!" << std::endl;
		energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint > 0)
	{
		hitPoint -= amount;
		if (hitPoint < 0)
		{
			hitPoint = 0;
			std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
		}
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoint << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is already out of hit points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint > 0)
	{
		hitPoint += amount;
		std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! Total hit points: " << hitPoint << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is already out of hit points and cannot be repaired!" << std::endl;
	}
}
