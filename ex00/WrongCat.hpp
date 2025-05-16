
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat & toCopy);
		WrongCat & operator=(const WrongCat & other);

	private:
		std::string		_type;
};

#endif