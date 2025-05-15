
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

		void use(ICharacter & target);
		Cure* clone() const;

	private:

};

#endif