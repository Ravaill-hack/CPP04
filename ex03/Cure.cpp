/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:41:55 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 15:14:15 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{

}

Cure::~Cure()
{
	
}

Cure::Cure(const Cure & toCopy) : AMateria(toCopy)
{
	
}

Cure & Cure::operator=(const Cure & other)
{
	
}

Cure::Cure(std::string const & type)
{
	
}

std::string const & Cure::getType() const
{
	
}

Cure* Cure::clone() const
{
	
}

void Cure::use(Cure & target)
{

}
