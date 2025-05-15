/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:42:06 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 10:18:56 by lmatkows         ###   ########.fr       */
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
	{
		std::cout << "You ask to equip with a NULL curse" << std::endl;
		return;
	}
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "You just added to your inventory " << _inventory[i]->getType() << std::endl;
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
	else if (!_inventory[idx])
		std::cout << "No curse at this index" << std::endl;
	else
		std::cout << "Incorrect inventory index, should be between 0 and 3" << std::endl;
}
