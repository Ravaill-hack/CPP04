/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:42:01 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 10:19:27 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice(){}

Ice::Ice(const Ice & toCopy) : AMateria(toCopy)
{
	*this = toCopy;
}

Ice & Ice::operator=(const Ice & other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);	
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

