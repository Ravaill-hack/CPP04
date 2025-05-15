/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:42:06 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 09:42:16 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined name")
{
	int	i = 0;

	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

Character::~Character()
{
	int	i = 0;

	while (i < 4)
	{
		delete _inventory[i];
		i++;
	}
}

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
	
Character::Character(const std::string name) : _name(name)
{
	int	i = 0;

	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	i = 0;

	if (m == NULL)
		return;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return;
		}
		i++;
	}
	std::cout << "You can't equip cause inventory is already full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
	else
		std::cout << "Incorrect inventory index, should be between 0 and 3" << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "Incorrect inventory index, should be between 0 and 3" << std::endl;
}
