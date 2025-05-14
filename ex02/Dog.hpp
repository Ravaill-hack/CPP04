
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog & toCopy);
		Dog & operator=(const Dog & other);

		void			makeSound() const;

	private:
		std::string		_type;
		Brain			*_Brain;
		void			newBrain();
};

#endif