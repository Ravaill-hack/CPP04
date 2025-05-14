
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource & toCopy);
		MateriaSource & operator=(const MateriaSource & other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);	
};

#endif