/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:42:10 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/15 10:17:48 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		_materiaBook[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		delete _materiaBook[i];
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource & toCopy)
{
	int	i = 0;

	while (i < 4)
	{
		if (toCopy._materiaBook[i] != NULL)
			_materiaBook[i] = toCopy._materiaBook[i]->clone();
		else
			_materiaBook[i] = NULL;
		i++;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
	int	i = 0;

	if (this != & other)
	{
		while (i < 4)
		{
			delete _materiaBook[i];
			if (other._materiaBook[i] != NULL)
				_materiaBook[i] = other._materiaBook[i]->clone();
			else
				_materiaBook[i] = NULL;
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (_materiaBook[i] == NULL)
		{
			_materiaBook[i] = m;
			std::cout << "Materia source just learned curse : " << _materiaBook[i]->getType() << std::endl;
			return;
		}
		i++;
	}
	std::cout << "The source is already full, no place left" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (i < 4)
	{
		if (_materiaBook[i] && _materiaBook[i]->getType() == type)
		{
			std::cout << "Materia source gives you curse : " << _materiaBook[i]->getType() << std::endl;
			return (_materiaBook[i]->clone());
		}
		i++;
	}
	return (NULL);
}
