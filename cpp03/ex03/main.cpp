#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	scav1.guardGate();
	
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	
	// FragTrap tests
	FragTrap frag1("Fraggy");
	FragTrap f;

	frag1.attack("Target5");
	frag1.takeDamage(5);
	frag1.beRepaired(3);
	frag1.takeDamage(10);
	frag1.attack("Target6");
	frag1.highFivesGuys();


	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;

	// DiamondTrap tests
	DiamondTrap diamond1("Diamondy");
	// DiamondTrap d;
	diamond1.attack("Target7");
	diamond1.takeDamage(5);
	diamond1.beRepaired(3);
	diamond1.takeDamage(10);
	diamond1.attack("Target8");
	diamond1.whoAmI();


	return 0;
}