/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:26:59 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 10:47:32 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	int	i = 0;

	while (i < 100)
	{
		_ideas[i] = "Empty brain cell";
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain & toCopy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = toCopy;
}

Brain & Brain::operator=(const Brain & other)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &other)
	{
		int	i = 0;
		while (i < 100)
		{
			_ideas[i] = other._ideas[i];
			i++;
		}	
	}
	return (*this);
}