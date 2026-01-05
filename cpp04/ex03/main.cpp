#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp_ice = new Ice();
	AMateria* tmp_cure = new Cure();
	src->learnMateria(tmp_ice);
	src->learnMateria(tmp_cure);

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete tmp_ice;
	delete tmp_cure;
	delete bob;
	delete me;
	delete src;

	return 0;
	/////////////////////////////////////////////////
	// MateriaSource creation
	// IMateriaSource* src = new MateriaSource();

	// // learn templates
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// // Character creation
	// ICharacter* me = new Character("me");
	// ICharacter* bob = new Character("bob");

	// // Factory behavior test
	// AMateria* ice = src->createMateria("ice");
	// AMateria* cure = src->createMateria("cure");

	// // ownership transferred to Character
	// me->equip(ice);
	// me->equip(cure);

	// // Polymorphism test
	// me->use(0, *bob); // Ice::use
	// me->use(1, *bob); // Cure::use

	// // Unequip test
	// me->unequip(0);
	// // ice pointer still exists but not owned anymore

	// // Cleanup (destructors)
	// delete bob;
	// delete me;
	// delete src;
}
