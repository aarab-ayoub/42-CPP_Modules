#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("zombie1");
	z1->announce();
	z1->~Zombie();
	return 0;
}