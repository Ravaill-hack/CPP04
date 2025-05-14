
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		~Character();
		Character(const Character & toCopy);
		Character & operator=(const Character & other);
	
		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);

	private:
		std::string	_name;

};

#endif