/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:24 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/16 10:10:52 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Animal default constructor called" << std::endl;	
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;	
}

Animal::Animal(const Animal & toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;	
}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << _type << " : generic animal noise" << std::endl;
}

std::string		Animal::getType() const
{
	return (_type);
}
