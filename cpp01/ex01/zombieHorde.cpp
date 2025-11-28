#include "Zombie.hpp"

Zombie *zombieHorde(int n)
{
	if(n <= 0)
		return NULL;
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	return horde;
}
void Zombie::AssignName(std::string name)
{
	this->name = name;
}