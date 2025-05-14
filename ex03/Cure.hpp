
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure & toCopy);
		Cure & operator=(const Cure & other);

		Cure(std::string const & type);

		std::string const & getType() const;

		Cure* clone() const;
		void use(Cure & target);

	private:

};

#endif