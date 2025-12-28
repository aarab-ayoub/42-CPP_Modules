#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) 
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : FragTrap(other), ScavTrap(other), name(other.name) {
    std::cout << "DiamondTrap " << name << " copied." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}