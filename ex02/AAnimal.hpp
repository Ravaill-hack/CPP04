
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal & toCopy);
		AAnimal & operator=(const AAnimal & other);

		AAnimal(std::string type);

		virtual void	makeSound() const;

	protected:
		std::string		_type;

};

#endif