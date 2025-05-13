/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 16:28:06 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _type("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;	
}

Dog::Dog(const Dog & toCopy) : Animal(toCopy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout <<  _type << " : RRRRwaaaaAAAF" << std::endl;
}