#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// claptrap tests
	ClapTrap clap1("Clappy");
	ClapTrap c;

	clap1.attack("Target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.takeDamage(10);
	clap1.attack("Target2");
	
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	
	// scavtrap tests
	ScavTrap scav1("Scavvy");
	ScavTrap s;

	scav1.attack("Target3");
	scav1.takeDamage(5);
	scav1.beRepaired(3);
	scav1.takeDamage(10);
	scav1.attack("Target4");
}