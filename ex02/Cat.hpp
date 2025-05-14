
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat & toCopy);
		Cat & operator=(const Cat & other);

		void			makeSound() const;

	private:
		std::string		_type;
		Brain			*_Brain;
		void			newBrain();
};

#endif