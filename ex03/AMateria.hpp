
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected :

	public :
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria & toCopy);
		AMateria & operator=(const AMateria & other);

		AMateria(std::string const & type);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual	void use(ICharacter & target);
};

#endif