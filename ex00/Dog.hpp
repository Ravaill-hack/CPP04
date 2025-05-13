
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog & toCopy);
		Dog & operator=(const Dog & other);

		void			makeSound() const;

	private:
		std::string		_type;
};

#endif