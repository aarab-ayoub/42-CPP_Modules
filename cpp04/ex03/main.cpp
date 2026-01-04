
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int	main(void)
{
	Character	bob("Bob");
	ICharacter* jim = new Character("Jim");

	std::cout << "Character 1: " << bob.getName() << std::endl;
	std::cout << "Character 2: " << jim->getName() << std::endl;

	bob.equip(new Ice());
	bob.equip(new Cure());

	bob.use(0, *jim);
	bob.use(1, *jim);

	bob.unequip(0);

	delete jim;
	return 0;
}