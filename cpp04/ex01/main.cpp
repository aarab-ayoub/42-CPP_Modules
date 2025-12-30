#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal *Animals[4];
	
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		Animals[i]->makeSound();
	}

	for (int i = 0; i < 4; i++)
	{
		delete Animals[i];
	}
	
	std::cout << "----- Deep Copy Test -----" << std::endl;
	Dog a;
	Dog b = a;


	return 0;
}