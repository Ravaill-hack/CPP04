
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal & toCopy);
		WrongAnimal & operator=(const WrongAnimal & other);

		WrongAnimal(std::string type);

		void	makeSound() const;

		std::string		getType() const;

	protected:
		std::string		_type;

};

#endif