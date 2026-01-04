#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	std::cout << "Character " << this->name << " constructed." << std::endl;
}

Character::Character(const Character &obj)
{
	name = obj.name;
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character " << this->name << " copy constructed." << std::endl;
}

Character & Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		name = obj.name;		
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
			{	
				delete inventory[i];
				inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (obj.inventory[i])
				inventory[i] = obj.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character " << this->name << " destructed." << std::endl;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if(!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}


void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if(idx < 0 || idx >= 4)
		return ;
	if (inventory[idx])
		inventory[idx]->use(target);
}
