#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int Attackdmg;
public:
	ClapTrap(); // Default constructor
	ClapTrap(std::string name); // Parameterized constructor
	ClapTrap(const ClapTrap& other); // Copy constructor
	ClapTrap& operator=(const ClapTrap& other); // Copy assignment operator
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif