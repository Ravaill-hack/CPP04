
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

		Ice(std::string const & type);

		std::string const & getType() const;

		Ice* clone() const;
		void use(Ice & target);
	private:

};

#endif