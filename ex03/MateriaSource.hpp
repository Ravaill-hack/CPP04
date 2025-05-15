
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
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource & toCopy);
		MateriaSource & operator=(const MateriaSource & other);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	
	private:
		AMateria*	_materiaBook[4];

};

#endif