#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("zombie1");
	z1->announce();
	randomChump("zombie2");
	z1->~Zombie();
	return 0;
}