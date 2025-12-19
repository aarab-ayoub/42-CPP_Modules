#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap& operator=(const ScavTrap &obj);
	~ScavTrap();

	void attack();
	
};

#endif