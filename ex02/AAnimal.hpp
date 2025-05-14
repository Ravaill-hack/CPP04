
#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal & toCopy);
		AAnimal & operator=(const AAnimal & other);

		AAnimal(std::string type);

		virtual void	makeSound() const = 0;

	protected:
		std::string		_type;

};

#endif