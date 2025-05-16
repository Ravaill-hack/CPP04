
#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		virtual ~WrongDog();
		WrongDog(const WrongDog & toCopy);
		WrongDog & operator=(const WrongDog & other);

	private:
		std::string		_type;
};

#endif