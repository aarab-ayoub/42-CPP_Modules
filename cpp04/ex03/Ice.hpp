#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice &obj);
	Ice &operator=(const Ice &obj);
	virtual ~Ice();
	
	virtual AMateria* clone() const;
};
#endif