/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:24 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 16:25:53 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("_default")
{
	std::cout << "AAnimal default constructor called" << std::endl;	
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;	
}

AAnimal::AAnimal(const AAnimal & toCopy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = toCopy;	
}

AAnimal & AAnimal::operator=(const AAnimal & other)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal type constructor called" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << _type << " : generic AAnimal noise" << std::endl;
}
