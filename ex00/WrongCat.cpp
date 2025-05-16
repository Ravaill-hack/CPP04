/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:41 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/16 10:06:15 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat"), _type("Cat")
{
	std::cout << "Wrong cat default constructor called" << std::endl;	
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;	
}

WrongCat::WrongCat(const WrongCat & toCopy) : WrongAnimal(toCopy)
{
	std::cout << "Wrong cat copy constructor called" << std::endl;
	*this = toCopy;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
	std::cout << "Wrong cat assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}
