/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 11:44:42 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _type("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	newBrain();	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _Brain;	
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
		*(this->_Brain) = *(other._Brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout <<  _type << " : RRRRwaaaaAAAF" << std::endl;
}

void	Dog::newBrain()
{
	std::cout << "Brain allocation called" << std::endl;
	_Brain = new Brain();
}