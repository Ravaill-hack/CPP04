/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:24 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/16 10:10:00 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("_default")
{
	std::cout << "Wrong animal default constructor called" << std::endl;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called" << std::endl;	
}

WrongAnimal::WrongAnimal(const WrongAnimal & toCopy)
{
	std::cout << "Wrong animal copy constructor called" << std::endl;
	*this = toCopy;	
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << "Wrong animal assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Wrong animal type constructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << _type << " : wrong generic animal noise" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (_type);
}

