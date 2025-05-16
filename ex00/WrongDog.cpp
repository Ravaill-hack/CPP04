/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/16 10:05:55 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("Dog"), _type("Dog")
{
	std::cout << "Wrong dog default constructor called" << std::endl;	
}

WrongDog::~WrongDog()
{
	std::cout << "Wrong dog destructor called" << std::endl;	
}

WrongDog::WrongDog(const WrongDog & toCopy) : WrongAnimal(toCopy)
{
	std::cout << "Wrong dog copy constructor called" << std::endl;
	*this = toCopy;
}

WrongDog & WrongDog::operator=(const WrongDog & other)
{
	std::cout << "Wrong dog assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}