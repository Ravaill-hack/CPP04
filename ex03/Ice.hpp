
#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice & toCopy);
		Ice & operator=(const Ice & other);

		void use(ICharacter & target);
		Ice* clone() const;

	private:

};

#endif