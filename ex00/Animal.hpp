
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal & toCopy);
		Animal & operator=(const Animal & other);

		Animal(std::string type);

		virtual void	makeSound() const;

		std::string		getType() const;

	protected:
		std::string		_type;

};

#endif