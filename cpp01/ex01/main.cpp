#include "Zombie.hpp"

int main()
{
	int N = 5;
	for (int i = 0; i < N; i++)
	{
		Zombie z;
		z.AssignName("stack_zombie_" + std::to_string(i + 1));
		z.announce();
	}
	Zombie* horde = zombieHorde(N, "heap_zombie");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}