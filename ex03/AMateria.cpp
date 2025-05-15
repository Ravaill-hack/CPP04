/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:41:51 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 09:20:10 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined materia") {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria & toCopy)
{
	*this = toCopy;
}

AMateria & AMateria::operator=(const AMateria & other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter & target)
{
	std::cout << " use nothing against " << target.getName() << " (undefined materia's type) " << std::endl;
}
