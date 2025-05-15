/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:41:55 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 09:17:44 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::~Cure(){}

Cure::Cure(const Cure & toCopy) : AMateria(toCopy)
{
	*this = toCopy;
}

Cure & Cure::operator=(const Cure & other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

