#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{
	protected:
		std::string type;
	public:
		Character();
		Character(Character const & other);
		Character & operator=(Character const & other);
		virtual ~Character();
};

#endif