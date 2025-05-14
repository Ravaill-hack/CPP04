/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:42:06 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 15:26:11 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::~Character(){}

Character::Character(const Character & toCopy)
{
	*this = toCopy;
}

Character & Character::operator=(const Character & other)
{
	if (this != &other)
	{
		this->_name = other._name;
		*(this->_inventory) = *(other._inventory);
	}
	return (*this);
}
	
Character::Character(std::string name) : _name(name){}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	while()
	{
		
	}
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter & target)
{
	std::cout << target.getName() << " use " << target. << std::endl;
}
