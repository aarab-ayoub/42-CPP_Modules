#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		storage[i] = NULL;
	std::cout << "default constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.storage[i] != NULL)
			storage[i] = other.storage[i]->clone();
		else
			storage[i] = NULL;
	}
	std::cout << "copy constructor MateriaSource" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (storage[i] != NULL)
			{
				delete storage[i];
				storage[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.storage[i] != NULL)
				storage[i] = other.storage[i]->clone();
			else
				storage[i] = NULL;
		}
		
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] != NULL)
			delete storage[i];
	}
	std::cout << "calling destructor MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if(m == NULL)
		return ;
	
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] == NULL)
		{
			storage[i] = m->clone();
			std::cout << "learned materia of type: " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "storage is full, cannot learn more materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if(storage[i] && storage[i]->getType() == type)
		{
			std::cout << "creating materia of type: " << type << std::endl;
			return storage[i]->clone();
		}
		std::cout << "no materia of type: " << type << " found in storage" << std::endl;
	}
	return NULL;
}