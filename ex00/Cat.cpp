/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:41 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 16:28:18 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _type("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;	
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;	
}

Cat::Cat(const Cat & toCopy) : Animal(toCopy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout <<  _type << " : Rrremiaou" << std::endl;
}